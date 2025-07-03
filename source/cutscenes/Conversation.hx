package cutscenes;

import tjson.TJSON;
import haxe.Json;
import openfl.utils.Assets;

import flixel.addons.text.FlxTypeText;
import flixel.util.FlxTimer;
import backend.Song;
import backend.Paths;
import backend.CoolUtil;

private typedef ConversationBackdrop = {
     var type:String;
     var fadeTime:Float;
     var color:String;
}

private typedef ConversationMusic = {
     var asset:String;
     var fadeTime:Float;
     var looped:Bool;
}

private typedef ConversationOutro = {
     var type:String;
     var fadeTime:Float;
}

private typedef ConversationDialogue = {
     var speaker:String;
     var speakerAnimation:String;
     var box:String;
     var boxAnimation:String;
     var speed:Float;
     var speedChanges:Map<String, Float>;
     var text:Array<String>;
}

typedef ConversationData = {
     var backdrop:ConversationBackdrop;
     var music:ConversationMusic;
     var outro:ConversationOutro;
     var dialogue:Array<ConversationDialogue>;
}

private typedef TextContent = Array<Array<String>>;
private typedef TextLength  = Array<Array<Int>>;
class Conversation extends FlxSpriteGroup {
     var convDialogue:FlxTypeText;
     var convTextContent:TextContent = [];
     var convTextLength:TextLength   = [];

     var pageIndex:Int = 0;
     var textIndex:Int = 0;
     var textIndexLength:Int = 0;
	var textIndexLengthList:Array<Int> = [];

     var dialogueOpened:Bool  = false;
	var dialogueStarted:Bool = false;
     var dialoguePaused:Bool  = false;
	var dialogueEnded:Bool   = false;
     public function new(conversation:ConversationData) {
          super();

          for (dialogues in conversation.dialogue) {
               convTextContent.push(dialogues.text);

              var hi = dialogues.speedChanges;
          }
          for (dialogues in convTextContent) {
			for (lines in dialogues) {
				textLengthList(dialogues, lines);
			}
		}

	     convDialogue = new FlxTypeText(240, 500, Std.int(FlxG.width * 0.6), convTextContent[0].join(''), 32);
		convDialogue.font = Paths.font('Pixel Arial 11-Bold.ttf');
		convDialogue.color = 0xFF3F2021;
		convDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
		convDialogue.borderStyle = SHADOW;
		convDialogue.borderColor = 0xFFD89494;
		convDialogue.shadowOffset.set(2, 2);
		add(convDialogue);

          convDialogue.start(0.04, false);
     }

     /**
          Creates a list of conversation text length to switch or continue a dialogue.

          @param dialogues The given dialogue from the text content.
          @param lines The text list from the given dialogue.
          @return Nothing, self-explanatory.
     **/
     private function textLengthList(dialogues:Array<String>, lines:String):Void {
          if (dialogues.indexOf(lines) == 0 && dialogues.length - 1 == 0) {
			textIndexLength = 0;
			textIndexLengthList = [];

			convTextLength.push([lines.length]);
		} else {
			textIndexLength += lines.length;
			textIndexLengthList.push(textIndexLength);

			if (dialogues.indexOf(lines) == dialogues.length - 1) {
				convTextLength.push(textIndexLengthList);
			}
		}
     }

     override function update(elapsed:Float) {
          super.update(elapsed);

          if (!dialogueStarted) {
               dialogueStart();
               dialogueStarted = true;
          }
          dialogueContinue();

          if (Controls.instance.BACK) {

          } else if (Controls.instance.ACCEPT) {
               if (dialogueEnded) {
                    textIndex = 0;
                    pageIndex += 1;
                    dialoguePaused = false;

                    dialogueStart();
                    FlxG.sound.play(Paths.sound('clickText'), 0.8);
               } else if (dialoguePaused) {
                    convDialogue.paused = false;
                    dialoguePaused = false;
               } else if (dialogueStarted) {
                    convDialogue.skip();
                    FlxG.sound.play(Paths.sound('clickText'), 0.8);
               }
          }

          /* if (convTextContent[pageIndex] != null) {
               if (convTextLength[pageIndex][textIndex] > 0) {
                    if (convDialogue.text.length >= convTextLength[pageIndex][textIndex]) {
                         textIndex += 1;
                         convDialogue.paused = true;
                    }

                    if (Controls.instance.ACCEPT) {
                         convDialogue.paused = false;
                    }
               } else {
                    if (Controls.instance.ACCEPT) {
                         textIndex = 0;
                         pageIndex += 1;

                         if (convTextContent[pageIndex] == null) {
                              return;
                         }

                         convDialogue.resetText(convTextContent[pageIndex].join(''));
                         convDialogue.start(0.04, true);
                         FlxG.sound.play(Paths.sound('clickText'), 0.8);
                    }
               }
          } */
     }

     /**
          Starts the fucking dialogue.
          @return nothing, fuck you.
     **/
     public function dialogueStart():Void {
          if (convTextContent[pageIndex] == null) {
               return;
          }

          convDialogue.resetText(convTextContent[pageIndex].join(''));
          convDialogue.start(0.04, true);
          convDialogue.delay = 0.05;
          convDialogue.completeCallback = function() {
			dialogueEnded = true;
		};

          dialogueEnded = false;
     }

     /**
          Continues the dialogue, if it has any extra lines to begin with.
          @return nothing.
     **/
     public function dialogueContinue():Void {
          if (convTextContent[pageIndex] == null) {
               return;
          }
          if (convTextLength[pageIndex][textIndex] <= 0) {
               return;
          }

          if (convDialogue.text.length >= convTextLength[pageIndex][textIndex]) {
               textIndex += 1;
               convDialogue.paused = true;

               dialoguePaused = true;
          }
     }

     /**
          Parses the dialogue conversations' JSON.

          @param path The given path to parse the JSON, relative to the `dialogues` folder.
          @return The parsed dialogue conversation JSON.
     **/
     inline public static function dialogueParse(path:String):ConversationData {
		#if MODS_ALLOWED
		return (FileSystem.exists(path)) ? Json.parse(File.getContent(path)) : dialogueTemplate();
		#else
		return (Assets.exists(path, TEXT)) ? Json.parse(Assets.getText(path)) : dialogueTemplate();
		#end
	}

     /**
          Default dialogue conversation template, if the said JSON doesn't exist.
          @return The default template.
     **/
     inline public static function dialogueTemplate():ConversationData {
          return {
               backdrop: {
                    type: "solid",
                    fadeTime: 2.0,
                    color: "#000000"
               },
               music: {
                    asset: "",
                    fadeTime: 2.0,
                    looped: true
               },
               outro: {
                    type: "none",
                    fadeTime: 1.0
               },
               dialogue: [
                    {
                         speaker: "boyfriend",
                         speakerAnimation: "BF",
                         box: "default",
                         boxAnimation: "enter",
                         speed: 0.05,
                         speedChanges: new Map(),
                         text: [
                              "Cut copper stairs are a cut copper variant of stairs.",
                              " Unlike other types of stairs, cut copper stairs can oxidize over time."
                         ]
                    }
               ]
          }
     }
}
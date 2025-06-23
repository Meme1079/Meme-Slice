package cutscenes;

import flixel.addons.text.FlxTypeText;
import flixel.util.FlxTimer;
import backend.Song;
import backend.Paths;

class DialogueBoxMeme extends FlxSpriteGroup {
	var swagDialogue:FlxTypeText;

     var dialogues = [
          'IN A LUCID PARADISE'.toLowerCase(),
          ' YOU COME HERE TO BREAK THE TIME'.toLowerCase(),
          ' I\'LL MAKE YOU A PROTAGONIST'.toLowerCase(),
          ' AFTER WE PLAY HIDE AND SEEK'.toLowerCase()
     ];

     var dr:Int = 0;
		var de:Array<Int> = [];
	public function new() {
          super();

	     swagDialogue = new FlxTypeText(240, 500, Std.int(FlxG.width * 0.6), dialogues[0] + dialogues[1] + dialogues[2] + dialogues[3], 32);
		swagDialogue.font = Paths.font('pixel-latin.ttf');
		swagDialogue.color = 0xFF3F2021;
		swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
		swagDialogue.borderStyle = SHADOW;
		swagDialogue.borderColor = 0xFFD89494;
		swagDialogue.shadowOffset.set(2, 2);
		add(swagDialogue);

          swagDialogue.start(0.04, false);

          for (i in 0...dialogues.length) {
               dr += dialogues[i].length;
			de.push(dr);
		}
	}

     var index:Int = 0;
     override function update(elapsed:Float) {
          super.update(elapsed);
          
          if (swagDialogue.text.length >= de[index]) {
               index += 1;
               swagDialogue.paused = true;
          }

          if (Controls.instance.ACCEPT) {
               
               swagDialogue.paused = false;
          }
     }

}
package cutscenes;

import haxe.Json;
import openfl.utils.Assets;

import cutscenes.Conversation;

import flixel.addons.text.FlxTypeText;
import flixel.util.FlxTimer;
import backend.Song;
import backend.Paths;
import backend.CoolUtil;

class DialogueBox extends FlxSpriteGroup {
	var dialogueConversation:Conversation;

	public var onFinish:Void -> Void;
	public var onNextDialogue:Void -> Void = null;
	public var onSkipDialogue:Void -> Void = null;
	public function new(conversation:ConversationData, ?speaker) {
		super();
		
		dialogueConversation = new Conversation(conversation);
		dialogueConversation.onFinish = onFinish;
		add(dialogueConversation);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
	}
}
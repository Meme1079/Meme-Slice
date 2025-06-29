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
	
	public function new(conversation:ConversationData, ?speaker) {
		super();
		
		var d = new Conversation(conversation);
		add(d);
	}
}
package objects;

import backend.animation.PsychAnimationController;
import shaders.RGBPalette;
import flixel.system.FlxAssets.FlxShader;

import flixel.util.FlxTimer;

private typedef RGB = {
	r:Null<Int>,
	g:Null<Int>,
	b:Null<Int>
}

class NoteHoldCover extends FlxSprite {
	public var rgbShader:Any;
     public var texture:String = null;
     public var strumNote:StrumNote;
	public var noteData:Int = 0;

	public var copyX:Bool = true;
	public var copyY:Bool = true;
	public var inEditor:Bool = false;

	public static var startCrochet:Float;
     public static var defaultNoteHoldCover(default, never):String = "noteHoldCovers/noteHoldCovers";
     public function new(?x:Float, ?y:Float, ?holdCover:String) {
          super(x, y);

          animation = new PsychAnimationController(this);
          loadNoteHold(holdCover);
     }

	private static var noteColors:Array<String> = Note.colArray;
     public function loadNoteHold(?holdcover:String) {
		if (holdcover == null) {
			holdcover = defaultNoteHoldCover + getHoldCoverSkinPostfix();
			if (PlayState.SONG != null && PlayState.SONG.holdCoverSkin != null && PlayState.SONG.holdCoverSkin.length > 0) 
				holdcover = PlayState.SONG.holdCoverSkin;
		}

          texture = holdcover;
          frames  = Paths.getSparrowAtlas(texture);
		if (frames == null) {
			texture = defaultNoteHoldCover + getHoldCoverSkinPostfix();
			frames  = Paths.getSparrowAtlas(texture);
			if (frames == null) {
				texture = defaultNoteHoldCover;
				frames = Paths.getSparrowAtlas(texture);
			}
		}

          animation.addByPrefix('greenStart', 'holdCoverStartGreen', 24, false);
		animation.addByPrefix('blueStart', 'holdCoverStartBlue', 24, false);
		animation.addByPrefix('purpleStart', 'holdCoverStartPurple', 24, false);
		animation.addByPrefix('redStart', 'holdCoverStartRed', 24, false);

		animation.addByPrefix('green', 'holdCoverGreen', 24, true);
		animation.addByPrefix('blue', 'holdCoverBlue', 24, true);
		animation.addByPrefix('purple', 'holdCoverPurple', 24, true);
		animation.addByPrefix('red', 'holdCoverRed', 24, true);

		animation.addByPrefix('greenEnd', 'holdCoverEndGreen', 24, false);
		animation.addByPrefix('blueEnd', 'holdCoverEndBlue', 24, false);
		animation.addByPrefix('purpleEnd', 'holdCoverEndPurple', 24, false);
		animation.addByPrefix('redEnd', 'holdCoverEndRed', 24, false);
     }

     public function spawnNoteHold(?x:Float = 0, ?y:Float = 0, ?noteData:Int = 0, ?note:Note, ?strum:Bool = true, ?playbackRate:Float) {
		if (note != null && note.noteHoldCoverData.disabled) {
			return;
		}
          loadNoteHold(defaultNoteHoldCover);
		setPosition(x, y);

          if (strumNote != null)
			setPosition(strumNote.x - Note.swagWidth * 0.95, (strumNote.y - Note.swagWidth) + 10);
		if (note != null)
			noteData = note.noteData;
		this.noteData = noteData;
		
		alpha = ClientPrefs.data.holdCoverAlpha;
		if (note != null)
			alpha = note.noteHoldCoverData.a;
		if (!inEditor && ClientPrefs.data.middleScroll) {
			if (note.mustPress) {
				alpha = note.noteHoldCoverData.a;
			} else {
				alpha = strumNote.alpha;
			}
		}

		antialiasing = ClientPrefs.data.antialiasing;
		if (note != null) 
			antialiasing = note.noteHoldCoverData.antialiasing;
		if (PlayState.stageUI == 'pixel') 
			antialiasing = false;

		var tempShader:RGBPalette;
		Note.initializeGlobalRGBShader(noteData % noteColors.length);

		var noteUsedRGBShader:Bool    = note == null || note.noteSplashData.useRGBShader;
		var noteUsedGlobalShader:Bool = note == null || note.noteSplashData.useRGBShader;
		var noteDisableShader:Bool    = PlayState.SONG == null || !PlayState.SONG.disableNoteRGB;
		if (inEditor || (noteUsedRGBShader) && (noteDisableShader)) {
			tempShader = new RGBPalette();

			if (noteUsedGlobalShader) {
				var arr:Array<FlxColor> = ClientPrefs.data.arrowRGB[noteData % Note.colArray.length];
				if (PlayState.stageUI == 'pixel') arr = ClientPrefs.data.arrowRGBPixel[noteData % Note.colArray.length];

				tempShader.r = arr[0];
        			tempShader.g = arr[1];
        			tempShader.b = arr[2];
				shader = tempShader.shader;
			}
		}

          animation.play(noteColors[noteData] + 'Start', true);

		if (inEditor == false) { // From fucking P-Slice
			final lengthToGet:Int    = !note.isSustainNote ? note.tail.length : note.parent.tail.length;
			final timeToGet:Float    = !note.isSustainNote ? note.strumTime : note.parent.strumTime;
			final timeDuration:Float = (startCrochet * lengthToGet + (timeToGet - Conductor.songPosition + ClientPrefs.data.ratingOffset)) / playbackRate * .001;
			new FlxTimer().start(timeDuration, function(timer:FlxTimer) { 
				animation.play(noteColors[noteData] + 'End', true);
			});
		} else {
			new FlxTimer().start(2, function(timer:FlxTimer) { 
				animation.play(noteColors[noteData] + 'End', true);
			});
		}

		animation.onFinish.add((animName:String) -> {
			if (animName == noteColors[noteData] + 'Start') {
				animation.play(noteColors[noteData], true);
			}
               if (animName == noteColors[noteData] + 'End') {
				kill();
			}
		});
     }

	override function update(elapsed:Float) {
		if (strumNote != null) {
			if (copyX)
				x = strumNote.x - Note.swagWidth * 0.95;
			if (copyY)
				y = strumNote.y - Note.swagWidth + 10;
		}
		super.update(elapsed);
	}

	public static function getHoldCoverSkinPostfix() {
		var skin:String = '';
		if (ClientPrefs.data.holdCoverSkin != ClientPrefs.defaultData.holdCoverSkin) {
			skin = '-' + ClientPrefs.data.holdCoverSkin.trim().toLowerCase().replace(' ', '-');
		}
		return skin;
	}
}
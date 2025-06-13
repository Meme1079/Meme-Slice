package objects;

import backend.animation.PsychAnimationController;

import shaders.RGBPalette;
import shaders.RGBPalette.RGBShaderReference;
class StrumNote extends FlxSprite {
     public var rgbShader:RGBShaderReference;
     public var useRGBShader:Bool = true;
	public var resetAnim:Float = 0;

	public var direction:Float = 90;
	public var downScroll:Bool = false;
	public var sustainReduce:Bool = true;
     public var texture(default, set):String = null;
	
     private var player:Int;
     private var noteData:Int = 0;
	public function new(x:Float, y:Float, leData:Int, player:Int) {
          var arrowArrayRGB:Array<FlxColor> = ClientPrefs.data.arrowRGB[leData];

		animation = new PsychAnimationController(this);
		rgbShader = new RGBShaderReference(this, Note.initializeGlobalRGBShader(leData));
		rgbShader.enabled = false;

		if (PlayState.SONG != null && PlayState.SONG.disableNoteRGB) {
               useRGBShader = false;
          }
          if (PlayState.isPixelStage) {
               arrowArrayRGB = ClientPrefs.data.arrowRGBPixel[leData];
          }
	
		if (leData <= arrowArrayRGB.length) {
			@:bypassAccessor{ rgbShader.r = arrowArrayRGB[0]; rgbShader.g = arrowArrayRGB[1]; rgbShader.b = arrowArrayRGB[2]; }
		}

		noteData      = leData;
		this.player   = player;
		this.noteData = leData;
		this.ID       = noteData;
		super(x, y);

          var curSkinChecks:Bool = PlayState.SONG != null && PlayState.SONG.arrowSkin != null && PlayState.SONG.arrowSkin.length > 1;
		var curSkin:String     = curSkinChecks ? PlayState.SONG.arrowSkin : Note.defaultNoteSkin;

		var curCustomSkin:String = curSkin + Note.getNoteSkinPostfix();
		if (Paths.fileExists('images/$curCustomSkin.png', IMAGE)) {
               curSkin = curCustomSkin;
          }

		texture = curSkin; //Load texture and anims
		scrollFactor.set();
		playAnim('static');
	}

     private function reloadNoteByPixel() {
          loadGraphic(Paths.image('pixelUI/' + texture));
		width  = width / 4;
		height = height / 5;
		loadGraphic(Paths.image('pixelUI/' + texture), true, Math.floor(width), Math.floor(height));

		antialiasing = false;
		setGraphicSize(Std.int(width * PlayState.daPixelZoom));

		animation.add('green', [6]);
		animation.add('red', [7]);
		animation.add('blue', [5]);
		animation.add('purple', [4]);
		switch (Math.abs(noteData) % 4) {
			case 0:
				animation.add('static', [0]);
				animation.add('pressed', [4, 8], 12, false);
				animation.add('confirm', [12, 16], 24, false);
			case 1:
				animation.add('static', [1]);
				animation.add('pressed', [5, 9], 12, false);
				animation.add('confirm', [13, 17], 24, false);
			case 2:
				animation.add('static', [2]);
				animation.add('pressed', [6, 10], 12, false);
				animation.add('confirm', [14, 18], 12, false);
			case 3:
				animation.add('static', [3]);
				animation.add('pressed', [7, 11], 12, false);
				animation.add('confirm', [15, 19], 24, false);
		}
     }

     private function reloadNoteByFunkin() {
          frames = Paths.getSparrowAtlas(texture);
		animation.addByPrefix('green', 'arrowUP');
		animation.addByPrefix('blue', 'arrowDOWN');
		animation.addByPrefix('purple', 'arrowLEFT');
		animation.addByPrefix('red', 'arrowRIGHT');

		antialiasing = ClientPrefs.data.antialiasing;
		setGraphicSize(Std.int(width * 0.7));

		switch (Math.abs(noteData) % 4) {
			case 0:
				animation.addByPrefix('static', 'arrowLEFT');
				animation.addByPrefix('pressed', 'left press', 24, false);
				animation.addByPrefix('confirm', 'left confirm', 24, false);
			case 1:
				animation.addByPrefix('static', 'arrowDOWN');
				animation.addByPrefix('pressed', 'down press', 24, false);
				animation.addByPrefix('confirm', 'down confirm', 24, false);
			case 2:
				animation.addByPrefix('static', 'arrowUP');
				animation.addByPrefix('pressed', 'up press', 24, false);
				animation.addByPrefix('confirm', 'up confirm', 24, false);
			case 3:
				animation.addByPrefix('static', 'arrowRIGHT');
				animation.addByPrefix('pressed', 'right press', 24, false);
				animation.addByPrefix('confirm', 'right confirm', 24, false);
		}
     }

     public function reloadNote() {
          var lastAnim:String = null;
		if (animation.curAnim != null) {
               lastAnim = animation.curAnim.name;
          }

          if (PlayState.isPixelStage) {
               reloadNoteByPixel();
          } else {
               reloadNoteByFunkin();
          }
          updateHitbox();

          if (lastAnim != null) {
			playAnim(lastAnim, true);
		}
     }

     private function set_texture(value:String):String {
		if (texture != value) {
			texture = value;
			reloadNote();
		}
		return value;
	}

     public function playerPosition() {
		x += Note.swagWidth * noteData;
		x += 50;
		x += ((FlxG.width / 2) * player);
	}

	override function update(elapsed:Float) {
		if (resetAnim > 0) {
			resetAnim -= elapsed;
			if (resetAnim <= 0) {
				playAnim('static');
				resetAnim = 0;
			}
		}
		super.update(elapsed);
	}

	public function playAnim(anim:String, ?force:Bool = false) {
		animation.play(anim, force);
          
		if (animation.curAnim != null) {
			centerOffsets();
			centerOrigin();
		}
		if (useRGBShader) {
               rgbShader.enabled = (animation.curAnim != null && animation.curAnim.name != 'static');
          }
	}
}
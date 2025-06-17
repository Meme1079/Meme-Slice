package funkin.ui;

import flixel.system.ui.FlxSoundTray;
import flixel.system.FlxAssets.FlxSoundAsset;

import openfl.display.Bitmap;
import openfl.utils.Assets;
import funkin.util.MathUtil;
import backend.Paths;
import backend.ClientPrefs;
import backend.InputFormatter;

/**
     *  Extends the default flixel soundtray, but with some art
     *  and lil polish!
     *
     *  Gets added to the game in Main.hx, right after FlxGame is new'd
     *  since it's a Sprite rather than Flixel related object
*/
class FunkinSoundTray extends FlxSoundTray {
     var graphicScale:Float = 0.30;
     var lerpYPos:Float = 0;
     var alphaTarget:Float = 0;

     var volumeMaxSound:String;
     public function new() {
          super();
          removeChildren();

          var bg:Bitmap = new Bitmap(Assets.getBitmapData(Paths.getPath("images/soundtray/volumebox.png")));
          bg.scaleX = graphicScale;
          bg.scaleY = graphicScale;
          bg.smoothing = true;
          addChild(bg);

          var backingBar:Bitmap = new Bitmap(Assets.getBitmapData(Paths.getPath("images/soundtray/bars_10.png")));
          backingBar.x = 9;
          backingBar.y = 5;
          backingBar.scaleX = graphicScale;
          backingBar.scaleY = graphicScale;
          backingBar.smoothing = true;
          addChild(backingBar);
          backingBar.alpha = 0.4;

          _bars = [];
          for (i in 1...11) {
               var bar:Bitmap = new Bitmap(Assets.getBitmapData(Paths.getPath('images/soundtray/bars_$i.png')));
               bar.x = 9;
               bar.y = 5;
               bar.scaleX = graphicScale;
               bar.scaleY = graphicScale;
               bar.smoothing = true;
               addChild(bar);
               _bars.push(bar);
          }

          screenCenter();
          y = -height;
          visible = false;

          volumeUpSound   = Paths.getPath("sounds/soundtray/Volup.ogg", true);
          volumeDownSound = Paths.getPath("sounds/soundtray/Voldown.ogg", true);
          volumeMaxSound  = Paths.getPath("sounds/soundtray/VolMAX.ogg", true);
     }

     override public function update(ms:Float):Void {
          y     = MathUtil.coolLerp(y, lerpYPos, 0.1);
          alpha = MathUtil.coolLerp(alpha, alphaTarget, 0.25);

          if (_timer > 0) {
                    _timer -= (ms / 1000);
          } else if (y >= -height) {
               lerpYPos = -height - 10;
               alphaTarget = 0;
          }

          if (y <= -height) {
               visible = false;
               active = false;

               #if FLX_SAVE
               if (FlxG.save.isBound) {
                    FlxG.save.data.mute = FlxG.sound.muted;
                    FlxG.save.data.volume = FlxG.sound.volume;
                    FlxG.save.flush();
               }
               #end
          }
     }

     /**
	     * Shows the volume animation for the desired settings
	     * @param   volume    The volume, 1.0 is full volume
	     * @param   sound     The sound to play, if any
	     * @param   duration  How long the tray will show
	     * @param   label     The text label to display
	*/
     override public function showAnim(volume:Float, ?sound:FlxSoundAsset, duration = 1.0, label = "VOLUME"):Void {
          _timer   = 1;
          lerpYPos = 10;
          visible  = true;
          active   = true;
          alphaTarget = 1;

          var globalVolume:Int = Math.round(FlxG.sound.applySoundCurve(FlxG.sound.volume) * 10);
          if (FlxG.sound.muted || FlxG.sound.volume == 0)  {
               globalVolume = 0;
          }
              
          if (sound != null) {
               if (globalVolume == 10) {
                    FlxG.sound.play(FlxG.assets.getSoundAddExt(volumeMaxSound));
               } else {
                    FlxG.sound.play(FlxG.assets.getSoundAddExt(sound));
               }
          }
			
          for (i in 0..._bars.length) {
               if (i < globalVolume) {
				_bars[i].visible = true;
			} else {
				_bars[i].visible = false;
			}
          }
     }
}
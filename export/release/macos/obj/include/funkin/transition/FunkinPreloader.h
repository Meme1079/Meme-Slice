// Generated by Haxe 4.3.7
#ifndef INCLUDED_funkin_transition_FunkinPreloader
#define INCLUDED_funkin_transition_FunkinPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,FlxBasePreloader)
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxBasePreloader,DefaultPreloader)
HX_DECLARE_CLASS2(funkin,transition,FunkinPreloader)
HX_DECLARE_CLASS2(funkin,transition,FunkinPreloaderState)
HX_DECLARE_CLASS2(funkin,transition,VFDOverlay)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace funkin{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES FunkinPreloader_obj : public  ::flixel::_hx_system::FlxBasePreloader_obj
{
	public:
		typedef  ::flixel::_hx_system::FlxBasePreloader_obj super;
		typedef FunkinPreloader_obj OBJ_;
		FunkinPreloader_obj();

	public:
		enum { _hx_ClassId = 0x7982e79f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="funkin.transition.FunkinPreloader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"funkin.transition.FunkinPreloader"); }
		static ::hx::ObjectPtr< FunkinPreloader_obj > __new();
		static ::hx::ObjectPtr< FunkinPreloader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FunkinPreloader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FunkinPreloader",e5,cb,45,c9); }

		static void __boot();
		static Float BASE_WIDTH;
		static Float BAR_PADDING;
		static int BAR_HEIGHT;
		static Float LOGO_FADE_TIME;
		static int TOTAL_STEPS;
		static Float ELLIPSIS_TIME;
		Float ratio;
		 ::funkin::transition::FunkinPreloaderState currentState;
		Float downloadingAssetsPercent;
		bool downloadingAssetsComplete;
		Float preloadingPlayAssetsPercent;
		Float preloadingPlayAssetsStartTime;
		bool preloadingPlayAssetsComplete;
		Float cachingGraphicsPercent;
		Float cachingGraphicsStartTime;
		bool cachingGraphicsComplete;
		Float cachingAudioPercent;
		Float cachingAudioStartTime;
		bool cachingAudioComplete;
		Float cachingDataPercent;
		Float cachingDataStartTime;
		bool cachingDataComplete;
		Float parsingSpritesheetsPercent;
		Float parsingSpritesheetsStartTime;
		bool parsingSpritesheetsComplete;
		Float parsingStagesPercent;
		Float parsingStagesStartTime;
		bool parsingStagesComplete;
		Float parsingCharactersPercent;
		Float parsingCharactersStartTime;
		bool parsingCharactersComplete;
		Float parsingSongsPercent;
		Float parsingSongsStartTime;
		bool parsingSongsComplete;
		Float initializingScriptsPercent;
		Float cachingCoreAssetsPercent;
		Float completeTime;
		 ::openfl::display::Bitmap logo;
		::Array< ::Dynamic> progressBarPieces;
		 ::openfl::display::Bitmap progressBar;
		 ::openfl::text::TextField progressLeftText;
		 ::openfl::text::TextField progressRightText;
		 ::openfl::text::TextField dspText;
		 ::openfl::text::TextField fnfText;
		 ::openfl::text::TextField enhancedText;
		 ::openfl::text::TextField stereoText;
		 ::funkin::transition::VFDOverlay vfdShader;
		 ::openfl::display::Bitmap vfdBitmap;
		 ::openfl::display::Sprite box;
		 ::openfl::display::Sprite progressLines;
		void create();

		Float lastElapsed;
		void update(Float percent);

		Float updateState(Float percent,Float elapsed);
		::Dynamic updateState_dyn();

		void updateGraphics(Float percent,Float elapsed);
		::Dynamic updateGraphics_dyn();

		void updateProgressLeftText(::String text);
		::Dynamic updateProgressLeftText_dyn();

		void immediatelyStartGame();
		::Dynamic immediatelyStartGame_dyn();

		Float renderLogoFadeOut(Float elapsed);
		::Dynamic renderLogoFadeOut_dyn();

		void renderLogoFadeIn(Float elapsed);
		::Dynamic renderLogoFadeIn_dyn();

		void destroy();

		void onLoaded();

};

} // end namespace funkin
} // end namespace transition

#endif /* INCLUDED_funkin_transition_FunkinPreloader */ 

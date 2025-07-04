// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display_DefaultPreloader
#define INCLUDED_openfl_display_DefaultPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DefaultPreloader_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef DefaultPreloader_obj OBJ_;
		DefaultPreloader_obj();

	public:
		enum { _hx_ClassId = 0x60ddee07 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DefaultPreloader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.DefaultPreloader"); }
		static ::hx::ObjectPtr< DefaultPreloader_obj > __new();
		static ::hx::ObjectPtr< DefaultPreloader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultPreloader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultPreloader",95,27,6f,5f); }

		static void __boot();
		static  ::Dynamic __meta__;
		int endAnimation;
		 ::openfl::display::Shape outline;
		 ::openfl::display::Shape progress;
		int startAnimation;
		int getBackgroundColor();
		::Dynamic getBackgroundColor_dyn();

		Float getHeight();
		::Dynamic getHeight_dyn();

		Float getWidth();
		::Dynamic getWidth_dyn();

		void onInit();
		::Dynamic onInit_dyn();

		void onLoaded();
		::Dynamic onLoaded_dyn();

		void onUpdate(int bytesLoaded,int bytesTotal);
		::Dynamic onUpdate_dyn();

		void this_onAddedToStage( ::openfl::events::Event event);
		::Dynamic this_onAddedToStage_dyn();

		void this_onComplete( ::openfl::events::Event event);
		::Dynamic this_onComplete_dyn();

		void this_onEnterFrame( ::openfl::events::Event event);
		::Dynamic this_onEnterFrame_dyn();

		void this_onProgress( ::openfl::events::ProgressEvent event);
		::Dynamic this_onProgress_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DefaultPreloader */ 

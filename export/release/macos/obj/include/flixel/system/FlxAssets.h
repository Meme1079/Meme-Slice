// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_system_FlxAssets
#define INCLUDED_flixel_system_FlxAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxAssets)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxAssets_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAssets_obj OBJ_;
		FlxAssets_obj();

	public:
		enum { _hx_ClassId = 0x0d7f0aca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.FlxAssets")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.FlxAssets"); }

		inline static ::hx::ObjectPtr< FlxAssets_obj > __new() {
			::hx::ObjectPtr< FlxAssets_obj > __this = new FlxAssets_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxAssets_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxAssets_obj *__this = (FlxAssets_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAssets_obj), false, "flixel.system.FlxAssets"));
			*(void **)__this = FlxAssets_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAssets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAssets",75,42,f2,cd); }

		static void __boot();
		static ::String defaultSoundExtension;
		static ::String FONT_DEFAULT;
		static ::String FONT_DEBUGGER;
		static void drawLogo( ::openfl::display::Graphics graph);
		static ::Dynamic drawLogo_dyn();

		static  ::openfl::display::BitmapData getBitmapData(::String id);
		static ::Dynamic getBitmapData_dyn();

		static  ::openfl::display::BitmapData getBitmapFromClass(::hx::Class source);
		static ::Dynamic getBitmapFromClass_dyn();

		static  ::openfl::display::BitmapData resolveBitmapData( ::Dynamic graphic);
		static ::Dynamic resolveBitmapData_dyn();

		static ::String resolveKey( ::Dynamic graphic,::String key);
		static ::Dynamic resolveKey_dyn();

		static  ::openfl::media::Sound getSound(::String id);
		static ::Dynamic getSound_dyn();

		static  ::openfl::media::Sound getSoundAddExtension(::String id,::hx::Null< bool >  useCache);
		static ::Dynamic getSoundAddExtension_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames getVirtualInputFrames();
		static ::Dynamic getVirtualInputFrames_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxAssets */ 

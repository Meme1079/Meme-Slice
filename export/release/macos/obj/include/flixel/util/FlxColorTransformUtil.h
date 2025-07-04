// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#define INCLUDED_flixel_util_FlxColorTransformUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxColorTransformUtil)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxColorTransformUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxColorTransformUtil_obj OBJ_;
		FlxColorTransformUtil_obj();

	public:
		enum { _hx_ClassId = 0x2588ff77 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxColorTransformUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxColorTransformUtil"); }

		inline static ::hx::ObjectPtr< FlxColorTransformUtil_obj > __new() {
			::hx::ObjectPtr< FlxColorTransformUtil_obj > __this = new FlxColorTransformUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxColorTransformUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxColorTransformUtil_obj *__this = (FlxColorTransformUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxColorTransformUtil_obj), false, "flixel.util.FlxColorTransformUtil"));
			*(void **)__this = FlxColorTransformUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxColorTransformUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxColorTransformUtil",1d,71,db,d2); }

		static  ::openfl::geom::ColorTransform reset( ::openfl::geom::ColorTransform transform);
		static ::Dynamic reset_dyn();

		static bool hasRGBMultipliers( ::openfl::geom::ColorTransform transform);
		static ::Dynamic hasRGBMultipliers_dyn();

		static bool hasRGBAMultipliers( ::openfl::geom::ColorTransform transform);
		static ::Dynamic hasRGBAMultipliers_dyn();

		static bool hasRGBOffsets( ::openfl::geom::ColorTransform transform);
		static ::Dynamic hasRGBOffsets_dyn();

		static bool hasRGBAOffsets( ::openfl::geom::ColorTransform transform);
		static ::Dynamic hasRGBAOffsets_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxColorTransformUtil */ 

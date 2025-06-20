// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_tweens_misc_ShakeTween
#define INCLUDED_flixel_tweens_misc_ShakeTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,ShakeTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES ShakeTween_obj : public  ::flixel::tweens::FlxTween_obj
{
	public:
		typedef  ::flixel::tweens::FlxTween_obj super;
		typedef ShakeTween_obj OBJ_;
		ShakeTween_obj();

	public:
		enum { _hx_ClassId = 0x266d979d };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.misc.ShakeTween")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.misc.ShakeTween"); }
		static ::hx::ObjectPtr< ShakeTween_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< ShakeTween_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShakeTween_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShakeTween",e5,f1,76,26); }

		Float intensity;
		int axes;
		 ::flixel::FlxSprite sprite;
		 ::flixel::math::FlxBasePoint initialOffset;
		 ::flixel::tweens::misc::ShakeTween tween( ::flixel::FlxSprite Sprite,::hx::Null< Float >  Intensity,::hx::Null< Float >  Duration,::hx::Null< int >  Axes);
		::Dynamic tween_dyn();

		void destroy();

		void update(Float elapsed);

		bool isTweenOf( ::Dynamic Object,::String Field);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_ShakeTween */ 

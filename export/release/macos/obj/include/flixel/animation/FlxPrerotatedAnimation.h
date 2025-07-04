// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#define INCLUDED_flixel_animation_FlxPrerotatedAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxPrerotatedAnimation)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES FlxPrerotatedAnimation_obj : public  ::flixel::animation::FlxBaseAnimation_obj
{
	public:
		typedef  ::flixel::animation::FlxBaseAnimation_obj super;
		typedef FlxPrerotatedAnimation_obj OBJ_;
		FlxPrerotatedAnimation_obj();

	public:
		enum { _hx_ClassId = 0x28a04c74 };

		void __construct( ::flixel::animation::FlxAnimationController Parent,Float Baked);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxPrerotatedAnimation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.animation.FlxPrerotatedAnimation"); }
		static ::hx::ObjectPtr< FlxPrerotatedAnimation_obj > __new( ::flixel::animation::FlxAnimationController Parent,Float Baked);
		static ::hx::ObjectPtr< FlxPrerotatedAnimation_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController Parent,Float Baked);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPrerotatedAnimation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxPrerotatedAnimation",0c,d5,4f,ad); }

		static void __boot();
		static ::String PREROTATED;
		int rotations;
		Float baked;
		Float angle;
		Float set_angle(Float Value);
		::Dynamic set_angle_dyn();

		int set_curIndex(int Value);

		 ::flixel::animation::FlxBaseAnimation clone( ::flixel::animation::FlxAnimationController Parent);

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxPrerotatedAnimation */ 

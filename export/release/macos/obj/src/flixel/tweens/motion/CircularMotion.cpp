// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e14b7ff05c9131a_6_new,"flixel.tweens.motion.CircularMotion","new",0xf11036cb,"flixel.tweens.motion.CircularMotion.new","flixel/tweens/motion/CircularMotion.hx",6,0x4765ac04)
HX_LOCAL_STACK_FRAME(_hx_pos_0e14b7ff05c9131a_38_setMotion,"flixel.tweens.motion.CircularMotion","setMotion",0x3f8a8423,"flixel.tweens.motion.CircularMotion.setMotion","flixel/tweens/motion/CircularMotion.hx",38,0x4765ac04)
HX_LOCAL_STACK_FRAME(_hx_pos_0e14b7ff05c9131a_59_update,"flixel.tweens.motion.CircularMotion","update",0x6646b47e,"flixel.tweens.motion.CircularMotion.update","flixel/tweens/motion/CircularMotion.hx",59,0x4765ac04)
HX_LOCAL_STACK_FRAME(_hx_pos_0e14b7ff05c9131a_72_get_circumference,"flixel.tweens.motion.CircularMotion","get_circumference",0x1cf82811,"flixel.tweens.motion.CircularMotion.get_circumference","flixel/tweens/motion/CircularMotion.hx",72,0x4765ac04)
namespace flixel{
namespace tweens{
namespace motion{

void CircularMotion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_0e14b7ff05c9131a_6_new)
HXLINE(  23)		this->_angleFinish = ((Float)0);
HXLINE(  22)		this->_angleStart = ((Float)0);
HXLINE(  21)		this->_radius = ((Float)0);
HXLINE(  20)		this->_centerY = ((Float)0);
HXLINE(  19)		this->_centerX = ((Float)0);
HXLINE(  11)		this->angle = ((Float)0);
HXLINE(   6)		super::__construct(Options,manager);
            	}

Dynamic CircularMotion_obj::__CreateEmpty() { return new CircularMotion_obj; }

void *CircularMotion_obj::_hx_vtable = 0;

Dynamic CircularMotion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CircularMotion_obj > _hx_result = new CircularMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CircularMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x197095b3) {
		if (inClassId<=(int)0x104846c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
		} else {
			return inClassId==(int)0x197095b3;
		}
	} else {
		return inClassId==(int)0x21dceb90;
	}
}

 ::flixel::tweens::motion::CircularMotion CircularMotion_obj::setMotion(Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,::hx::Null< bool >  __o_UseDuration){
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_0e14b7ff05c9131a_38_setMotion)
HXLINE(  39)		this->_centerX = CenterX;
HXLINE(  40)		this->_centerY = CenterY;
HXLINE(  41)		this->_radius = Radius;
HXLINE(  42)		this->angle = (this->_angleStart = ((Angle * ::Math_obj::PI) / ( (Float)(-180) )));
HXLINE(  43)		int _hx_tmp;
HXDLIN(  43)		if (Clockwise) {
HXLINE(  43)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  43)			_hx_tmp = -1;
            		}
HXDLIN(  43)		this->_angleFinish = ((::Math_obj::PI * ( (Float)(2) )) * ( (Float)(_hx_tmp) ));
HXLINE(  45)		if (UseDuration) {
HXLINE(  47)			this->duration = DurationOrSpeed;
            		}
            		else {
HXLINE(  51)			this->duration = ((this->_radius * (::Math_obj::PI * ( (Float)(2) ))) / DurationOrSpeed);
            		}
HXLINE(  54)		this->start();
HXLINE(  55)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC7(CircularMotion_obj,setMotion,return )

void CircularMotion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0e14b7ff05c9131a_59_update)
HXLINE(  60)		this->super::update(elapsed);
HXLINE(  61)		this->angle = (this->_angleStart + (this->_angleFinish * this->scale));
HXLINE(  62)		this->x = (this->_centerX + (::Math_obj::cos(this->angle) * this->_radius));
HXLINE(  63)		this->y = (this->_centerY + (::Math_obj::sin(this->angle) * this->_radius));
HXLINE(  64)		if (this->finished) {
HXLINE(  66)			this->postUpdate();
            		}
            	}


Float CircularMotion_obj::get_circumference(){
            	HX_STACKFRAME(&_hx_pos_0e14b7ff05c9131a_72_get_circumference)
HXDLIN(  72)		return (this->_radius * (::Math_obj::PI * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CircularMotion_obj,get_circumference,return )


::hx::ObjectPtr< CircularMotion_obj > CircularMotion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< CircularMotion_obj > __this = new CircularMotion_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< CircularMotion_obj > CircularMotion_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	CircularMotion_obj *__this = (CircularMotion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CircularMotion_obj), true, "flixel.tweens.motion.CircularMotion"));
	*(void **)__this = CircularMotion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

CircularMotion_obj::CircularMotion_obj()
{
}

::hx::Val CircularMotion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return ::hx::Val( _radius ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { return ::hx::Val( _centerX ); }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return ::hx::Val( _centerY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return ::hx::Val( setMotion_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { return ::hx::Val( _angleStart ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { return ::hx::Val( _angleFinish ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"circumference") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_circumference() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_circumference") ) { return ::hx::Val( get_circumference_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CircularMotion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { _angleStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { _angleFinish=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircularMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("circumference",0f,71,f9,4d));
	outFields->push(HX_("_centerX",64,4e,9e,53));
	outFields->push(HX_("_centerY",65,4e,9e,53));
	outFields->push(HX_("_radius",f1,e1,6d,1f));
	outFields->push(HX_("_angleStart",ae,b0,1a,5a));
	outFields->push(HX_("_angleFinish",87,c6,c4,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CircularMotion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(CircularMotion_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsFloat,(int)offsetof(CircularMotion_obj,_centerX),HX_("_centerX",64,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(CircularMotion_obj,_centerY),HX_("_centerY",65,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(CircularMotion_obj,_radius),HX_("_radius",f1,e1,6d,1f)},
	{::hx::fsFloat,(int)offsetof(CircularMotion_obj,_angleStart),HX_("_angleStart",ae,b0,1a,5a)},
	{::hx::fsFloat,(int)offsetof(CircularMotion_obj,_angleFinish),HX_("_angleFinish",87,c6,c4,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CircularMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String CircularMotion_obj_sMemberFields[] = {
	HX_("angle",d3,43,e2,22),
	HX_("_centerX",64,4e,9e,53),
	HX_("_centerY",65,4e,9e,53),
	HX_("_radius",f1,e1,6d,1f),
	HX_("_angleStart",ae,b0,1a,5a),
	HX_("_angleFinish",87,c6,c4,fd),
	HX_("setMotion",78,fb,04,2b),
	HX_("update",09,86,05,87),
	HX_("get_circumference",66,7c,69,54),
	::String(null()) };

::hx::Class CircularMotion_obj::__mClass;

void CircularMotion_obj::__register()
{
	CircularMotion_obj _hx_dummy;
	CircularMotion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.CircularMotion",59,75,cc,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CircularMotion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CircularMotion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CircularMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CircularMotion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

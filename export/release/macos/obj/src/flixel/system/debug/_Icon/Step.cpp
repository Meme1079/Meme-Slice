// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Icon_Step
#include <flixel/system/debug/_Icon/Step.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29dd723f0a254fc2_87_new,"flixel.system.debug._Icon.Step","new",0x8168a09c,"flixel.system.debug._Icon.Step.new","flixel/system/debug/Icon.hx",87,0x2ea0993c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Icon{

void Step_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_29dd723f0a254fc2_87_new)
HXDLIN(  87)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic Step_obj::__CreateEmpty() { return new Step_obj; }

void *Step_obj::_hx_vtable = 0;

Dynamic Step_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Step_obj > _hx_result = new Step_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Step_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x60167fbc;
	}
}


::hx::ObjectPtr< Step_obj > Step_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< Step_obj > __this = new Step_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< Step_obj > Step_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	Step_obj *__this = (Step_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Step_obj), true, "flixel.system.debug._Icon.Step"));
	*(void **)__this = Step_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

Step_obj::Step_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Step_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Step_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Step_obj::__mClass;

void Step_obj::__register()
{
	Step_obj _hx_dummy;
	Step_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Icon.Step",aa,62,35,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Step_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Step_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Step_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Icon

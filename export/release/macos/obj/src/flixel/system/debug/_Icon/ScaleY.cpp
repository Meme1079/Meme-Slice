// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Icon_ScaleY
#include <flixel/system/debug/_Icon/ScaleY.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be9a0ae536041742_21_new,"flixel.system.debug._Icon.ScaleY","new",0x59f4d4df,"flixel.system.debug._Icon.ScaleY.new","flixel/system/debug/Icon.hx",21,0x2ea0993c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Icon{

void ScaleY_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_be9a0ae536041742_21_new)
HXDLIN(  21)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic ScaleY_obj::__CreateEmpty() { return new ScaleY_obj; }

void *ScaleY_obj::_hx_vtable = 0;

Dynamic ScaleY_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScaleY_obj > _hx_result = new ScaleY_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ScaleY_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x55e5f263;
	}
}


::hx::ObjectPtr< ScaleY_obj > ScaleY_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< ScaleY_obj > __this = new ScaleY_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< ScaleY_obj > ScaleY_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	ScaleY_obj *__this = (ScaleY_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScaleY_obj), true, "flixel.system.debug._Icon.ScaleY"));
	*(void **)__this = ScaleY_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

ScaleY_obj::ScaleY_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScaleY_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScaleY_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ScaleY_obj::__mClass;

void ScaleY_obj::__register()
{
	ScaleY_obj _hx_dummy;
	ScaleY_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Icon.ScaleY",6d,79,db,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ScaleY_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScaleY_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScaleY_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Icon

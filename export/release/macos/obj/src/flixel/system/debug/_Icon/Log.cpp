// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Icon_Log
#include <flixel/system/debug/_Icon/Log.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_576b1e3d5506eab2_39_new,"flixel.system.debug._Icon.Log","new",0x81d3fad8,"flixel.system.debug._Icon.Log.new","flixel/system/debug/Icon.hx",39,0x2ea0993c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Icon{

void Log_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_576b1e3d5506eab2_39_new)
HXDLIN(  39)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic Log_obj::__CreateEmpty() { return new Log_obj; }

void *Log_obj::_hx_vtable = 0;

Dynamic Log_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Log_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x66949a14;
	}
}


::hx::ObjectPtr< Log_obj > Log_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< Log_obj > __this = new Log_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< Log_obj > Log_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	Log_obj *__this = (Log_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Log_obj), true, "flixel.system.debug._Icon.Log"));
	*(void **)__this = Log_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

Log_obj::Log_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Log_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Log_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Log_obj::__mClass;

void Log_obj::__register()
{
	Log_obj _hx_dummy;
	Log_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Icon.Log",e6,ee,5f,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Log_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Log_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Log_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Icon

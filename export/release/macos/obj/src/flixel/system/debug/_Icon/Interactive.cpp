// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Icon_Interactive
#include <flixel/system/debug/_Icon/Interactive.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_18aa60d9d993077b_60_new,"flixel.system.debug._Icon.Interactive","new",0xe7431d36,"flixel.system.debug._Icon.Interactive.new","flixel/system/debug/Icon.hx",60,0x2ea0993c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Icon{

void Interactive_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_18aa60d9d993077b_60_new)
HXDLIN(  60)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic Interactive_obj::__CreateEmpty() { return new Interactive_obj; }

void *Interactive_obj::_hx_vtable = 0;

Dynamic Interactive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interactive_obj > _hx_result = new Interactive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Interactive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x6db39372;
	}
}


::hx::ObjectPtr< Interactive_obj > Interactive_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< Interactive_obj > __this = new Interactive_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< Interactive_obj > Interactive_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	Interactive_obj *__this = (Interactive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interactive_obj), true, "flixel.system.debug._Icon.Interactive"));
	*(void **)__this = Interactive_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

Interactive_obj::Interactive_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Interactive_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Interactive_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Interactive_obj::__mClass;

void Interactive_obj::__register()
{
	Interactive_obj _hx_dummy;
	Interactive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Icon.Interactive",44,0a,fb,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Interactive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interactive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interactive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Icon

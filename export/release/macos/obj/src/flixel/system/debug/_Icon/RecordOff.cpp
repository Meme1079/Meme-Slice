// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Icon_RecordOff
#include <flixel/system/debug/_Icon/RecordOff.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01662a387e2aa923_78_new,"flixel.system.debug._Icon.RecordOff","new",0x43d95632,"flixel.system.debug._Icon.RecordOff.new","flixel/system/debug/Icon.hx",78,0x2ea0993c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Icon{

void RecordOff_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_01662a387e2aa923_78_new)
HXDLIN(  78)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic RecordOff_obj::__CreateEmpty() { return new RecordOff_obj; }

void *RecordOff_obj::_hx_vtable = 0;

Dynamic RecordOff_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RecordOff_obj > _hx_result = new RecordOff_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RecordOff_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x0dac56ee;
	}
}


::hx::ObjectPtr< RecordOff_obj > RecordOff_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< RecordOff_obj > __this = new RecordOff_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< RecordOff_obj > RecordOff_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	RecordOff_obj *__this = (RecordOff_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RecordOff_obj), true, "flixel.system.debug._Icon.RecordOff"));
	*(void **)__this = RecordOff_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

RecordOff_obj::RecordOff_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RecordOff_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RecordOff_obj_sStaticStorageInfo = 0;
#endif

::hx::Class RecordOff_obj::__mClass;

void RecordOff_obj::__register()
{
	RecordOff_obj _hx_dummy;
	RecordOff_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Icon.RecordOff",40,15,4a,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RecordOff_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RecordOff_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RecordOff_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Icon

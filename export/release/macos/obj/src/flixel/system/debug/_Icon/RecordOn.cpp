// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Icon_RecordOn
#include <flixel/system/debug/_Icon/RecordOn.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_700444e54b4108b1_81_new,"flixel.system.debug._Icon.RecordOn","new",0xd8433460,"flixel.system.debug._Icon.RecordOn.new","flixel/system/debug/Icon.hx",81,0x2ea0993c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Icon{

void RecordOn_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_700444e54b4108b1_81_new)
HXDLIN(  81)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic RecordOn_obj::__CreateEmpty() { return new RecordOn_obj; }

void *RecordOn_obj::_hx_vtable = 0;

Dynamic RecordOn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RecordOn_obj > _hx_result = new RecordOn_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RecordOn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x1e670fac;
	}
}


::hx::ObjectPtr< RecordOn_obj > RecordOn_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< RecordOn_obj > __this = new RecordOn_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< RecordOn_obj > RecordOn_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	RecordOn_obj *__this = (RecordOn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RecordOn_obj), true, "flixel.system.debug._Icon.RecordOn"));
	*(void **)__this = RecordOn_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

RecordOn_obj::RecordOn_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RecordOn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RecordOn_obj_sStaticStorageInfo = 0;
#endif

::hx::Class RecordOn_obj::__mClass;

void RecordOn_obj::__register()
{
	RecordOn_obj _hx_dummy;
	RecordOn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Icon.RecordOn",6e,c4,41,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RecordOn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RecordOn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RecordOn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Icon

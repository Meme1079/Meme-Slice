// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasBitmapData
#include <openfl/display/_internal/CanvasBitmapData.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e8f34708793cba91_12_renderDrawable,"openfl.display._internal.CanvasBitmapData","renderDrawable",0xd0f594b5,"openfl.display._internal.CanvasBitmapData.renderDrawable","openfl/display/_internal/CanvasBitmapData.hx",12,0xa698878e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8f34708793cba91_32_renderDrawableMask,"openfl.display._internal.CanvasBitmapData","renderDrawableMask",0xa8060041,"openfl.display._internal.CanvasBitmapData.renderDrawableMask","openfl/display/_internal/CanvasBitmapData.hx",32,0xa698878e)
namespace openfl{
namespace display{
namespace _internal{

void CanvasBitmapData_obj::__construct() { }

Dynamic CanvasBitmapData_obj::__CreateEmpty() { return new CanvasBitmapData_obj; }

void *CanvasBitmapData_obj::_hx_vtable = 0;

Dynamic CanvasBitmapData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasBitmapData_obj > _hx_result = new CanvasBitmapData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasBitmapData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x760c935f;
}

void CanvasBitmapData_obj::renderDrawable( ::openfl::display::BitmapData bitmapData, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_e8f34708793cba91_12_renderDrawable)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasBitmapData_obj,renderDrawable,(void))

void CanvasBitmapData_obj::renderDrawableMask( ::openfl::display::BitmapData bitmapData, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_e8f34708793cba91_32_renderDrawableMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasBitmapData_obj,renderDrawableMask,(void))


CanvasBitmapData_obj::CanvasBitmapData_obj()
{
}

bool CanvasBitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasBitmapData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasBitmapData_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasBitmapData_obj::__mClass;

static ::String CanvasBitmapData_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasBitmapData_obj::__register()
{
	CanvasBitmapData_obj _hx_dummy;
	CanvasBitmapData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasBitmapData",ad,a3,4c,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasBitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasBitmapData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasBitmapData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasBitmapData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasBitmapData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#include <openfl/display/_internal/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8fc95c52ba12f575_13_clear,"openfl.display._internal.DOMDisplayObject","clear",0xda3e9a9a,"openfl.display._internal.DOMDisplayObject.clear","openfl/display/_internal/DOMDisplayObject.hx",13,0x1316d640)
HX_LOCAL_STACK_FRAME(_hx_pos_8fc95c52ba12f575_24_render,"openfl.display._internal.DOMDisplayObject","render",0x1a0a2da9,"openfl.display._internal.DOMDisplayObject.render","openfl/display/_internal/DOMDisplayObject.hx",24,0x1316d640)
HX_LOCAL_STACK_FRAME(_hx_pos_8fc95c52ba12f575_46_renderDrawable,"openfl.display._internal.DOMDisplayObject","renderDrawable",0x28882667,"openfl.display._internal.DOMDisplayObject.renderDrawable","openfl/display/_internal/DOMDisplayObject.hx",46,0x1316d640)
HX_LOCAL_STACK_FRAME(_hx_pos_8fc95c52ba12f575_66_renderDrawableClear,"openfl.display._internal.DOMDisplayObject","renderDrawableClear",0x847925a6,"openfl.display._internal.DOMDisplayObject.renderDrawableClear","openfl/display/_internal/DOMDisplayObject.hx",66,0x1316d640)
HX_LOCAL_STACK_FRAME(_hx_pos_8fc95c52ba12f575_10_boot,"openfl.display._internal.DOMDisplayObject","boot",0xb800fbc5,"openfl.display._internal.DOMDisplayObject.boot","openfl/display/_internal/DOMDisplayObject.hx",10,0x1316d640)
namespace openfl{
namespace display{
namespace _internal{

void DOMDisplayObject_obj::__construct() { }

Dynamic DOMDisplayObject_obj::__CreateEmpty() { return new DOMDisplayObject_obj; }

void *DOMDisplayObject_obj::_hx_vtable = 0;

Dynamic DOMDisplayObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMDisplayObject_obj > _hx_result = new DOMDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7471defd;
}

void DOMDisplayObject_obj::clear( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8fc95c52ba12f575_13_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,clear,(void))

void DOMDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8fc95c52ba12f575_24_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,render,(void))

void DOMDisplayObject_obj::renderDrawable( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8fc95c52ba12f575_46_renderDrawable)
HXLINE(  47)		renderer->_hx___updateCacheBitmap(displayObject,false);
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE(  49)			_hx_tmp = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  49)			_hx_tmp = false;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  51)			renderer->_hx___renderDrawableClear(displayObject);
HXLINE(  52)			displayObject->_hx___cacheBitmap->stage = displayObject->stage;
            		}
HXLINE(  61)		renderer->_hx___renderEvent(displayObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,renderDrawable,(void))

void DOMDisplayObject_obj::renderDrawableClear( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8fc95c52ba12f575_66_renderDrawableClear)
HXDLIN(  66)		::openfl::display::_internal::DOMDisplayObject_obj::clear(displayObject,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,renderDrawableClear,(void))


DOMDisplayObject_obj::DOMDisplayObject_obj()
{
}

bool DOMDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMDisplayObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMDisplayObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMDisplayObject_obj::__mClass;

static ::String DOMDisplayObject_obj_sStaticFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMDisplayObject_obj::__register()
{
	DOMDisplayObject_obj _hx_dummy;
	DOMDisplayObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMDisplayObject",bb,11,68,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMDisplayObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMDisplayObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMDisplayObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMDisplayObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8fc95c52ba12f575_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal

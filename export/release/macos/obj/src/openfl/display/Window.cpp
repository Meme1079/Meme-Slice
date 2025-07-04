// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9a8b88d3857954c_39_new,"openfl.display.Window","new",0x253949cc,"openfl.display.Window.new","openfl/display/Window.hx",39,0x156e59e2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a8b88d3857954c_81_close,"openfl.display.Window","close",0x8caac424,"openfl.display.Window.close","openfl/display/Window.hx",81,0x156e59e2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a8b88d3857954c_21_boot,"openfl.display.Window","boot",0x65004946,"openfl.display.Window.boot","openfl/display/Window.hx",21,0x156e59e2)
namespace openfl{
namespace display{

void Window_obj::__construct( ::lime::app::Application application, ::Dynamic attributes){
            	HX_GC_STACKFRAME(&_hx_pos_a9a8b88d3857954c_39_new)
HXLINE(  41)		super::__construct(application,attributes);
HXLINE(  54)		 ::Dynamic _hx_tmp;
HXDLIN(  54)		if (::Reflect_obj::hasField( ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic)),HX_("background",ee,93,1d,26))) {
HXLINE(  54)			_hx_tmp =  ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__Field(HX_("background",ee,93,1d,26),::hx::paccDynamic);
            		}
            		else {
HXLINE(  54)			_hx_tmp = 16777215;
            		}
HXDLIN(  54)		this->stage =  ::openfl::display::Stage_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),_hx_tmp);
HXLINE(  56)		if (::Reflect_obj::hasField(attributes,HX_("parameters",aa,be,7e,51))) {
HXLINE(  58)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  60)				this->stage->get_loaderInfo()->parameters =  ::Dynamic(attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  62)					{
HXLINE(  62)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE(  65)		this->stage->_hx___setLogicalSize(( (int)(attributes->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(attributes->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE(  67)		bool _hx_tmp1;
HXDLIN(  67)		if (::Reflect_obj::hasField(attributes,HX_("resizable",6b,37,50,a9))) {
HXLINE(  67)			_hx_tmp1 = !(( (bool)(attributes->__Field(HX_("resizable",6b,37,50,a9),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = false;
            		}
HXDLIN(  67)		if (_hx_tmp1) {
HXLINE(  69)			this->stage->set_scaleMode(3);
            		}
HXLINE(  73)		application->addModule(this->stage);
            	}

Dynamic Window_obj::__CreateEmpty() { return new Window_obj; }

void *Window_obj::_hx_vtable = 0;

Dynamic Window_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Window_obj > _hx_result = new Window_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Window_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x201c771e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x201c771e;
	} else {
		return inClassId==(int)0x7d946485;
	}
}

void Window_obj::close(){
            	HX_STACKFRAME(&_hx_pos_a9a8b88d3857954c_81_close)
HXLINE(  82)		this->super::close();
HXLINE(  83)		if (this->onClose->canceled) {
HXLINE(  85)			return;
            		}
HXLINE(  87)		if (::hx::IsNull( this->stage )) {
HXLINE(  90)			return;
            		}
HXLINE(  93)		this->application->removeModule(this->stage);
HXLINE(  95)		this->stage = null();
            	}



::hx::ObjectPtr< Window_obj > Window_obj::__new( ::lime::app::Application application, ::Dynamic attributes) {
	::hx::ObjectPtr< Window_obj > __this = new Window_obj();
	__this->__construct(application,attributes);
	return __this;
}

::hx::ObjectPtr< Window_obj > Window_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::app::Application application, ::Dynamic attributes) {
	Window_obj *__this = (Window_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Window_obj), true, "openfl.display.Window"));
	*(void **)__this = Window_obj::_hx_vtable;
	__this->__construct(application,attributes);
	return __this;
}

Window_obj::Window_obj()
{
}

::hx::Val Window_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Window_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Window_obj_sStaticStorageInfo = 0;
#endif

static ::String Window_obj_sMemberFields[] = {
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	Window_obj _hx_dummy;
	Window_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Window",da,b3,cd,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Window_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Window_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Window_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Window_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Window_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a9a8b88d3857954c_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("_",5f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display

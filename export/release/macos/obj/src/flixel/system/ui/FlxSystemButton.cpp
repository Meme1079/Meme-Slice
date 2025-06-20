// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9eece198099547db_14_new,"flixel.system.ui.FlxSystemButton","new",0x605e3518,"flixel.system.ui.FlxSystemButton.new","flixel/system/ui/FlxSystemButton.hx",14,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_81_changeIcon,"flixel.system.ui.FlxSystemButton","changeIcon",0x06083f51,"flixel.system.ui.FlxSystemButton.changeIcon","flixel/system/ui/FlxSystemButton.hx",81,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_91_destroy,"flixel.system.ui.FlxSystemButton","destroy",0x554d4db2,"flixel.system.ui.FlxSystemButton.destroy","flixel/system/ui/FlxSystemButton.hx",91,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_102_onMouseUp,"flixel.system.ui.FlxSystemButton","onMouseUp",0xe1786b39,"flixel.system.ui.FlxSystemButton.onMouseUp","flixel/system/ui/FlxSystemButton.hx",102,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_114_onMouseDown,"flixel.system.ui.FlxSystemButton","onMouseDown",0x759770c0,"flixel.system.ui.FlxSystemButton.onMouseDown","flixel/system/ui/FlxSystemButton.hx",114,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_119_onMouseOver,"flixel.system.ui.FlxSystemButton","onMouseOver",0x7ce209b2,"flixel.system.ui.FlxSystemButton.onMouseOver","flixel/system/ui/FlxSystemButton.hx",119,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_125_onMouseOut,"flixel.system.ui.FlxSystemButton","onMouseOut",0x67e0ddf0,"flixel.system.ui.FlxSystemButton.onMouseOut","flixel/system/ui/FlxSystemButton.hx",125,0x167fa379)
HX_LOCAL_STACK_FRAME(_hx_pos_9eece198099547db_130_set_toggled,"flixel.system.ui.FlxSystemButton","set_toggled",0xc0fd262b,"flixel.system.ui.FlxSystemButton.set_toggled","flixel/system/ui/FlxSystemButton.hx",130,0x167fa379)
namespace flixel{
namespace _hx_system{
namespace ui{

void FlxSystemButton_obj::__construct( ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode){
            		bool ToggleMode = __o_ToggleMode.Default(false);
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_14_new)
HXLINE(  46)		this->_mouseDown = false;
HXLINE(  36)		this->toggled = false;
HXLINE(  31)		this->toggleMode = false;
HXLINE(  25)		this->enabled = true;
HXLINE(  57)		super::__construct();
HXLINE(  59)		if (::hx::IsNotNull( Icon )) {
HXLINE(  60)			this->changeIcon(Icon);
            		}
HXLINE(  66)		this->upHandler = UpHandler;
HXLINE(  67)		this->toggleMode = ToggleMode;
HXLINE(  69)		this->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null(),null(),null());
HXLINE(  70)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->onMouseDown_dyn(),null(),null(),null());
HXLINE(  71)		this->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->onMouseOut_dyn(),null(),null(),null());
HXLINE(  72)		this->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->onMouseOver_dyn(),null(),null(),null());
            	}

Dynamic FlxSystemButton_obj::__CreateEmpty() { return new FlxSystemButton_obj; }

void *FlxSystemButton_obj::_hx_vtable = 0;

Dynamic FlxSystemButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSystemButton_obj > _hx_result = new FlxSystemButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSystemButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x295254ec || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_ui_FlxSystemButton__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::_hx_system::ui::FlxSystemButton_obj::destroy,
};

void *FlxSystemButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_ui_FlxSystemButton__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxSystemButton_obj::changeIcon( ::openfl::display::BitmapData Icon){
            	HX_GC_STACKFRAME(&_hx_pos_9eece198099547db_81_changeIcon)
HXLINE(  82)		if (::hx::IsNotNull( this->_icon )) {
HXLINE(  83)			this->removeChild(this->_icon);
            		}
HXLINE(  85)		::flixel::_hx_system::debug::DebuggerUtil_obj::fixSize(Icon);
HXLINE(  86)		this->_icon =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,Icon,null(),null());
HXLINE(  87)		this->addChild(this->_icon);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,changeIcon,(void))

void FlxSystemButton_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_91_destroy)
HXLINE(  92)		this->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null());
HXLINE(  93)		this->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->onMouseDown_dyn(),null());
HXLINE(  94)		this->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->onMouseOut_dyn(),null());
HXLINE(  95)		this->removeEventListener(HX_("mouseOver",19,4a,0d,f6),this->onMouseOver_dyn(),null());
HXLINE(  96)		this->_icon = null();
HXLINE(  97)		this->upHandler = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSystemButton_obj,destroy,(void))

void FlxSystemButton_obj::onMouseUp( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_102_onMouseUp)
HXDLIN( 102)		bool _hx_tmp;
HXDLIN( 102)		if (this->enabled) {
HXDLIN( 102)			_hx_tmp = this->_mouseDown;
            		}
            		else {
HXDLIN( 102)			_hx_tmp = false;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 104)			this->set_toggled(!(this->toggled));
HXLINE( 105)			this->_mouseDown = false;
HXLINE( 107)			if (::hx::IsNotNull( this->upHandler )) {
HXLINE( 108)				this->upHandler();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseUp,(void))

void FlxSystemButton_obj::onMouseDown( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_114_onMouseDown)
HXDLIN( 114)		this->_mouseDown = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseDown,(void))

void FlxSystemButton_obj::onMouseOver( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_119_onMouseOver)
HXDLIN( 119)		if (this->enabled) {
HXLINE( 120)			this->set_alpha((this->get_alpha() - ((Float)0.2)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOver,(void))

void FlxSystemButton_obj::onMouseOut( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_125_onMouseOut)
HXDLIN( 125)		if (this->enabled) {
HXLINE( 126)			this->set_alpha((this->get_alpha() + ((Float)0.2)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOut,(void))

bool FlxSystemButton_obj::set_toggled(bool Value){
            	HX_STACKFRAME(&_hx_pos_9eece198099547db_130_set_toggled)
HXLINE( 131)		if (this->toggleMode) {
HXLINE( 132)			Float _hx_tmp;
HXDLIN( 132)			if (Value) {
HXLINE( 132)				_hx_tmp = ((Float)0.3);
            			}
            			else {
HXLINE( 132)				_hx_tmp = ( (Float)(1) );
            			}
HXDLIN( 132)			this->set_alpha(_hx_tmp);
            		}
HXLINE( 133)		return (this->toggled = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,set_toggled,return )


::hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__new( ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode) {
	::hx::ObjectPtr< FlxSystemButton_obj > __this = new FlxSystemButton_obj();
	__this->__construct(Icon,UpHandler,__o_ToggleMode);
	return __this;
}

::hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode) {
	FlxSystemButton_obj *__this = (FlxSystemButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSystemButton_obj), true, "flixel.system.ui.FlxSystemButton"));
	*(void **)__this = FlxSystemButton_obj::_hx_vtable;
	__this->__construct(Icon,UpHandler,__o_ToggleMode);
	return __this;
}

FlxSystemButton_obj::FlxSystemButton_obj()
{
}

void FlxSystemButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSystemButton);
	HX_MARK_MEMBER_NAME(upHandler,"upHandler");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(toggleMode,"toggleMode");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_mouseDown,"_mouseDown");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSystemButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upHandler,"upHandler");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(toggleMode,"toggleMode");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_mouseDown,"_mouseDown");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSystemButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return ::hx::Val( _icon ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"toggled") ) { return ::hx::Val( toggled ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { return ::hx::Val( upHandler ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { return ::hx::Val( toggleMode ); }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { return ::hx::Val( _mouseDown ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_toggled") ) { return ::hx::Val( set_toggled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSystemButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_toggled(inValue.Cast< bool >()) );toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { upHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { toggleMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { _mouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSystemButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("toggleMode",17,19,17,e0));
	outFields->push(HX_("toggled",50,e2,03,cc));
	outFields->push(HX_("_icon",58,03,c4,f8));
	outFields->push(HX_("_mouseDown",e8,2c,65,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSystemButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSystemButton_obj,upHandler),HX_("upHandler",af,c2,8d,81)},
	{::hx::fsBool,(int)offsetof(FlxSystemButton_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsBool,(int)offsetof(FlxSystemButton_obj,toggleMode),HX_("toggleMode",17,19,17,e0)},
	{::hx::fsBool,(int)offsetof(FlxSystemButton_obj,toggled),HX_("toggled",50,e2,03,cc)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(FlxSystemButton_obj,_icon),HX_("_icon",58,03,c4,f8)},
	{::hx::fsBool,(int)offsetof(FlxSystemButton_obj,_mouseDown),HX_("_mouseDown",e8,2c,65,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSystemButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSystemButton_obj_sMemberFields[] = {
	HX_("upHandler",af,c2,8d,81),
	HX_("enabled",81,04,31,7e),
	HX_("toggleMode",17,19,17,e0),
	HX_("toggled",50,e2,03,cc),
	HX_("_icon",58,03,c4,f8),
	HX_("_mouseDown",e8,2c,65,4a),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("destroy",fa,2c,86,24),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("set_toggled",73,49,6b,5c),
	::String(null()) };

::hx::Class FlxSystemButton_obj::__mClass;

void FlxSystemButton_obj::__register()
{
	FlxSystemButton_obj _hx_dummy;
	FlxSystemButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.ui.FlxSystemButton",26,09,30,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSystemButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSystemButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSystemButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSystemButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace ui

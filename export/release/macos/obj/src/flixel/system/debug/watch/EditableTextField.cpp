// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_854bc5222d9920cb_29_new,"flixel.system.debug.watch.EditableTextField","new",0xaaedbff4,"flixel.system.debug.watch.EditableTextField.new","flixel/system/debug/watch/EditableTextField.hx",29,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_49_destroy,"flixel.system.debug.watch.EditableTextField","destroy",0x8b91768e,"flixel.system.debug.watch.EditableTextField.destroy","flixel/system/debug/watch/EditableTextField.hx",49,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_60_onMouseUp,"flixel.system.debug.watch.EditableTextField","onMouseUp",0x4fbd8315,"flixel.system.debug.watch.EditableTextField.onMouseUp","flixel/system/debug/watch/EditableTextField.hx",60,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_65_onKeyUp,"flixel.system.debug.watch.EditableTextField","onKeyUp",0xdc47a1cf,"flixel.system.debug.watch.EditableTextField.onKeyUp","flixel/system/debug/watch/EditableTextField.hx",65,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_75_onKeyDown,"flixel.system.debug.watch.EditableTextField","onKeyDown",0x2b91f8d6,"flixel.system.debug.watch.EditableTextField.onKeyDown","flixel/system/debug/watch/EditableTextField.hx",75,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_93_cycleValue,"flixel.system.debug.watch.EditableTextField","cycleValue",0xd5a483d7,"flixel.system.debug.watch.EditableTextField.cycleValue","flixel/system/debug/watch/EditableTextField.hx",93,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_111_selectEnd,"flixel.system.debug.watch.EditableTextField","selectEnd",0x459f7cd3,"flixel.system.debug.watch.EditableTextField.selectEnd","flixel/system/debug/watch/EditableTextField.hx",111,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_115_cycleNumericValue,"flixel.system.debug.watch.EditableTextField","cycleNumericValue",0xa550b9be,"flixel.system.debug.watch.EditableTextField.cycleNumericValue","flixel/system/debug/watch/EditableTextField.hx",115,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_126_cycleEnumValue,"flixel.system.debug.watch.EditableTextField","cycleEnumValue",0x87243016,"flixel.system.debug.watch.EditableTextField.cycleEnumValue","flixel/system/debug/watch/EditableTextField.hx",126,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_141_onFocusLost,"flixel.system.debug.watch.EditableTextField","onFocusLost",0x01b78851,"flixel.system.debug.watch.EditableTextField.onFocusLost","flixel/system/debug/watch/EditableTextField.hx",141,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_145_submit,"flixel.system.debug.watch.EditableTextField","submit",0x30df5d04,"flixel.system.debug.watch.EditableTextField.submit","flixel/system/debug/watch/EditableTextField.hx",145,0xd7488fde)
HX_LOCAL_STACK_FRAME(_hx_pos_854bc5222d9920cb_169_setIsEditing,"flixel.system.debug.watch.EditableTextField","setIsEditing",0xb9436038,"flixel.system.debug.watch.EditableTextField.setIsEditing","flixel/system/debug/watch/EditableTextField.hx",169,0xd7488fde)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void EditableTextField_obj::__construct(bool allowEditing, ::openfl::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType){
            	HX_GC_STACKFRAME(&_hx_pos_854bc5222d9920cb_29_new)
HXLINE(  30)		super::__construct();
HXLINE(  31)		this->allowEditing = allowEditing;
HXLINE(  32)		this->submitValue = submitValue;
HXLINE(  33)		this->defaultFormat = defaultFormat;
HXLINE(  34)		this->expectedType = expectedType;
HXLINE(  36)		if (allowEditing) {
HXLINE(  38)			this->editFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,defaultFormat->font,defaultFormat->size,0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  40)			this->addEventListener(HX_("keyUp",da,b9,fe,de),this->onKeyUp_dyn(),null(),null(),null());
HXLINE(  41)			this->addEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null(),null(),null());
HXLINE(  42)			this->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null(),null(),null());
HXLINE(  43)			this->addEventListener(HX_("focusOut",96,6f,5e,11),this->onFocusLost_dyn(),null(),null(),null());
            		}
            	}

Dynamic EditableTextField_obj::__CreateEmpty() { return new EditableTextField_obj; }

void *EditableTextField_obj::_hx_vtable = 0;

Dynamic EditableTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EditableTextField_obj > _hx_result = new EditableTextField_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool EditableTextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x408e87be) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x408e87be;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_debug_watch_EditableTextField__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::_hx_system::debug::watch::EditableTextField_obj::destroy,
};

void *EditableTextField_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_debug_watch_EditableTextField__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void EditableTextField_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_49_destroy)
HXDLIN(  49)		if (this->allowEditing) {
HXLINE(  51)			this->removeEventListener(HX_("keyUp",da,b9,fe,de),this->onKeyUp_dyn(),null());
HXLINE(  52)			this->removeEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null());
HXLINE(  53)			this->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null());
HXLINE(  54)			this->removeEventListener(HX_("focusOut",96,6f,5e,11),this->onFocusLost_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,destroy,(void))

void EditableTextField_obj::onMouseUp( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_60_onMouseUp)
HXDLIN(  60)		this->setIsEditing(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onMouseUp,(void))

void EditableTextField_obj::onKeyUp( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_65_onKeyUp)
HXDLIN(  65)		switch((int)(e->keyCode)){
            			case (int)13: {
HXLINE(  68)				this->submit();
            			}
            			break;
            			case (int)27: {
HXLINE(  70)				this->setIsEditing(false);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyUp,(void))

void EditableTextField_obj::onKeyDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_75_onKeyDown)
HXLINE(  76)		Float modifier = ((Float)1.0);
HXLINE(  77)		if (e->altKey) {
HXLINE(  78)			modifier = ((Float)0.1);
            		}
HXLINE(  79)		if (e->shiftKey) {
HXLINE(  80)			modifier = ((Float)10.0);
            		}
HXLINE(  82)		switch((int)(e->keyCode)){
            			case (int)38: {
HXLINE(  85)				this->cycleValue(modifier,0);
            			}
            			break;
            			case (int)40: {
HXLINE(  87)				this->cycleValue(-(modifier),this->get_text().length);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyDown,(void))

void EditableTextField_obj::cycleValue(Float modifier,int selection){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_93_cycleValue)
HXDLIN(  93)		 ::ValueType _g = this->expectedType;
HXDLIN(  93)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: case (int)2: {
HXLINE(  96)				this->cycleNumericValue(modifier);
HXLINE(  97)				this->selectEnd();
            			}
            			break;
            			case (int)3: {
HXLINE(  99)				::String _hx_tmp;
HXDLIN(  99)				if ((this->get_text() == HX_("true",4e,a7,03,4d))) {
HXLINE(  99)					_hx_tmp = HX_("false",a3,35,4f,fb);
            				}
            				else {
HXLINE(  99)					_hx_tmp = HX_("true",4e,a7,03,4d);
            				}
HXDLIN(  99)				this->set_text(_hx_tmp);
HXLINE( 100)				this->selectEnd();
            			}
            			break;
            			case (int)7: {
HXLINE( 101)				::hx::Class e = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 101)				{
HXLINE( 102)					int _hx_tmp1;
HXDLIN( 102)					if ((modifier < 0)) {
HXLINE( 102)						_hx_tmp1 = -1;
            					}
            					else {
HXLINE( 102)						_hx_tmp1 = 1;
            					}
HXDLIN( 102)					this->cycleEnumValue(e,_hx_tmp1);
HXLINE( 103)					this->selectEnd();
            				}
            			}
            			break;
            			default:{
HXLINE( 105)				this->setSelection(selection,selection);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditableTextField_obj,cycleValue,(void))

void EditableTextField_obj::selectEnd(){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_111_selectEnd)
HXDLIN( 111)		int _hx_tmp = this->get_text().length;
HXDLIN( 111)		this->setSelection(_hx_tmp,this->get_text().length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,selectEnd,(void))

void EditableTextField_obj::cycleNumericValue(Float modifier){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_115_cycleNumericValue)
HXLINE( 116)		Float value = ::Std_obj::parseFloat(this->get_text());
HXLINE( 117)		if (::Math_obj::isNaN(value)) {
HXLINE( 118)			return;
            		}
HXLINE( 120)		value = (value + modifier);
HXLINE( 121)		value = ::flixel::math::FlxMath_obj::roundDecimal(value,::flixel::FlxG_obj::debugger->precision);
HXLINE( 122)		this->set_text(::Std_obj::string(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,cycleNumericValue,(void))

void EditableTextField_obj::cycleEnumValue(::hx::Class e,int modifier){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_126_cycleEnumValue)
HXLINE( 127)		::Array< ::String > values = ::Type_obj::getEnumConstructs(e);
HXLINE( 128)		int index = values->indexOf(this->get_text(),null());
HXLINE( 129)		if ((index == -1)) {
HXLINE( 130)			index = 0;
            		}
            		else {
HXLINE( 133)			index = (index + modifier);
HXLINE( 134)			index = ::Std_obj::_hx_int(( (Float)(::flixel::math::FlxMath_obj::wrap(index,0,(values->length - 1))) ));
            		}
HXLINE( 136)		this->set_text(::Std_obj::string(values->__get(index)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditableTextField_obj,cycleEnumValue,(void))

void EditableTextField_obj::onFocusLost( ::openfl::events::FocusEvent _){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_141_onFocusLost)
HXDLIN( 141)		this->setIsEditing(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onFocusLost,(void))

void EditableTextField_obj::submit(){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_145_submit)
HXLINE( 146)		 ::Dynamic value;
HXDLIN( 146)		 ::ValueType _g = this->expectedType;
HXDLIN( 146)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 148)				bool value1;
HXDLIN( 148)				if (!(::StringTools_obj::startsWith(this->get_text(),HX_("#",23,00,00,00)))) {
HXLINE( 148)					value1 = ::StringTools_obj::startsWith(this->get_text(),HX_("0x",48,2a,00,00));
            				}
            				else {
HXLINE( 148)					value1 = true;
            				}
HXDLIN( 148)				if (value1) {
HXLINE( 146)					value = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(this->get_text());
            				}
            				else {
HXLINE( 146)					value = ::Std_obj::parseInt(this->get_text());
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 146)				value = ::Std_obj::parseFloat(this->get_text());
            			}
            			break;
            			case (int)3: {
HXLINE( 151)				if ((this->get_text() == HX_("true",4e,a7,03,4d))) {
HXLINE( 146)					value = true;
            				}
            				else {
HXLINE( 152)					if ((this->get_text() == HX_("false",a3,35,4f,fb))) {
HXLINE( 146)						value = false;
            					}
            					else {
HXLINE( 146)						value = this->get_text();
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 153)				::hx::Class e = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE( 154)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 146)					value = ::Type_obj::createEnum(e,this->get_text(),null());
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g1 = _hx_e;
HXLINE( 155)						{
HXLINE( 155)							null();
            						}
HXLINE( 146)						value = null();
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 146)				value = this->get_text();
            			}
            		}
HXLINE( 159)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 161)			this->submitValue(value);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g2 = _hx_e;
HXLINE( 163)				{
HXLINE( 163)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 165)		this->setIsEditing(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,submit,(void))

void EditableTextField_obj::setIsEditing(bool isEditing){
            	HX_STACKFRAME(&_hx_pos_854bc5222d9920cb_169_setIsEditing)
HXLINE( 170)		this->isEditing = isEditing;
HXLINE( 173)		::flixel::FlxG_obj::keys->enabled = !(isEditing);
HXLINE( 176)		 ::Dynamic _hx_tmp;
HXDLIN( 176)		if (isEditing) {
HXLINE( 176)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 176)			_hx_tmp = 0;
            		}
HXDLIN( 176)		this->set_type(_hx_tmp);
HXLINE( 177)		this->set_background(isEditing);
HXLINE( 178)		 ::openfl::text::TextFormat _hx_tmp1;
HXDLIN( 178)		if (isEditing) {
HXLINE( 178)			_hx_tmp1 = this->editFormat;
            		}
            		else {
HXLINE( 178)			_hx_tmp1 = this->defaultFormat;
            		}
HXDLIN( 178)		this->set_defaultTextFormat(_hx_tmp1);
HXLINE( 179)		this->setTextFormat(this->get_defaultTextFormat(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,setIsEditing,(void))


::hx::ObjectPtr< EditableTextField_obj > EditableTextField_obj::__new(bool allowEditing, ::openfl::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType) {
	::hx::ObjectPtr< EditableTextField_obj > __this = new EditableTextField_obj();
	__this->__construct(allowEditing,defaultFormat,submitValue,expectedType);
	return __this;
}

::hx::ObjectPtr< EditableTextField_obj > EditableTextField_obj::__alloc(::hx::Ctx *_hx_ctx,bool allowEditing, ::openfl::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType) {
	EditableTextField_obj *__this = (EditableTextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EditableTextField_obj), true, "flixel.system.debug.watch.EditableTextField"));
	*(void **)__this = EditableTextField_obj::_hx_vtable;
	__this->__construct(allowEditing,defaultFormat,submitValue,expectedType);
	return __this;
}

EditableTextField_obj::EditableTextField_obj()
{
}

void EditableTextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditableTextField);
	HX_MARK_MEMBER_NAME(isEditing,"isEditing");
	HX_MARK_MEMBER_NAME(allowEditing,"allowEditing");
	HX_MARK_MEMBER_NAME(submitValue,"submitValue");
	HX_MARK_MEMBER_NAME(expectedType,"expectedType");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_MARK_MEMBER_NAME(editFormat,"editFormat");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EditableTextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isEditing,"isEditing");
	HX_VISIT_MEMBER_NAME(allowEditing,"allowEditing");
	HX_VISIT_MEMBER_NAME(submitValue,"submitValue");
	HX_VISIT_MEMBER_NAME(expectedType,"expectedType");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_VISIT_MEMBER_NAME(editFormat,"editFormat");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EditableTextField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return ::hx::Val( submit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { return ::hx::Val( isEditing ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectEnd") ) { return ::hx::Val( selectEnd_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { return ::hx::Val( editFormat ); }
		if (HX_FIELD_EQ(inName,"cycleValue") ) { return ::hx::Val( cycleValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { return ::hx::Val( submitValue ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { return ::hx::Val( allowEditing ); }
		if (HX_FIELD_EQ(inName,"expectedType") ) { return ::hx::Val( expectedType ); }
		if (HX_FIELD_EQ(inName,"setIsEditing") ) { return ::hx::Val( setIsEditing_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return ::hx::Val( defaultFormat ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cycleEnumValue") ) { return ::hx::Val( cycleEnumValue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cycleNumericValue") ) { return ::hx::Val( cycleNumericValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EditableTextField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { isEditing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { editFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { submitValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { allowEditing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"expectedType") ) { expectedType=inValue.Cast<  ::ValueType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EditableTextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isEditing",4e,22,b6,29));
	outFields->push(HX_("allowEditing",8f,bb,f0,66));
	outFields->push(HX_("expectedType",52,e9,d6,d6));
	outFields->push(HX_("defaultFormat",d8,62,07,f8));
	outFields->push(HX_("editFormat",e1,f0,3b,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EditableTextField_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(EditableTextField_obj,isEditing),HX_("isEditing",4e,22,b6,29)},
	{::hx::fsBool,(int)offsetof(EditableTextField_obj,allowEditing),HX_("allowEditing",8f,bb,f0,66)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EditableTextField_obj,submitValue),HX_("submitValue",39,40,71,15)},
	{::hx::fsObject /*  ::ValueType */ ,(int)offsetof(EditableTextField_obj,expectedType),HX_("expectedType",52,e9,d6,d6)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(EditableTextField_obj,defaultFormat),HX_("defaultFormat",d8,62,07,f8)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(EditableTextField_obj,editFormat),HX_("editFormat",e1,f0,3b,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EditableTextField_obj_sStaticStorageInfo = 0;
#endif

static ::String EditableTextField_obj_sMemberFields[] = {
	HX_("isEditing",4e,22,b6,29),
	HX_("allowEditing",8f,bb,f0,66),
	HX_("submitValue",39,40,71,15),
	HX_("expectedType",52,e9,d6,d6),
	HX_("defaultFormat",d8,62,07,f8),
	HX_("editFormat",e1,f0,3b,c3),
	HX_("destroy",fa,2c,86,24),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("onKeyDown",42,22,f2,73),
	HX_("cycleValue",eb,98,68,e1),
	HX_("selectEnd",3f,a6,ff,8d),
	HX_("cycleNumericValue",2a,2f,5a,f5),
	HX_("cycleEnumValue",2a,5f,1a,b3),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("submit",18,58,06,9a),
	HX_("setIsEditing",4c,e2,05,4e),
	::String(null()) };

::hx::Class EditableTextField_obj::__mClass;

void EditableTextField_obj::__register()
{
	EditableTextField_obj _hx_dummy;
	EditableTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.watch.EditableTextField",02,f6,31,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EditableTextField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EditableTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EditableTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EditableTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

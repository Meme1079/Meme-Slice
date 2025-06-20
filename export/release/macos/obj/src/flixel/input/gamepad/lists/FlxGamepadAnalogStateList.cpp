// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxTypedGamepadAnalogStick
#include <flixel/input/gamepad/FlxTypedGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#include <flixel/input/gamepad/mappings/FlxTypedGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_47_new,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","new",0x726900e6,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.new","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",47,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_19_get_LEFT_STICK,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK",0xc8abc13b,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",19,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_24_get_LEFT_STICK_X,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK_X",0x1c0b1914,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",24,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_29_get_LEFT_STICK_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK_Y",0x1c0b1915,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",29,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_34_get_RIGHT_STICK,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK",0x6f514a4a,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",34,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_39_get_RIGHT_STICK_X,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK_X",0xddf043e3,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",39,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_44_get_RIGHT_STICK_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK_Y",0xddf043e4,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",44,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_56_checkXY,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkXY",0x1743934f,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkXY","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",56,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_100_checkX,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkX",0x15ea7dca,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkX","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",100,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_108_checkY,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkY",0x15ea7dcb,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkY","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",108,0xa4c0584e)
HX_LOCAL_STACK_FRAME(_hx_pos_36ad37cf669080a5_122_checkRaw,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkRaw",0x43d8cbba,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkRaw","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",122,0xa4c0584e)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadAnalogStateList_obj::__construct(int status, ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_47_new)
HXLINE(  48)		this->status = status;
HXLINE(  49)		this->gamepad = gamepad;
            	}

Dynamic FlxGamepadAnalogStateList_obj::__CreateEmpty() { return new FlxGamepadAnalogStateList_obj; }

void *FlxGamepadAnalogStateList_obj::_hx_vtable = 0;

Dynamic FlxGamepadAnalogStateList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadAnalogStateList_obj > _hx_result = new FlxGamepadAnalogStateList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxGamepadAnalogStateList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33195e0e;
}

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_19_get_LEFT_STICK)
HXDLIN(  19)		return this->checkXY(19);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK,return )

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK_X(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_24_get_LEFT_STICK_X)
HXDLIN(  24)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(19);
HXDLIN(  24)		if (::hx::IsNull( stick )) {
HXDLIN(  24)			return false;
            		}
            		else {
HXDLIN(  24)			 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  24)			if (::hx::IsNotNull( button )) {
HXDLIN(  24)				return button->hasState(this->status);
            			}
            			else {
HXDLIN(  24)				return false;
            			}
            		}
HXDLIN(  24)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK_X,return )

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK_Y(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_29_get_LEFT_STICK_Y)
HXDLIN(  29)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(19);
HXDLIN(  29)		if (::hx::IsNull( stick )) {
HXDLIN(  29)			return false;
            		}
            		else {
HXDLIN(  29)			 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  29)			if (::hx::IsNotNull( button )) {
HXDLIN(  29)				return button->hasState(this->status);
            			}
            			else {
HXDLIN(  29)				return false;
            			}
            		}
HXDLIN(  29)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK_Y,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_34_get_RIGHT_STICK)
HXDLIN(  34)		return this->checkXY(20);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK_X(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_39_get_RIGHT_STICK_X)
HXDLIN(  39)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(20);
HXDLIN(  39)		if (::hx::IsNull( stick )) {
HXDLIN(  39)			return false;
            		}
            		else {
HXDLIN(  39)			 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  39)			if (::hx::IsNotNull( button )) {
HXDLIN(  39)				return button->hasState(this->status);
            			}
            			else {
HXDLIN(  39)				return false;
            			}
            		}
HXDLIN(  39)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK_X,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK_Y(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_44_get_RIGHT_STICK_Y)
HXDLIN(  44)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(20);
HXDLIN(  44)		if (::hx::IsNull( stick )) {
HXDLIN(  44)			return false;
            		}
            		else {
HXDLIN(  44)			 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  44)			if (::hx::IsNotNull( button )) {
HXDLIN(  44)				return button->hasState(this->status);
            			}
            			else {
HXDLIN(  44)				return false;
            			}
            		}
HXDLIN(  44)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK_Y,return )

bool FlxGamepadAnalogStateList_obj::checkXY(int id){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_56_checkXY)
HXLINE(  57)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(id);
HXLINE(  58)		if (::hx::IsNull( stick )) {
HXLINE(  59)			return false;
            		}
HXLINE(  68)		 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  68)		bool xVal;
HXDLIN(  68)		if (::hx::IsNotNull( button )) {
HXLINE(  68)			xVal = button->hasState(this->status);
            		}
            		else {
HXLINE(  68)			xVal = false;
            		}
HXLINE(  69)		 ::flixel::input::gamepad::FlxGamepadButton button1 = this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  69)		bool yVal;
HXDLIN(  69)		if (::hx::IsNotNull( button1 )) {
HXLINE(  69)			yVal = button1->hasState(this->status);
            		}
            		else {
HXLINE(  69)			yVal = false;
            		}
HXLINE(  71)		bool _hx_tmp;
HXDLIN(  71)		if (xVal) {
HXLINE(  71)			_hx_tmp = yVal;
            		}
            		else {
HXLINE(  71)			_hx_tmp = false;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  73)			return true;
            		}
HXLINE(  76)		if (xVal) {
HXLINE(  78)			 ::flixel::input::gamepad::FlxGamepadButton button2 = this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  78)			bool yReleased;
HXDLIN(  78)			if (::hx::IsNotNull( button2 )) {
HXLINE(  78)				yReleased = button2->hasState(0);
            			}
            			else {
HXLINE(  78)				yReleased = false;
            			}
HXLINE(  79)			 ::flixel::input::gamepad::FlxGamepadButton button3 = this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  79)			bool yJustReleased;
HXDLIN(  79)			if (::hx::IsNotNull( button3 )) {
HXLINE(  79)				yJustReleased = button3->hasState(-1);
            			}
            			else {
HXLINE(  79)				yJustReleased = false;
            			}
HXLINE(  80)			bool _hx_tmp1;
HXDLIN(  80)			if (!(yReleased)) {
HXLINE(  80)				_hx_tmp1 = yJustReleased;
            			}
            			else {
HXLINE(  80)				_hx_tmp1 = true;
            			}
HXDLIN(  80)			if (_hx_tmp1) {
HXLINE(  82)				return true;
            			}
            		}
HXLINE(  86)		if (yVal) {
HXLINE(  88)			 ::flixel::input::gamepad::FlxGamepadButton button4 = this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  88)			bool xReleased;
HXDLIN(  88)			if (::hx::IsNotNull( button4 )) {
HXLINE(  88)				xReleased = button4->hasState(0);
            			}
            			else {
HXLINE(  88)				xReleased = false;
            			}
HXLINE(  89)			 ::flixel::input::gamepad::FlxGamepadButton button5 = this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  89)			bool xJustReleased;
HXDLIN(  89)			if (::hx::IsNotNull( button5 )) {
HXLINE(  89)				xJustReleased = button5->hasState(-1);
            			}
            			else {
HXLINE(  89)				xJustReleased = false;
            			}
HXLINE(  90)			bool _hx_tmp2;
HXDLIN(  90)			if (!(xReleased)) {
HXLINE(  90)				_hx_tmp2 = xJustReleased;
            			}
            			else {
HXLINE(  90)				_hx_tmp2 = true;
            			}
HXDLIN(  90)			if (_hx_tmp2) {
HXLINE(  92)				return true;
            			}
            		}
HXLINE(  96)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkXY,return )

bool FlxGamepadAnalogStateList_obj::checkX(int id){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_100_checkX)
HXLINE( 101)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(id);
HXLINE( 102)		if (::hx::IsNull( stick )) {
HXLINE( 103)			return false;
            		}
HXLINE( 104)		 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 104)		if (::hx::IsNotNull( button )) {
HXLINE( 104)			return button->hasState(this->status);
            		}
            		else {
HXLINE( 104)			return false;
            		}
HXDLIN( 104)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkX,return )

bool FlxGamepadAnalogStateList_obj::checkY(int id){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_108_checkY)
HXLINE( 109)		 ::flixel::input::gamepad::FlxTypedGamepadAnalogStick stick = this->gamepad->mapping->getAnalogStick(id);
HXLINE( 110)		if (::hx::IsNull( stick )) {
HXLINE( 111)			return false;
            		}
HXLINE( 112)		 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 112)		if (::hx::IsNotNull( button )) {
HXLINE( 112)			return button->hasState(this->status);
            		}
            		else {
HXLINE( 112)			return false;
            		}
HXDLIN( 112)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkY,return )

bool FlxGamepadAnalogStateList_obj::checkRaw(int RawID,int Status){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_122_checkRaw)
HXDLIN( 122)		 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 122)		if (::hx::IsNotNull( button )) {
HXDLIN( 122)			return button->hasState(Status);
            		}
            		else {
HXDLIN( 122)			return false;
            		}
HXDLIN( 122)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadAnalogStateList_obj,checkRaw,return )


::hx::ObjectPtr< FlxGamepadAnalogStateList_obj > FlxGamepadAnalogStateList_obj::__new(int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	::hx::ObjectPtr< FlxGamepadAnalogStateList_obj > __this = new FlxGamepadAnalogStateList_obj();
	__this->__construct(status,gamepad);
	return __this;
}

::hx::ObjectPtr< FlxGamepadAnalogStateList_obj > FlxGamepadAnalogStateList_obj::__alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadAnalogStateList_obj *__this = (FlxGamepadAnalogStateList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadAnalogStateList_obj), true, "flixel.input.gamepad.lists.FlxGamepadAnalogStateList"));
	*(void **)__this = FlxGamepadAnalogStateList_obj::_hx_vtable;
	__this->__construct(status,gamepad);
	return __this;
}

FlxGamepadAnalogStateList_obj::FlxGamepadAnalogStateList_obj()
{
}

void FlxGamepadAnalogStateList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogStateList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogStateList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(status,"status");
}

::hx::Val FlxGamepadAnalogStateList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		if (HX_FIELD_EQ(inName,"checkX") ) { return ::hx::Val( checkX_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkY") ) { return ::hx::Val( checkY_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return ::hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"checkXY") ) { return ::hx::Val( checkXY_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkRaw") ) { return ::hx::Val( checkRaw_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LEFT_STICK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_X") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_X() ); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_Y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_Y() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_X") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_X() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_Y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_Y() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK") ) { return ::hx::Val( get_LEFT_STICK_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK") ) { return ::hx::Val( get_RIGHT_STICK_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_X") ) { return ::hx::Val( get_LEFT_STICK_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_Y") ) { return ::hx::Val( get_LEFT_STICK_Y_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_X") ) { return ::hx::Val( get_RIGHT_STICK_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_Y") ) { return ::hx::Val( get_RIGHT_STICK_Y_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepadAnalogStateList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogStateList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gamepad",a1,e0,85,89));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("LEFT_STICK",b8,07,ea,37));
	outFields->push(HX_("LEFT_STICK_X",d1,b8,45,8c));
	outFields->push(HX_("LEFT_STICK_Y",d2,b8,45,8c));
	outFields->push(HX_("RIGHT_STICK",2d,b1,90,56));
	outFields->push(HX_("RIGHT_STICK_X",86,69,01,a1));
	outFields->push(HX_("RIGHT_STICK_Y",87,69,01,a1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadAnalogStateList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxGamepadAnalogStateList_obj,gamepad),HX_("gamepad",a1,e0,85,89)},
	{::hx::fsInt,(int)offsetof(FlxGamepadAnalogStateList_obj,status),HX_("status",32,e7,fb,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepadAnalogStateList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadAnalogStateList_obj_sMemberFields[] = {
	HX_("gamepad",a1,e0,85,89),
	HX_("status",32,e7,fb,05),
	HX_("get_LEFT_STICK",01,90,df,ad),
	HX_("get_LEFT_STICK_X",5a,a5,e4,90),
	HX_("get_LEFT_STICK_Y",5b,a5,e4,90),
	HX_("get_RIGHT_STICK",c4,68,72,17),
	HX_("get_RIGHT_STICK_X",dd,74,71,a7),
	HX_("get_RIGHT_STICK_Y",de,74,71,a7),
	HX_("checkXY",c9,a7,24,13),
	HX_("checkX",90,16,0f,ba),
	HX_("checkY",91,16,0f,ba),
	HX_("checkRaw",00,a2,e9,ac),
	::String(null()) };

::hx::Class FlxGamepadAnalogStateList_obj::__mClass;

void FlxGamepadAnalogStateList_obj::__register()
{
	FlxGamepadAnalogStateList_obj _hx_dummy;
	FlxGamepadAnalogStateList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.lists.FlxGamepadAnalogStateList",f4,55,19,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadAnalogStateList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadAnalogStateList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadAnalogStateList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadAnalogStateList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

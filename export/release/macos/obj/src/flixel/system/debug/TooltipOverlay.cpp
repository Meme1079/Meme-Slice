// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#include <flixel/system/debug/TooltipOverlay.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5991393b6edf960d_124_new,"flixel.system.debug.TooltipOverlay","new",0x36d00ee7,"flixel.system.debug.TooltipOverlay.new","flixel/system/debug/Tooltip.hx",124,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_157_destroy,"flixel.system.debug.TooltipOverlay","destroy",0xdc11bb01,"flixel.system.debug.TooltipOverlay.destroy","flixel/system/debug/Tooltip.hx",157,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_178_resize,"flixel.system.debug.TooltipOverlay","resize",0x5bf5a9cd,"flixel.system.debug.TooltipOverlay.resize","flixel/system/debug/Tooltip.hx",178,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_191_reposition,"flixel.system.debug.TooltipOverlay","reposition",0xd7a41fb5,"flixel.system.debug.TooltipOverlay.reposition","flixel/system/debug/Tooltip.hx",191,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_198_setVisible,"flixel.system.debug.TooltipOverlay","setVisible",0x28454d49,"flixel.system.debug.TooltipOverlay.setVisible","flixel/system/debug/Tooltip.hx",198,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_214_setText,"flixel.system.debug.TooltipOverlay","setText",0xca099b76,"flixel.system.debug.TooltipOverlay.setText","flixel/system/debug/Tooltip.hx",214,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_222_toggleVisible,"flixel.system.debug.TooltipOverlay","toggleVisible",0xd0a20885,"flixel.system.debug.TooltipOverlay.toggleVisible","flixel/system/debug/Tooltip.hx",222,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_227_putOnTop,"flixel.system.debug.TooltipOverlay","putOnTop",0x10f53180,"flixel.system.debug.TooltipOverlay.putOnTop","flixel/system/debug/Tooltip.hx",227,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_230_update,"flixel.system.debug.TooltipOverlay","update",0xda7fd5e2,"flixel.system.debug.TooltipOverlay.update","flixel/system/debug/Tooltip.hx",230,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_236_updateSize,"flixel.system.debug.TooltipOverlay","updateSize",0x374a3bc3,"flixel.system.debug.TooltipOverlay.updateSize","flixel/system/debug/Tooltip.hx",236,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_247_ensureOnScreen,"flixel.system.debug.TooltipOverlay","ensureOnScreen",0xbc6422a2,"flixel.system.debug.TooltipOverlay.ensureOnScreen","flixel/system/debug/Tooltip.hx",247,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_264_handleMouseEvents,"flixel.system.debug.TooltipOverlay","handleMouseEvents",0x22de651d,"flixel.system.debug.TooltipOverlay.handleMouseEvents","flixel/system/debug/Tooltip.hx",264,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_62_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",62,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_67_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",67,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_72_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",72,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_77_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",77,0x5d425da4)
namespace flixel{
namespace _hx_system{
namespace debug{

void TooltipOverlay_obj::__construct( ::openfl::display::Sprite target,::String text,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5991393b6edf960d_124_new)
HXLINE( 125)		super::__construct();
HXLINE( 127)		this->owner = target;
HXLINE( 129)		this->maxSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,width,height);
HXLINE( 131)		this->_shadow =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,2,true,-16777216),null(),null());
HXLINE( 132)		this->_background =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,true,-12961222),null(),null());
HXLINE( 134)		this->textField = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(2,1,null(),null());
HXLINE( 135)		this->textField->set_alpha(((Float)0.8));
HXLINE( 136)		this->textField->set_text(text);
HXLINE( 137)		this->textField->set_wordWrap(true);
HXLINE( 139)		this->addChild(this->_shadow);
HXLINE( 140)		this->addChild(this->_background);
HXLINE( 141)		this->addChild(this->textField);
HXLINE( 143)		this->updateSize();
HXLINE( 144)		this->setVisible(false);
HXLINE( 146)		if (::hx::IsNotNull( this->owner )) {
HXLINE( 148)			this->owner->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->handleMouseEvents_dyn(),null(),null(),null());
HXLINE( 149)			this->owner->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->handleMouseEvents_dyn(),null(),null(),null());
            		}
            	}

Dynamic TooltipOverlay_obj::__CreateEmpty() { return new TooltipOverlay_obj; }

void *TooltipOverlay_obj::_hx_vtable = 0;

Dynamic TooltipOverlay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TooltipOverlay_obj > _hx_result = new TooltipOverlay_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TooltipOverlay_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x22d4b00d || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void TooltipOverlay_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_157_destroy)
HXLINE( 158)		this->_shadow = ( ( ::openfl::display::Bitmap)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->_shadow)) );
HXLINE( 159)		this->_background = ( ( ::openfl::display::Bitmap)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->_background)) );
HXLINE( 160)		this->textField = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->textField)) );
HXLINE( 161)		this->maxSize = null();
HXLINE( 163)		if (::hx::IsNotNull( this->owner )) {
HXLINE( 165)			this->owner->removeEventListener(HX_("mouseOver",19,4a,0d,f6),this->handleMouseEvents_dyn(),null());
HXLINE( 166)			this->owner->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->handleMouseEvents_dyn(),null());
            		}
HXLINE( 168)		this->owner = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,destroy,(void))

void TooltipOverlay_obj::resize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_178_resize)
HXLINE( 179)		this->maxSize->x = ( (Float)(::Std_obj::_hx_int(::Math_obj::abs(Width))) );
HXLINE( 180)		this->maxSize->y = ( (Float)(::Std_obj::_hx_int(::Math_obj::abs(Height))) );
HXLINE( 181)		this->updateSize();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TooltipOverlay_obj,resize,(void))

void TooltipOverlay_obj::reposition(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_191_reposition)
HXLINE( 192)		this->set_x(X);
HXLINE( 193)		this->set_y(Y);
HXLINE( 194)		this->ensureOnScreen();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TooltipOverlay_obj,reposition,(void))

void TooltipOverlay_obj::setVisible(bool Value){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_198_setVisible)
HXLINE( 199)		this->set_visible(Value);
HXLINE( 201)		if (this->get_visible()) {
HXLINE( 203)			this->parent->addChild(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 204)			this->ensureOnScreen();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,setVisible,(void))

void TooltipOverlay_obj::setText(::String Text){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_214_setText)
HXLINE( 215)		this->textField->set_text(Text);
HXLINE( 216)		this->updateSize();
HXLINE( 217)		this->ensureOnScreen();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,setText,(void))

void TooltipOverlay_obj::toggleVisible(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_222_toggleVisible)
HXDLIN( 222)		this->setVisible(!(this->get_visible()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,toggleVisible,(void))

void TooltipOverlay_obj::putOnTop(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_227_putOnTop)
HXDLIN( 227)		this->parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,putOnTop,(void))

void TooltipOverlay_obj::update(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_230_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,update,(void))

void TooltipOverlay_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_236_updateSize)
HXLINE( 237)		Float _hx_tmp;
HXDLIN( 237)		if ((this->maxSize->x <= 0)) {
HXLINE( 237)			_hx_tmp = this->textField->get_textWidth();
            		}
            		else {
HXLINE( 237)			_hx_tmp = ::Math_obj::abs(this->maxSize->x);
            		}
HXDLIN( 237)		this->_width = (::Std_obj::_hx_int(_hx_tmp) + 8);
HXLINE( 238)		Float _hx_tmp1;
HXDLIN( 238)		if ((this->maxSize->y <= 0)) {
HXLINE( 238)			_hx_tmp1 = this->textField->get_textHeight();
            		}
            		else {
HXLINE( 238)			_hx_tmp1 = ::Math_obj::abs(this->maxSize->y);
            		}
HXDLIN( 238)		this->_height = (::Std_obj::_hx_int(_hx_tmp1) + 8);
HXLINE( 239)		this->_background->set_scaleX(( (Float)(this->_width) ));
HXLINE( 240)		this->_background->set_scaleY(( (Float)(this->_height) ));
HXLINE( 241)		this->_shadow->set_scaleX(( (Float)(this->_width) ));
HXLINE( 242)		this->_shadow->set_y(( (Float)(this->_height) ));
HXLINE( 243)		this->textField->set_width(( (Float)(this->_width) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,updateSize,(void))

void TooltipOverlay_obj::ensureOnScreen(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_247_ensureOnScreen)
HXLINE( 250)		Float _hx_tmp;
HXDLIN( 250)		if ((this->get_x() < 0)) {
HXLINE( 250)			_hx_tmp = ( (Float)(0) );
            		}
            		else {
HXLINE( 250)			_hx_tmp = this->get_x();
            		}
HXDLIN( 250)		this->set_x(_hx_tmp);
HXLINE( 251)		Float _hx_tmp1;
HXDLIN( 251)		if ((this->get_y() < 0)) {
HXLINE( 251)			_hx_tmp1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 251)			_hx_tmp1 = this->get_y();
            		}
HXDLIN( 251)		this->set_y(_hx_tmp1);
HXLINE( 255)		Float offsetX;
HXDLIN( 255)		Float offsetX1 = this->get_x();
HXDLIN( 255)		Float offsetX2 = (offsetX1 + this->get_width());
HXDLIN( 255)		if ((offsetX2 >= ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXLINE( 255)			int offsetX3 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 255)			Float offsetX4 = this->get_x();
HXDLIN( 255)			offsetX = (( (Float)(offsetX3) ) - (offsetX4 + this->get_width()));
            		}
            		else {
HXLINE( 255)			offsetX = ( (Float)(0) );
            		}
HXLINE( 256)		Float offsetY;
HXDLIN( 256)		Float offsetY1 = this->get_y();
HXDLIN( 256)		Float offsetY2 = (offsetY1 + this->get_height());
HXDLIN( 256)		if ((offsetY2 >= ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXLINE( 256)			int offsetY3 = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXDLIN( 256)			Float offsetY4 = this->get_y();
HXDLIN( 256)			offsetY = (( (Float)(offsetY3) ) - (offsetY4 + this->get_height()));
            		}
            		else {
HXLINE( 256)			offsetY = ( (Float)(0) );
            		}
HXLINE( 258)		this->set_x((this->get_x() + offsetX));
HXLINE( 259)		this->set_y((this->get_y() + offsetY));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,ensureOnScreen,(void))

void TooltipOverlay_obj::handleMouseEvents( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_264_handleMouseEvents)
HXDLIN( 264)		bool _hx_tmp;
HXDLIN( 264)		if ((event->type == HX_("mouseOver",19,4a,0d,f6))) {
HXDLIN( 264)			_hx_tmp = !(this->get_visible());
            		}
            		else {
HXDLIN( 264)			_hx_tmp = false;
            		}
HXDLIN( 264)		if (_hx_tmp) {
HXLINE( 266)			this->set_x((event->stageX + 10));
HXLINE( 267)			this->set_y((event->stageY + ((Float)10)));
HXLINE( 269)			this->setVisible(true);
            		}
            		else {
HXLINE( 271)			if ((event->type == HX_("mouseOut",69,e7,1d,a4))) {
HXLINE( 272)				this->setVisible(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,handleMouseEvents,(void))

int TooltipOverlay_obj::BG_COLOR;

Float TooltipOverlay_obj::TEXT_ALPHA;

int TooltipOverlay_obj::MARGIN_X;

Float TooltipOverlay_obj::MARGIN_Y;


::hx::ObjectPtr< TooltipOverlay_obj > TooltipOverlay_obj::__new( ::openfl::display::Sprite target,::String text,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< TooltipOverlay_obj > __this = new TooltipOverlay_obj();
	__this->__construct(target,text,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< TooltipOverlay_obj > TooltipOverlay_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Sprite target,::String text,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	TooltipOverlay_obj *__this = (TooltipOverlay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TooltipOverlay_obj), true, "flixel.system.debug.TooltipOverlay"));
	*(void **)__this = TooltipOverlay_obj::_hx_vtable;
	__this->__construct(target,text,__o_width,__o_height);
	return __this;
}

TooltipOverlay_obj::TooltipOverlay_obj()
{
}

void TooltipOverlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TooltipOverlay);
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TooltipOverlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TooltipOverlay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return ::hx::Val( owner ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return ::hx::Val( _shadow ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setText") ) { return ::hx::Val( setText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return ::hx::Val( putOnTop_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"reposition") ) { return ::hx::Val( reposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return ::hx::Val( setVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return ::hx::Val( _background ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return ::hx::Val( toggleVisible_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ensureOnScreen") ) { return ::hx::Val( ensureOnScreen_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleMouseEvents") ) { return ::hx::Val( handleMouseEvents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TooltipOverlay_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TooltipOverlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_background",0d,61,a7,f8));
	outFields->push(HX_("_shadow",7f,d9,97,8b));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("owner",33,98,76,38));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TooltipOverlay_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TooltipOverlay_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(TooltipOverlay_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(TooltipOverlay_obj,_background),HX_("_background",0d,61,a7,f8)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(TooltipOverlay_obj,_shadow),HX_("_shadow",7f,d9,97,8b)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TooltipOverlay_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(TooltipOverlay_obj,owner),HX_("owner",33,98,76,38)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(TooltipOverlay_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TooltipOverlay_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TooltipOverlay_obj::BG_COLOR,HX_("BG_COLOR",09,4c,a7,0b)},
	{::hx::fsFloat,(void *) &TooltipOverlay_obj::TEXT_ALPHA,HX_("TEXT_ALPHA",ec,fa,4e,dd)},
	{::hx::fsInt,(void *) &TooltipOverlay_obj::MARGIN_X,HX_("MARGIN_X",c7,56,52,9e)},
	{::hx::fsFloat,(void *) &TooltipOverlay_obj::MARGIN_Y,HX_("MARGIN_Y",c8,56,52,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TooltipOverlay_obj_sMemberFields[] = {
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_background",0d,61,a7,f8),
	HX_("_shadow",7f,d9,97,8b),
	HX_("textField",cd,24,81,99),
	HX_("owner",33,98,76,38),
	HX_("maxSize",85,f9,83,cc),
	HX_("destroy",fa,2c,86,24),
	HX_("resize",f4,59,7b,08),
	HX_("reposition",5c,6f,62,a5),
	HX_("setVisible",f0,9c,03,f6),
	HX_("setText",6f,0d,7e,12),
	HX_("toggleVisible",3e,bb,e1,53),
	HX_("putOnTop",67,79,64,2e),
	HX_("update",09,86,05,87),
	HX_("updateSize",6a,8b,08,05),
	HX_("ensureOnScreen",c9,d1,e0,10),
	HX_("handleMouseEvents",56,68,00,8a),
	::String(null()) };

static void TooltipOverlay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::TEXT_ALPHA,"TEXT_ALPHA");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::MARGIN_X,"MARGIN_X");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::MARGIN_Y,"MARGIN_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TooltipOverlay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::TEXT_ALPHA,"TEXT_ALPHA");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::MARGIN_X,"MARGIN_X");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::MARGIN_Y,"MARGIN_Y");
};

#endif

::hx::Class TooltipOverlay_obj::__mClass;

static ::String TooltipOverlay_obj_sStaticFields[] = {
	HX_("BG_COLOR",09,4c,a7,0b),
	HX_("TEXT_ALPHA",ec,fa,4e,dd),
	HX_("MARGIN_X",c7,56,52,9e),
	HX_("MARGIN_Y",c8,56,52,9e),
	::String(null())
};

void TooltipOverlay_obj::__register()
{
	TooltipOverlay_obj _hx_dummy;
	TooltipOverlay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.TooltipOverlay",75,0f,ff,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TooltipOverlay_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TooltipOverlay_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TooltipOverlay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TooltipOverlay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TooltipOverlay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TooltipOverlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TooltipOverlay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TooltipOverlay_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_62_boot)
HXDLIN(  62)		BG_COLOR = -12961222;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_67_boot)
HXDLIN(  67)		TEXT_ALPHA = ((Float)0.8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_72_boot)
HXDLIN(  72)		MARGIN_X = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_77_boot)
HXDLIN(  77)		MARGIN_Y = ((Float)10);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug

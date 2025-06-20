// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e74b11cf5585adaf_8_new,"flixel.input.FlxPointer","new",0x20c36c33,"flixel.input.FlxPointer.new","flixel/input/FlxPointer.hx",8,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_73_getWorldPosition,"flixel.input.FlxPointer","getWorldPosition",0x52927af2,"flixel.input.FlxPointer.getWorldPosition","flixel/input/FlxPointer.hx",73,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_92_getGamePosition,"flixel.input.FlxPointer","getGamePosition",0xbd6974c4,"flixel.input.FlxPointer.getGamePosition","flixel/input/FlxPointer.hx",92,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_110_getViewPosition,"flixel.input.FlxPointer","getViewPosition",0x7139de37,"flixel.input.FlxPointer.getViewPosition","flixel/input/FlxPointer.hx",110,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_135_getScreenPosition,"flixel.input.FlxPointer","getScreenPosition",0xae561a7e,"flixel.input.FlxPointer.getScreenPosition","flixel/input/FlxPointer.hx",135,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_161_getPositionInCameraView,"flixel.input.FlxPointer","getPositionInCameraView",0x0470c541,"flixel.input.FlxPointer.getPositionInCameraView","flixel/input/FlxPointer.hx",161,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_178_getPosition,"flixel.input.FlxPointer","getPosition",0x9fea8a32,"flixel.input.FlxPointer.getPosition","flixel/input/FlxPointer.hx",178,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_193_overlaps,"flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",193,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_220_setGlobalScreenPositionUnsafe,"flixel.input.FlxPointer","setGlobalScreenPositionUnsafe",0x8f7aed13,"flixel.input.FlxPointer.setGlobalScreenPositionUnsafe","flixel/input/FlxPointer.hx",220,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_230_setRawPositionUnsafe,"flixel.input.FlxPointer","setRawPositionUnsafe",0x8511c282,"flixel.input.FlxPointer.setRawPositionUnsafe","flixel/input/FlxPointer.hx",230,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_242_updatePositions,"flixel.input.FlxPointer","updatePositions",0xb47050b4,"flixel.input.FlxPointer.updatePositions","flixel/input/FlxPointer.hx",242,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_258_toString,"flixel.input.FlxPointer","toString",0xd3da77f9,"flixel.input.FlxPointer.toString","flixel/input/FlxPointer.hx",258,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_263_get__globalScreenX,"flixel.input.FlxPointer","get__globalScreenX",0x346476e0,"flixel.input.FlxPointer.get__globalScreenX","flixel/input/FlxPointer.hx",263,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_268_get__globalScreenY,"flixel.input.FlxPointer","get__globalScreenY",0x346476e1,"flixel.input.FlxPointer.get__globalScreenY","flixel/input/FlxPointer.hx",268,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_272_set__globalScreenX,"flixel.input.FlxPointer","set__globalScreenX",0x1113a954,"flixel.input.FlxPointer.set__globalScreenX","flixel/input/FlxPointer.hx",272,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_278_set__globalScreenY,"flixel.input.FlxPointer","set__globalScreenY",0x1113a955,"flixel.input.FlxPointer.set__globalScreenY","flixel/input/FlxPointer.hx",278,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_60_boot,"flixel.input.FlxPointer","boot",0x825440ff,"flixel.input.FlxPointer.boot","flixel/input/FlxPointer.hx",60,0xe6a2529b)
namespace flixel{
namespace input{

void FlxPointer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_8_new)
HXLINE(  58)		this->_rawY = ((Float)0);
HXLINE(  57)		this->_rawX = ((Float)0);
HXLINE(  50)		this->gameY = 0;
HXLINE(  43)		this->gameX = 0;
HXLINE(  35)		this->viewY = 0;
HXLINE(  28)		this->viewX = 0;
HXLINE(  20)		this->screenY = 0;
HXLINE(  17)		this->screenX = 0;
HXLINE(  13)		this->y = 0;
HXLINE(  11)		this->x = 0;
            	}

Dynamic FlxPointer_obj::__CreateEmpty() { return new FlxPointer_obj; }

void *FlxPointer_obj::_hx_vtable = 0;

Dynamic FlxPointer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPointer_obj > _hx_result = new FlxPointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxPointer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62adae31;
}

 ::flixel::math::FlxBasePoint FlxPointer_obj::getWorldPosition( ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_73_getWorldPosition)
HXLINE(  74)		if (::hx::IsNull( camera )) {
HXLINE(  75)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  77)		result = this->getViewPosition(camera,result);
HXLINE(  78)		{
HXLINE(  78)			 ::flixel::math::FlxBasePoint point = camera->scroll;
HXDLIN(  78)			{
HXLINE(  78)				{
HXLINE(  78)					Float y = point->y;
HXDLIN(  78)					result->set_x((result->x + point->x));
HXDLIN(  78)					result->set_y((result->y + y));
            				}
HXDLIN(  78)				{
HXLINE(  78)					 ::flixel::math::FlxBasePoint _this = point;
HXDLIN(  78)					if (_this->_weak) {
HXLINE(  78)						_this->put();
            					}
            				}
            			}
            		}
HXLINE(  79)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getWorldPosition,return )

 ::flixel::math::FlxBasePoint FlxPointer_obj::getGamePosition( ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_92_getGamePosition)
HXLINE(  93)		if (::hx::IsNull( result )) {
HXLINE(  94)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  94)			point->_inPool = false;
HXDLIN(  94)			return point;
            		}
HXLINE(  96)		Float x = ( (Float)(::Std_obj::_hx_int(this->_rawX)) );
HXDLIN(  96)		Float y = ( (Float)(::Std_obj::_hx_int(this->_rawY)) );
HXDLIN(  96)		result->set_x(x);
HXDLIN(  96)		result->set_y(y);
HXDLIN(  96)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,getGamePosition,return )

 ::flixel::math::FlxBasePoint FlxPointer_obj::getViewPosition( ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_110_getViewPosition)
HXLINE( 111)		if (::hx::IsNull( camera )) {
HXLINE( 112)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 114)		if (::hx::IsNull( result )) {
HXLINE( 115)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 115)			point->_inPool = false;
HXDLIN( 115)			result = point;
            		}
HXLINE( 117)		result->set_x(( (Float)(::Std_obj::_hx_int((((( (Float)(this->gameX) ) - camera->x) / camera->zoom) + camera->viewMarginX))) ));
HXLINE( 118)		result->set_y(( (Float)(::Std_obj::_hx_int((((( (Float)(this->gameY) ) - camera->y) / camera->zoom) + camera->viewMarginY))) ));
HXLINE( 120)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getViewPosition,return )

 ::flixel::math::FlxBasePoint FlxPointer_obj::getScreenPosition( ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_135_getScreenPosition)
HXLINE( 136)		if (::hx::IsNull( camera )) {
HXLINE( 137)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 139)		if (::hx::IsNull( result )) {
HXLINE( 140)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 140)			point->_inPool = false;
HXDLIN( 140)			result = point;
            		}
HXLINE( 142)		result->set_x((((( (Float)(this->gameX) ) - camera->x) + ((((Float)0.5) * ( (Float)(camera->width) )) * (camera->zoom - camera->initialZoom))) / camera->zoom));
HXLINE( 143)		result->set_y((((( (Float)(this->gameY) ) - camera->y) + ((((Float)0.5) * ( (Float)(camera->height) )) * (camera->zoom - camera->initialZoom))) / camera->zoom));
HXLINE( 145)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getScreenPosition,return )

 ::flixel::math::FlxBasePoint FlxPointer_obj::getPositionInCameraView( ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_161_getPositionInCameraView)
HXLINE( 162)		if (::hx::IsNull( camera )) {
HXLINE( 163)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 165)		if (::hx::IsNull( result )) {
HXLINE( 166)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 166)			point->_inPool = false;
HXDLIN( 166)			result = point;
            		}
HXLINE( 168)		result->set_x((((( (Float)(this->gameX) ) - camera->x) / camera->zoom) + camera->viewMarginX));
HXLINE( 169)		result->set_y((((( (Float)(this->gameY) ) - camera->y) / camera->zoom) + camera->viewMarginY));
HXLINE( 171)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getPositionInCameraView,return )

 ::flixel::math::FlxBasePoint FlxPointer_obj::getPosition( ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_178_getPosition)
HXLINE( 179)		if (::hx::IsNull( result )) {
HXLINE( 180)			Float x = ( (Float)(this->x) );
HXDLIN( 180)			Float y = ( (Float)(this->y) );
HXDLIN( 180)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 180)			point->_inPool = false;
HXDLIN( 180)			return point;
            		}
HXLINE( 182)		Float y1 = ( (Float)(this->y) );
HXDLIN( 182)		result->set_x(( (Float)(this->x) ));
HXDLIN( 182)		result->set_y(y1);
HXDLIN( 182)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,getPosition,return )

bool FlxPointer_obj::overlaps( ::flixel::FlxBasic objectOrGroup, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_193_overlaps)
HXLINE( 195)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(objectOrGroup);
HXLINE( 196)		if (::hx::IsNotNull( group )) {
HXLINE( 198)			{
HXLINE( 198)				int _g = 0;
HXDLIN( 198)				::Array< ::Dynamic> _g1 = group->members;
HXDLIN( 198)				while((_g < _g1->length)){
HXLINE( 198)					 ::flixel::FlxBasic basic = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN( 198)					_g = (_g + 1);
HXLINE( 200)					bool _hx_tmp;
HXDLIN( 200)					if (::hx::IsNotNull( basic )) {
HXLINE( 200)						_hx_tmp = this->overlaps(basic,camera);
            					}
            					else {
HXLINE( 200)						_hx_tmp = false;
            					}
HXDLIN( 200)					if (_hx_tmp) {
HXLINE( 202)						return true;
            					}
            				}
            			}
HXLINE( 205)			return false;
            		}
HXLINE( 208)		this->getWorldPosition(camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 209)		 ::flixel::FlxObject object = ::hx::TCast<  ::flixel::FlxObject >::cast(objectOrGroup);
HXLINE( 210)		return object->overlapsPoint(::flixel::input::FlxPointer_obj::_cachedPoint,true,camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,overlaps,return )

void FlxPointer_obj::setGlobalScreenPositionUnsafe(Float newX,Float newY){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_220_setGlobalScreenPositionUnsafe)
HXDLIN( 220)		this->setRawPositionUnsafe(newX,newY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,setGlobalScreenPositionUnsafe,(void))

void FlxPointer_obj::setRawPositionUnsafe(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_230_setRawPositionUnsafe)
HXLINE( 231)		this->_rawX = (x / ::flixel::FlxG_obj::scaleMode->scale->x);
HXLINE( 232)		this->_rawY = (y / ::flixel::FlxG_obj::scaleMode->scale->y);
HXLINE( 234)		this->updatePositions();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,setRawPositionUnsafe,(void))

void FlxPointer_obj::updatePositions(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_242_updatePositions)
HXLINE( 243)		this->getGamePosition(::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 244)		this->gameX = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 245)		this->gameY = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
HXLINE( 247)		this->getViewPosition(::flixel::FlxG_obj::camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 248)		this->viewX = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 249)		this->viewY = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
HXLINE( 251)		this->getWorldPosition(::flixel::FlxG_obj::camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 252)		this->x = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 253)		this->y = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,updatePositions,(void))

::String FlxPointer_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_258_toString)
HXDLIN( 258)		 ::Dynamic value = this->x;
HXDLIN( 258)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 258)		_this->label = HX_("x",78,00,00,00);
HXDLIN( 258)		_this->value = value;
HXDLIN( 258)		 ::Dynamic value1 = this->y;
HXDLIN( 258)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 258)		_this1->label = HX_("y",79,00,00,00);
HXDLIN( 258)		_this1->value = value1;
HXDLIN( 258)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,toString,return )

int FlxPointer_obj::get__globalScreenX(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_263_get__globalScreenX)
HXDLIN( 263)		return this->gameX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,get__globalScreenX,return )

int FlxPointer_obj::get__globalScreenY(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_268_get__globalScreenY)
HXDLIN( 268)		return this->gameY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,get__globalScreenY,return )

int FlxPointer_obj::set__globalScreenX(int value){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_272_set__globalScreenX)
HXLINE( 273)		this->_rawX = (( (Float)(value) ) * ::flixel::FlxG_obj::scaleMode->scale->x);
HXLINE( 274)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,set__globalScreenX,return )

int FlxPointer_obj::set__globalScreenY(int value){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_278_set__globalScreenY)
HXLINE( 279)		this->_rawY = (( (Float)(value) ) * ::flixel::FlxG_obj::scaleMode->scale->y);
HXLINE( 280)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,set__globalScreenY,return )

 ::flixel::math::FlxBasePoint FlxPointer_obj::_cachedPoint;


::hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__new() {
	::hx::ObjectPtr< FlxPointer_obj > __this = new FlxPointer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxPointer_obj *__this = (FlxPointer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPointer_obj), false, "flixel.input.FlxPointer"));
	*(void **)__this = FlxPointer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxPointer_obj::FlxPointer_obj()
{
}

::hx::Val FlxPointer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"viewX") ) { return ::hx::Val( viewX ); }
		if (HX_FIELD_EQ(inName,"viewY") ) { return ::hx::Val( viewY ); }
		if (HX_FIELD_EQ(inName,"gameX") ) { return ::hx::Val( gameX ); }
		if (HX_FIELD_EQ(inName,"gameY") ) { return ::hx::Val( gameY ); }
		if (HX_FIELD_EQ(inName,"_rawX") ) { return ::hx::Val( _rawX ); }
		if (HX_FIELD_EQ(inName,"_rawY") ) { return ::hx::Val( _rawY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return ::hx::Val( screenX ); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return ::hx::Val( screenY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__globalScreenX() ); }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__globalScreenY() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGamePosition") ) { return ::hx::Val( getGamePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getViewPosition") ) { return ::hx::Val( getViewPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"updatePositions") ) { return ::hx::Val( updatePositions_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return ::hx::Val( getWorldPosition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get__globalScreenX") ) { return ::hx::Val( get__globalScreenX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get__globalScreenY") ) { return ::hx::Val( get__globalScreenY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__globalScreenX") ) { return ::hx::Val( set__globalScreenX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__globalScreenY") ) { return ::hx::Val( set__globalScreenY_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setRawPositionUnsafe") ) { return ::hx::Val( setRawPositionUnsafe_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getPositionInCameraView") ) { return ::hx::Val( getPositionInCameraView_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return ::hx::Val( setGlobalScreenPositionUnsafe_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPointer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedPoint") ) { outValue = ( _cachedPoint ); return true; }
	}
	return false;
}

::hx::Val FlxPointer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"viewX") ) { viewX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewY") ) { viewY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameX") ) { gameX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameY") ) { gameY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rawX") ) { _rawX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rawY") ) { _rawY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__globalScreenX(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__globalScreenY(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPointer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedPoint") ) { _cachedPoint=ioValue.Cast<  ::flixel::math::FlxBasePoint >(); return true; }
	}
	return false;
}

void FlxPointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("screenX",6c,c3,36,2a));
	outFields->push(HX_("screenY",6d,c3,36,2a));
	outFields->push(HX_("viewX",53,e6,fc,36));
	outFields->push(HX_("viewY",54,e6,fc,36));
	outFields->push(HX_("gameX",26,80,b6,8e));
	outFields->push(HX_("gameY",27,80,b6,8e));
	outFields->push(HX_("_globalScreenX",8a,ec,c1,8e));
	outFields->push(HX_("_globalScreenY",8b,ec,c1,8e));
	outFields->push(HX_("_rawX",4f,71,b5,fe));
	outFields->push(HX_("_rawY",50,71,b5,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPointer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,screenX),HX_("screenX",6c,c3,36,2a)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,screenY),HX_("screenY",6d,c3,36,2a)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,viewX),HX_("viewX",53,e6,fc,36)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,viewY),HX_("viewY",54,e6,fc,36)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,gameX),HX_("gameX",26,80,b6,8e)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,gameY),HX_("gameY",27,80,b6,8e)},
	{::hx::fsFloat,(int)offsetof(FlxPointer_obj,_rawX),HX_("_rawX",4f,71,b5,fe)},
	{::hx::fsFloat,(int)offsetof(FlxPointer_obj,_rawY),HX_("_rawY",50,71,b5,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxPointer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxPointer_obj::_cachedPoint,HX_("_cachedPoint",0f,9f,83,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPointer_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("screenX",6c,c3,36,2a),
	HX_("screenY",6d,c3,36,2a),
	HX_("viewX",53,e6,fc,36),
	HX_("viewY",54,e6,fc,36),
	HX_("gameX",26,80,b6,8e),
	HX_("gameY",27,80,b6,8e),
	HX_("_rawX",4f,71,b5,fe),
	HX_("_rawY",50,71,b5,fe),
	HX_("getWorldPosition",a5,3e,0b,e6),
	HX_("getGamePosition",71,e8,d5,28),
	HX_("getViewPosition",e4,51,a6,dc),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("getPositionInCameraView",ee,2d,2c,bb),
	HX_("getPosition",5f,63,ee,f0),
	HX_("overlaps",0c,d3,2a,45),
	HX_("setGlobalScreenPositionUnsafe",80,95,b5,56),
	HX_("setRawPositionUnsafe",b5,db,61,68),
	HX_("updatePositions",61,c4,dc,1f),
	HX_("toString",ac,d0,6e,38),
	HX_("get__globalScreenX",53,cd,5b,2a),
	HX_("get__globalScreenY",54,cd,5b,2a),
	HX_("set__globalScreenX",c7,ff,0a,07),
	HX_("set__globalScreenY",c8,ff,0a,07),
	::String(null()) };

static void FlxPointer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointer_obj::_cachedPoint,"_cachedPoint");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPointer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointer_obj::_cachedPoint,"_cachedPoint");
};

#endif

::hx::Class FlxPointer_obj::__mClass;

static ::String FlxPointer_obj_sStaticFields[] = {
	HX_("_cachedPoint",0f,9f,83,a5),
	::String(null())
};

void FlxPointer_obj::__register()
{
	FlxPointer_obj _hx_dummy;
	FlxPointer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxPointer",c1,d6,8e,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPointer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPointer_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPointer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPointer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPointer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPointer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPointer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPointer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPointer_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_60_boot)
HXDLIN(  60)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  60)			point->_inPool = false;
HXDLIN(  60)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_60_boot)
HXDLIN(  60)		_cachedPoint = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace input

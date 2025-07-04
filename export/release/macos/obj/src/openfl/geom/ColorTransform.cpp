// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82e72dbfef9da50a_168_new,"openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",168,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_191_concat,"openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",191,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_212_toString,"openfl.geom.ColorTransform","toString",0xe65269fd,"openfl.geom.ColorTransform.toString","openfl/geom/ColorTransform.hx",212,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_218___clone,"openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",218,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_222___copyFrom,"openfl.geom.ColorTransform","__copyFrom",0x0c92ce70,"openfl.geom.ColorTransform.__copyFrom","openfl/geom/ColorTransform.hx",222,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_235___combine,"openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",235,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_248___identity,"openfl.geom.ColorTransform","__identity",0xfd6107ef,"openfl.geom.ColorTransform.__identity","openfl/geom/ColorTransform.hx",248,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_260___invert,"openfl.geom.ColorTransform","__invert",0xf5ebeb87,"openfl.geom.ColorTransform.__invert","openfl/geom/ColorTransform.hx",260,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_273___equals,"openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",273,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_286___isDefault,"openfl.geom.ColorTransform","__isDefault",0x071aee26,"openfl.geom.ColorTransform.__isDefault","openfl/geom/ColorTransform.hx",286,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_304___setArrays,"openfl.geom.ColorTransform","__setArrays",0x7ef0862b,"openfl.geom.ColorTransform.__setArrays","openfl/geom/ColorTransform.hx",304,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_318_get_color,"openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",318,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_322_set_color,"openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",322,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_336___toLimeColorMatrix,"openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",336,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_63_boot,"openfl.geom.ColorTransform","boot",0xdfe1e103,"openfl.geom.ColorTransform.boot","openfl/geom/ColorTransform.hx",63,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_64_boot,"openfl.geom.ColorTransform","boot",0xdfe1e103,"openfl.geom.ColorTransform.boot","openfl/geom/ColorTransform.hx",64,0x850de941)
namespace openfl{
namespace geom{

void ColorTransform_obj::__construct(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset){
            		Float redMultiplier = __o_redMultiplier.Default(1);
            		Float greenMultiplier = __o_greenMultiplier.Default(1);
            		Float blueMultiplier = __o_blueMultiplier.Default(1);
            		Float alphaMultiplier = __o_alphaMultiplier.Default(1);
            		Float redOffset = __o_redOffset.Default(0);
            		Float greenOffset = __o_greenOffset.Default(0);
            		Float blueOffset = __o_blueOffset.Default(0);
            		Float alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_168_new)
HXLINE( 169)		this->redMultiplier = redMultiplier;
HXLINE( 170)		this->greenMultiplier = greenMultiplier;
HXLINE( 171)		this->blueMultiplier = blueMultiplier;
HXLINE( 172)		this->alphaMultiplier = alphaMultiplier;
HXLINE( 173)		this->redOffset = redOffset;
HXLINE( 174)		this->greenOffset = greenOffset;
HXLINE( 175)		this->blueOffset = blueOffset;
HXLINE( 176)		this->alphaOffset = alphaOffset;
            	}

Dynamic ColorTransform_obj::__CreateEmpty() { return new ColorTransform_obj; }

void *ColorTransform_obj::_hx_vtable = 0;

Dynamic ColorTransform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorTransform_obj > _hx_result = new ColorTransform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool ColorTransform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ba99a35;
}

void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_191_concat)
HXLINE( 192)		this->redOffset = ((second->redOffset * this->redMultiplier) + this->redOffset);
HXLINE( 193)		this->greenOffset = ((second->greenOffset * this->greenMultiplier) + this->greenOffset);
HXLINE( 194)		this->blueOffset = ((second->blueOffset * this->blueMultiplier) + this->blueOffset);
HXLINE( 195)		this->alphaOffset = ((second->alphaOffset * this->alphaMultiplier) + this->alphaOffset);
HXLINE( 197)		 ::openfl::geom::ColorTransform _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)		_hx_tmp->redMultiplier = (_hx_tmp->redMultiplier * second->redMultiplier);
HXLINE( 198)		 ::openfl::geom::ColorTransform _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)		_hx_tmp1->greenMultiplier = (_hx_tmp1->greenMultiplier * second->greenMultiplier);
HXLINE( 199)		 ::openfl::geom::ColorTransform _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 199)		_hx_tmp2->blueMultiplier = (_hx_tmp2->blueMultiplier * second->blueMultiplier);
HXLINE( 200)		 ::openfl::geom::ColorTransform _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 200)		_hx_tmp3->alphaMultiplier = (_hx_tmp3->alphaMultiplier * second->alphaMultiplier);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::String ColorTransform_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_212_toString)
HXDLIN( 212)		return ((((((((((((((((HX_("(redMultiplier=",f3,ad,1c,05) + this->redMultiplier) + HX_(", greenMultiplier=",0d,c2,8d,70)) + this->greenMultiplier) + HX_(", blueMultiplier=",2e,6d,c3,3b)) + this->blueMultiplier) + HX_(", alphaMultiplier=",52,89,82,1f)) + this->alphaMultiplier) + HX_(", redOffset=",6d,d3,86,3f)) + this->redOffset) + HX_(", greenOffset=",3b,d5,ed,53)) + this->greenOffset) + HX_(", blueOffset=",dc,1b,85,47)) + this->blueOffset) + HX_(", alphaOffset=",00,56,b2,98)) + this->alphaOffset) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,toString,return )

 ::openfl::geom::ColorTransform ColorTransform_obj::_hx___clone(){
            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_218___clone)
HXDLIN( 218)		return  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,this->redMultiplier,this->greenMultiplier,this->blueMultiplier,this->alphaMultiplier,this->redOffset,this->greenOffset,this->blueOffset,this->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___clone,return )

void ColorTransform_obj::_hx___copyFrom( ::openfl::geom::ColorTransform ct){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_222___copyFrom)
HXLINE( 223)		this->redMultiplier = ct->redMultiplier;
HXLINE( 224)		this->greenMultiplier = ct->greenMultiplier;
HXLINE( 225)		this->blueMultiplier = ct->blueMultiplier;
HXLINE( 226)		this->alphaMultiplier = ct->alphaMultiplier;
HXLINE( 228)		this->redOffset = ct->redOffset;
HXLINE( 229)		this->greenOffset = ct->greenOffset;
HXLINE( 230)		this->blueOffset = ct->blueOffset;
HXLINE( 231)		this->alphaOffset = ct->alphaOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___copyFrom,(void))

void ColorTransform_obj::_hx___combine( ::openfl::geom::ColorTransform ct){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_235___combine)
HXLINE( 236)		 ::openfl::geom::ColorTransform _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 236)		_hx_tmp->redMultiplier = (_hx_tmp->redMultiplier * ct->redMultiplier);
HXLINE( 237)		 ::openfl::geom::ColorTransform _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 237)		_hx_tmp1->greenMultiplier = (_hx_tmp1->greenMultiplier * ct->greenMultiplier);
HXLINE( 238)		 ::openfl::geom::ColorTransform _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)		_hx_tmp2->blueMultiplier = (_hx_tmp2->blueMultiplier * ct->blueMultiplier);
HXLINE( 239)		 ::openfl::geom::ColorTransform _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)		_hx_tmp3->alphaMultiplier = (_hx_tmp3->alphaMultiplier * ct->alphaMultiplier);
HXLINE( 241)		 ::openfl::geom::ColorTransform _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)		_hx_tmp4->redOffset = (_hx_tmp4->redOffset + ct->redOffset);
HXLINE( 242)		 ::openfl::geom::ColorTransform _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 242)		_hx_tmp5->greenOffset = (_hx_tmp5->greenOffset + ct->greenOffset);
HXLINE( 243)		 ::openfl::geom::ColorTransform _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 243)		_hx_tmp6->blueOffset = (_hx_tmp6->blueOffset + ct->blueOffset);
HXLINE( 244)		 ::openfl::geom::ColorTransform _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)		_hx_tmp7->alphaOffset = (_hx_tmp7->alphaOffset + ct->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___combine,(void))

void ColorTransform_obj::_hx___identity(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_248___identity)
HXLINE( 249)		this->redMultiplier = ( (Float)(1) );
HXLINE( 250)		this->greenMultiplier = ( (Float)(1) );
HXLINE( 251)		this->blueMultiplier = ( (Float)(1) );
HXLINE( 252)		this->alphaMultiplier = ( (Float)(1) );
HXLINE( 253)		this->redOffset = ( (Float)(0) );
HXLINE( 254)		this->greenOffset = ( (Float)(0) );
HXLINE( 255)		this->blueOffset = ( (Float)(0) );
HXLINE( 256)		this->alphaOffset = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___identity,(void))

void ColorTransform_obj::_hx___invert(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_260___invert)
HXLINE( 261)		Float _hx_tmp;
HXDLIN( 261)		if ((this->redMultiplier != 0)) {
HXLINE( 261)			_hx_tmp = (( (Float)(1) ) / this->redMultiplier);
            		}
            		else {
HXLINE( 261)			_hx_tmp = ( (Float)(1) );
            		}
HXDLIN( 261)		this->redMultiplier = _hx_tmp;
HXLINE( 262)		Float _hx_tmp1;
HXDLIN( 262)		if ((this->greenMultiplier != 0)) {
HXLINE( 262)			_hx_tmp1 = (( (Float)(1) ) / this->greenMultiplier);
            		}
            		else {
HXLINE( 262)			_hx_tmp1 = ( (Float)(1) );
            		}
HXDLIN( 262)		this->greenMultiplier = _hx_tmp1;
HXLINE( 263)		Float _hx_tmp2;
HXDLIN( 263)		if ((this->blueMultiplier != 0)) {
HXLINE( 263)			_hx_tmp2 = (( (Float)(1) ) / this->blueMultiplier);
            		}
            		else {
HXLINE( 263)			_hx_tmp2 = ( (Float)(1) );
            		}
HXDLIN( 263)		this->blueMultiplier = _hx_tmp2;
HXLINE( 264)		Float _hx_tmp3;
HXDLIN( 264)		if ((this->alphaMultiplier != 0)) {
HXLINE( 264)			_hx_tmp3 = (( (Float)(1) ) / this->alphaMultiplier);
            		}
            		else {
HXLINE( 264)			_hx_tmp3 = ( (Float)(1) );
            		}
HXDLIN( 264)		this->alphaMultiplier = _hx_tmp3;
HXLINE( 265)		this->redOffset = -(this->redOffset);
HXLINE( 266)		this->greenOffset = -(this->greenOffset);
HXLINE( 267)		this->blueOffset = -(this->blueOffset);
HXLINE( 268)		this->alphaOffset = -(this->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___invert,(void))

bool ColorTransform_obj::_hx___equals( ::openfl::geom::ColorTransform ct,bool ignoreAlphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_273___equals)
HXDLIN( 273)		bool _hx_tmp;
HXDLIN( 273)		bool _hx_tmp1;
HXDLIN( 273)		bool _hx_tmp2;
HXDLIN( 273)		bool _hx_tmp3;
HXDLIN( 273)		bool _hx_tmp4;
HXDLIN( 273)		bool _hx_tmp5;
HXDLIN( 273)		bool _hx_tmp6;
HXDLIN( 273)		if (::hx::IsNotNull( ct )) {
HXDLIN( 273)			_hx_tmp6 = (this->redMultiplier == ct->redMultiplier);
            		}
            		else {
HXDLIN( 273)			_hx_tmp6 = false;
            		}
HXDLIN( 273)		if (_hx_tmp6) {
HXDLIN( 273)			_hx_tmp5 = (this->greenMultiplier == ct->greenMultiplier);
            		}
            		else {
HXDLIN( 273)			_hx_tmp5 = false;
            		}
HXDLIN( 273)		if (_hx_tmp5) {
HXDLIN( 273)			_hx_tmp4 = (this->blueMultiplier == ct->blueMultiplier);
            		}
            		else {
HXDLIN( 273)			_hx_tmp4 = false;
            		}
HXDLIN( 273)		if (_hx_tmp4) {
HXLINE( 277)			if (!(ignoreAlphaMultiplier)) {
HXDLIN( 273)				_hx_tmp3 = (this->alphaMultiplier == ct->alphaMultiplier);
            			}
            			else {
HXDLIN( 273)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXDLIN( 273)			_hx_tmp3 = false;
            		}
HXDLIN( 273)		if (_hx_tmp3) {
HXDLIN( 273)			_hx_tmp2 = (this->redOffset == ct->redOffset);
            		}
            		else {
HXDLIN( 273)			_hx_tmp2 = false;
            		}
HXDLIN( 273)		if (_hx_tmp2) {
HXDLIN( 273)			_hx_tmp1 = (this->greenOffset == ct->greenOffset);
            		}
            		else {
HXDLIN( 273)			_hx_tmp1 = false;
            		}
HXDLIN( 273)		if (_hx_tmp1) {
HXDLIN( 273)			_hx_tmp = (this->blueOffset == ct->blueOffset);
            		}
            		else {
HXDLIN( 273)			_hx_tmp = false;
            		}
HXDLIN( 273)		if (_hx_tmp) {
HXLINE( 281)			return (this->alphaOffset == ct->alphaOffset);
            		}
            		else {
HXDLIN( 273)			return false;
            		}
HXDLIN( 273)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,_hx___equals,return )

bool ColorTransform_obj::_hx___isDefault(bool ignoreAlphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_286___isDefault)
HXDLIN( 286)		if (ignoreAlphaMultiplier) {
HXLINE( 288)			bool _hx_tmp;
HXDLIN( 288)			bool _hx_tmp1;
HXDLIN( 288)			bool _hx_tmp2;
HXDLIN( 288)			bool _hx_tmp3;
HXDLIN( 288)			bool _hx_tmp4;
HXDLIN( 288)			if ((this->redMultiplier == 1)) {
HXLINE( 288)				_hx_tmp4 = (this->greenMultiplier == 1);
            			}
            			else {
HXLINE( 288)				_hx_tmp4 = false;
            			}
HXDLIN( 288)			if (_hx_tmp4) {
HXLINE( 288)				_hx_tmp3 = (this->blueMultiplier == 1);
            			}
            			else {
HXLINE( 288)				_hx_tmp3 = false;
            			}
HXDLIN( 288)			if (_hx_tmp3) {
HXLINE( 288)				_hx_tmp2 = (this->redOffset == 0);
            			}
            			else {
HXLINE( 288)				_hx_tmp2 = false;
            			}
HXDLIN( 288)			if (_hx_tmp2) {
HXLINE( 288)				_hx_tmp1 = (this->greenOffset == 0);
            			}
            			else {
HXLINE( 288)				_hx_tmp1 = false;
            			}
HXDLIN( 288)			if (_hx_tmp1) {
HXLINE( 288)				_hx_tmp = (this->blueOffset == 0);
            			}
            			else {
HXLINE( 288)				_hx_tmp = false;
            			}
HXDLIN( 288)			if (_hx_tmp) {
HXLINE( 294)				return (this->alphaOffset == 0);
            			}
            			else {
HXLINE( 288)				return false;
            			}
            		}
            		else {
HXLINE( 298)			bool _hx_tmp5;
HXDLIN( 298)			bool _hx_tmp6;
HXDLIN( 298)			bool _hx_tmp7;
HXDLIN( 298)			bool _hx_tmp8;
HXDLIN( 298)			bool _hx_tmp9;
HXDLIN( 298)			bool _hx_tmp10;
HXDLIN( 298)			if ((this->redMultiplier == 1)) {
HXLINE( 298)				_hx_tmp10 = (this->greenMultiplier == 1);
            			}
            			else {
HXLINE( 298)				_hx_tmp10 = false;
            			}
HXDLIN( 298)			if (_hx_tmp10) {
HXLINE( 298)				_hx_tmp9 = (this->blueMultiplier == 1);
            			}
            			else {
HXLINE( 298)				_hx_tmp9 = false;
            			}
HXDLIN( 298)			if (_hx_tmp9) {
HXLINE( 298)				_hx_tmp8 = (this->alphaMultiplier == 1);
            			}
            			else {
HXLINE( 298)				_hx_tmp8 = false;
            			}
HXDLIN( 298)			if (_hx_tmp8) {
HXLINE( 298)				_hx_tmp7 = (this->redOffset == 0);
            			}
            			else {
HXLINE( 298)				_hx_tmp7 = false;
            			}
HXDLIN( 298)			if (_hx_tmp7) {
HXLINE( 298)				_hx_tmp6 = (this->greenOffset == 0);
            			}
            			else {
HXLINE( 298)				_hx_tmp6 = false;
            			}
HXDLIN( 298)			if (_hx_tmp6) {
HXLINE( 298)				_hx_tmp5 = (this->blueOffset == 0);
            			}
            			else {
HXLINE( 298)				_hx_tmp5 = false;
            			}
HXDLIN( 298)			if (_hx_tmp5) {
HXLINE( 299)				return (this->alphaOffset == 0);
            			}
            			else {
HXLINE( 298)				return false;
            			}
            		}
HXLINE( 286)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___isDefault,return )

void ColorTransform_obj::_hx___setArrays(::Array< Float > colorMultipliers,::Array< Float > colorOffsets){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_304___setArrays)
HXLINE( 305)		colorMultipliers[0] = this->redMultiplier;
HXLINE( 306)		colorMultipliers[1] = this->greenMultiplier;
HXLINE( 307)		colorMultipliers[2] = this->blueMultiplier;
HXLINE( 308)		colorMultipliers[3] = this->alphaMultiplier;
HXLINE( 309)		colorOffsets[0] = this->redOffset;
HXLINE( 310)		colorOffsets[1] = this->greenOffset;
HXLINE( 311)		colorOffsets[2] = this->blueOffset;
HXLINE( 312)		colorOffsets[3] = this->alphaOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,_hx___setArrays,(void))

int ColorTransform_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_318_get_color)
HXDLIN( 318)		int _hx_tmp = (::Std_obj::_hx_int(this->redOffset) << 16);
HXDLIN( 318)		int _hx_tmp1 = (_hx_tmp | (::Std_obj::_hx_int(this->greenOffset) << 8));
HXDLIN( 318)		return (_hx_tmp1 | ::Std_obj::_hx_int(this->blueOffset));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_322_set_color)
HXLINE( 323)		this->redOffset = ( (Float)(((value >> 16) & 255)) );
HXLINE( 324)		this->greenOffset = ( (Float)(((value >> 8) & 255)) );
HXLINE( 325)		this->blueOffset = ( (Float)((value & 255)) );
HXLINE( 327)		this->redMultiplier = ( (Float)(0) );
HXLINE( 328)		this->greenMultiplier = ( (Float)(0) );
HXLINE( 329)		this->blueMultiplier = ( (Float)(0) );
HXLINE( 331)		return this->get_color();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___toLimeColorMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_336___toLimeColorMatrix)
HXLINE( 337)		if (::hx::IsNull( ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix )) {
HXLINE( 339)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 339)			::cpp::VirtualArray array = null();
HXDLIN( 339)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 339)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 339)			 ::Dynamic len = null();
HXDLIN( 339)			::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,20,8);
            		}
HXLINE( 342)		{
HXLINE( 342)			 ::lime::utils::ArrayBufferView this1 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 342)			Float val = this->redMultiplier;
HXDLIN( 342)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE( 343)		{
HXLINE( 343)			 ::lime::utils::ArrayBufferView this2 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 343)			Float val1 = (this->redOffset / ( (Float)(255) ));
HXDLIN( 343)			 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 16),val1);
            		}
HXLINE( 344)		{
HXLINE( 344)			 ::lime::utils::ArrayBufferView this3 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 344)			Float val2 = this->greenMultiplier;
HXDLIN( 344)			 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 24),val2);
            		}
HXLINE( 345)		{
HXLINE( 345)			 ::lime::utils::ArrayBufferView this4 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 345)			Float val3 = (this->greenOffset / ( (Float)(255) ));
HXDLIN( 345)			 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 36),val3);
            		}
HXLINE( 346)		{
HXLINE( 346)			 ::lime::utils::ArrayBufferView this5 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 346)			Float val4 = this->blueMultiplier;
HXDLIN( 346)			 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 48),val4);
            		}
HXLINE( 347)		{
HXLINE( 347)			 ::lime::utils::ArrayBufferView this6 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 347)			Float val5 = (this->blueOffset / ( (Float)(255) ));
HXDLIN( 347)			 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 56),val5);
            		}
HXLINE( 348)		{
HXLINE( 348)			 ::lime::utils::ArrayBufferView this7 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 348)			Float val6 = this->alphaMultiplier;
HXDLIN( 348)			 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 72),val6);
            		}
HXLINE( 349)		{
HXLINE( 349)			 ::lime::utils::ArrayBufferView this8 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 349)			Float val7 = (this->alphaOffset / ( (Float)(255) ));
HXDLIN( 349)			 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 76),val7);
            		}
HXLINE( 351)		return ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___toLimeColorMatrix,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___limeColorMatrix;

 ::lime::utils::ObjectPool ColorTransform_obj::_hx___pool;


::hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset) {
	::hx::ObjectPtr< ColorTransform_obj > __this = new ColorTransform_obj();
	__this->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return __this;
}

::hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset) {
	ColorTransform_obj *__this = (ColorTransform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorTransform_obj), false, "openfl.geom.ColorTransform"));
	*(void **)__this = ColorTransform_obj::_hx_vtable;
	__this->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return __this;
}

ColorTransform_obj::ColorTransform_obj()
{
}

::hx::Val ColorTransform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return ::hx::Val( _hx___clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"__invert") ) { return ::hx::Val( _hx___invert_dyn() ); }
		if (HX_FIELD_EQ(inName,"__equals") ) { return ::hx::Val( _hx___equals_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return ::hx::Val( redOffset ); }
		if (HX_FIELD_EQ(inName,"__combine") ) { return ::hx::Val( _hx___combine_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return ::hx::Val( blueOffset ); }
		if (HX_FIELD_EQ(inName,"__copyFrom") ) { return ::hx::Val( _hx___copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"__identity") ) { return ::hx::Val( _hx___identity_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return ::hx::Val( alphaOffset ); }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return ::hx::Val( greenOffset ); }
		if (HX_FIELD_EQ(inName,"__isDefault") ) { return ::hx::Val( _hx___isDefault_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setArrays") ) { return ::hx::Val( _hx___setArrays_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return ::hx::Val( redMultiplier ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return ::hx::Val( blueMultiplier ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return ::hx::Val( alphaMultiplier ); }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return ::hx::Val( greenMultiplier ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return ::hx::Val( _hx___toLimeColorMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorTransform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { outValue = ( _hx___limeColorMatrix ); return true; }
	}
	return false;
}

::hx::Val ColorTransform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { _hx___limeColorMatrix=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaMultiplier",7f,b4,82,9a));
	outFields->push(HX_("alphaOffset",91,8d,43,d0));
	outFields->push(HX_("blueMultiplier",bb,32,96,cf));
	outFields->push(HX_("blueOffset",cd,3d,34,bb));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("greenMultiplier",24,2c,40,6f));
	outFields->push(HX_("greenOffset",b6,0e,d9,b7));
	outFields->push(HX_("redMultiplier",32,f4,e9,4e));
	outFields->push(HX_("redOffset",c4,37,9e,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorTransform_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_("alphaMultiplier",7f,b4,82,9a)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_("alphaOffset",91,8d,43,d0)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_("blueMultiplier",bb,32,96,cf)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_("blueOffset",cd,3d,34,bb)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_("greenMultiplier",24,2c,40,6f)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_("greenOffset",b6,0e,d9,b7)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_("redMultiplier",32,f4,e9,4e)},
	{::hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_("redOffset",c4,37,9e,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ColorTransform_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorTransform_obj::_hx___limeColorMatrix,HX_("__limeColorMatrix",cf,d7,37,34)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &ColorTransform_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorTransform_obj_sMemberFields[] = {
	HX_("alphaMultiplier",7f,b4,82,9a),
	HX_("alphaOffset",91,8d,43,d0),
	HX_("blueMultiplier",bb,32,96,cf),
	HX_("blueOffset",cd,3d,34,bb),
	HX_("greenMultiplier",24,2c,40,6f),
	HX_("greenOffset",b6,0e,d9,b7),
	HX_("redMultiplier",32,f4,e9,4e),
	HX_("redOffset",c4,37,9e,53),
	HX_("concat",14,09,d0,c7),
	HX_("toString",ac,d0,6e,38),
	HX_("__clone",3d,6c,c1,b2),
	HX_("__copyFrom",df,7e,99,6b),
	HX_("__combine",5f,7b,7c,fb),
	HX_("__identity",5e,b8,67,5c),
	HX_("__invert",36,52,08,48),
	HX_("__equals",5f,59,22,68),
	HX_("__isDefault",d7,9e,ee,cd),
	HX_("__setArrays",dc,36,c4,45),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("__toLimeColorMatrix",94,d4,b6,78),
	::String(null()) };

static void ColorTransform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
	HX_MARK_MEMBER_NAME(ColorTransform_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorTransform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::_hx___pool,"__pool");
};

#endif

::hx::Class ColorTransform_obj::__mClass;

static ::String ColorTransform_obj_sStaticFields[] = {
	HX_("__limeColorMatrix",cf,d7,37,34),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void ColorTransform_obj::__register()
{
	ColorTransform_obj _hx_dummy;
	ColorTransform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.ColorTransform",3d,35,6d,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorTransform_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = ColorTransform_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorTransform_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorTransform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorTransform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorTransform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTransform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTransform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorTransform_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::ColorTransform _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_63_boot)
HXDLIN(  63)			return  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::ColorTransform ct){
            			HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_64_boot)
HXLINE(  64)			ct->_hx___identity();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_63_boot)
HXDLIN(  63)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom

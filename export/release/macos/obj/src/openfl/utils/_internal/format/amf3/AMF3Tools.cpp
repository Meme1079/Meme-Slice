// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Array
#include <openfl/utils/_internal/format/amf3/AMF3Array.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools
#include <openfl/utils/_internal/format/amf3/AMF3Tools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#include <openfl/utils/_internal/format/amf3/AMF3Value.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_44_encode,"openfl.utils._internal.format.amf3.AMF3Tools","encode",0xd999f8ad,"openfl.utils._internal.format.amf3.AMF3Tools.encode","openfl/utils/_internal/format/amf3/AMF3Tools.hx",44,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_138_decode,"openfl.utils._internal.format.amf3.AMF3Tools","decode",0x44a363c5,"openfl.utils._internal.format.amf3.AMF3Tools.decode","openfl/utils/_internal/format/amf3/AMF3Tools.hx",138,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_164_undefined,"openfl.utils._internal.format.amf3.AMF3Tools","undefined",0x4e2b3059,"openfl.utils._internal.format.amf3.AMF3Tools.undefined","openfl/utils/_internal/format/amf3/AMF3Tools.hx",164,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_169_anull,"openfl.utils._internal.format.amf3.AMF3Tools","anull",0x174cfcb1,"openfl.utils._internal.format.amf3.AMF3Tools.anull","openfl/utils/_internal/format/amf3/AMF3Tools.hx",169,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_173_bool,"openfl.utils._internal.format.amf3.AMF3Tools","bool",0x1c51e701,"openfl.utils._internal.format.amf3.AMF3Tools.bool","openfl/utils/_internal/format/amf3/AMF3Tools.hx",173,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_183_int,"openfl.utils._internal.format.amf3.AMF3Tools","int",0x115e11f8,"openfl.utils._internal.format.amf3.AMF3Tools.int","openfl/utils/_internal/format/amf3/AMF3Tools.hx",183,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_193_number,"openfl.utils._internal.format.amf3.AMF3Tools","number",0x81308d60,"openfl.utils._internal.format.amf3.AMF3Tools.number","openfl/utils/_internal/format/amf3/AMF3Tools.hx",193,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_203_string,"openfl.utils._internal.format.amf3.AMF3Tools","string",0xf0e62f68,"openfl.utils._internal.format.amf3.AMF3Tools.string","openfl/utils/_internal/format/amf3/AMF3Tools.hx",203,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_213_date,"openfl.utils._internal.format.amf3.AMF3Tools","date",0x1d99b905,"openfl.utils._internal.format.amf3.AMF3Tools.date","openfl/utils/_internal/format/amf3/AMF3Tools.hx",213,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_240_array,"openfl.utils._internal.format.amf3.AMF3Tools","array",0x19ef86e2,"openfl.utils._internal.format.amf3.AMF3Tools.array","openfl/utils/_internal/format/amf3/AMF3Tools.hx",240,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_254_intVector,"openfl.utils._internal.format.amf3.AMF3Tools","intVector",0x6d7e00db,"openfl.utils._internal.format.amf3.AMF3Tools.intVector","openfl/utils/_internal/format/amf3/AMF3Tools.hx",254,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_264_floatVector,"openfl.utils._internal.format.amf3.AMF3Tools","floatVector",0x2f16bd88,"openfl.utils._internal.format.amf3.AMF3Tools.floatVector","openfl/utils/_internal/format/amf3/AMF3Tools.hx",264,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_274_objectVector,"openfl.utils._internal.format.amf3.AMF3Tools","objectVector",0x058f4eb9,"openfl.utils._internal.format.amf3.AMF3Tools.objectVector","openfl/utils/_internal/format/amf3/AMF3Tools.hx",274,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_290_object,"openfl.utils._internal.format.amf3.AMF3Tools","object",0xf4f58556,"openfl.utils._internal.format.amf3.AMF3Tools.object","openfl/utils/_internal/format/amf3/AMF3Tools.hx",290,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_324_external,"openfl.utils._internal.format.amf3.AMF3Tools","external",0xa1b95ca2,"openfl.utils._internal.format.amf3.AMF3Tools.external","openfl/utils/_internal/format/amf3/AMF3Tools.hx",324,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_334_xml,"openfl.utils._internal.format.amf3.AMF3Tools","xml",0x116972e0,"openfl.utils._internal.format.amf3.AMF3Tools.xml","openfl/utils/_internal/format/amf3/AMF3Tools.hx",334,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_344_byteArray,"openfl.utils._internal.format.amf3.AMF3Tools","byteArray",0x6ce5333a,"openfl.utils._internal.format.amf3.AMF3Tools.byteArray","openfl/utils/_internal/format/amf3/AMF3Tools.hx",344,0x2aa5a4ca)
HX_LOCAL_STACK_FRAME(_hx_pos_56aec6e41d1816a2_354_map,"openfl.utils._internal.format.amf3.AMF3Tools","map",0x11610fa5,"openfl.utils._internal.format.amf3.AMF3Tools.map","openfl/utils/_internal/format/amf3/AMF3Tools.hx",354,0x2aa5a4ca)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{

void AMF3Tools_obj::__construct() { }

Dynamic AMF3Tools_obj::__CreateEmpty() { return new AMF3Tools_obj; }

void *AMF3Tools_obj::_hx_vtable = 0;

Dynamic AMF3Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMF3Tools_obj > _hx_result = new AMF3Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AMF3Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x612804d7;
}

 ::openfl::utils::_internal::format::amf3::AMF3Value AMF3Tools_obj::encode( ::Dynamic o){
            	HX_GC_STACKFRAME(&_hx_pos_56aec6e41d1816a2_44_encode)
HXDLIN(  44)		 ::ValueType _g = ::Type_obj::_hx_typeof(o);
HXDLIN(  44)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  46)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  48)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AInt(o);
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANumber(o);
            			}
            			break;
            			case (int)3: {
HXLINE(  47)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ABool(o);
            			}
            			break;
            			case (int)4: {
HXLINE(  51)				 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  52)				{
HXLINE(  52)					int _g1 = 0;
HXDLIN(  52)					::Array< ::String > _g2 = ::Reflect_obj::fields(o);
HXDLIN(  52)					while((_g1 < _g2->length)){
HXLINE(  52)						::String f = _g2->__get(_g1);
HXDLIN(  52)						_g1 = (_g1 + 1);
HXLINE(  54)						h->set(f,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(::Reflect_obj::field(o,f)));
            					}
            				}
HXLINE(  56)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AObject(h,null(),null());
            			}
            			break;
            			case (int)5: {
HXLINE( 131)				return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANull_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE(  57)				::hx::Class c = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  58)				::hx::Class _hx_switch_0 = c;
            				if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  71)					::cpp::VirtualArray o1 = ( (::cpp::VirtualArray)(o) );
HXLINE(  72)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE(  73)					{
HXLINE(  73)						int _g3 = 0;
HXDLIN(  73)						while((_g3 < o1->get_length())){
HXLINE(  73)							 ::Dynamic v = o1->__get(_g3);
HXDLIN(  73)							_g3 = (_g3 + 1);
HXLINE(  74)							a->push(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(v));
            						}
            					}
HXLINE(  75)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AArray(a,null());
HXLINE(  70)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::Date >()) ){
HXLINE(  99)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ADate(o);
HXDLIN(  99)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  61)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AString(o);
HXDLIN(  61)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::Xml >()) ){
HXLINE(  63)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AXml(o);
HXDLIN(  63)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::IntMap >()) ||  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::ObjectMap >()) ||  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  65)					 ::haxe::ds::StringMap o2 = ( ( ::haxe::ds::StringMap)(o) );
HXLINE(  66)					 ::haxe::ds::EnumValueMap h1 =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE(  67)					{
HXLINE(  67)						 ::Dynamic f1 = o2->keys();
HXDLIN(  67)						while(( (bool)(f1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  67)							::String f2 = ( (::String)(f1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  68)							{
HXLINE(  68)								 ::openfl::utils::_internal::format::amf3::AMF3Value key = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(f2);
HXDLIN(  68)								h1->set(key,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(o2->get(f2)));
            							}
            						}
            					}
HXLINE(  69)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AMap(h1);
HXLINE(  64)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::io::Bytes >()) ){
HXLINE(  95)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AByteArray(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(( ( ::haxe::io::Bytes)(o) )));
HXDLIN(  95)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::openfl::utils::ByteArrayData >()) ){
HXLINE(  97)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AByteArray(o);
HXDLIN(  97)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::openfl::utils::_internal::format::amf3::AMF3Array >()) ){
HXLINE(  77)					 ::openfl::utils::_internal::format::amf3::AMF3Array o3 = ( ( ::openfl::utils::_internal::format::amf3::AMF3Array)(o) );
HXLINE(  78)					::Array< ::Dynamic> a1 = ::Array_obj< ::Dynamic>::__new();
HXLINE(  79)					 ::haxe::ds::StringMap m =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  80)					{
HXLINE(  80)						int _g4 = 0;
HXDLIN(  80)						::cpp::VirtualArray _g5 = o3->a;
HXDLIN(  80)						while((_g4 < _g5->get_length())){
HXLINE(  80)							 ::Dynamic v1 = _g5->__get(_g4);
HXDLIN(  80)							_g4 = (_g4 + 1);
HXLINE(  81)							a1->push(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(v1));
            						}
            					}
HXLINE(  82)					{
HXLINE(  82)						 ::Dynamic k = o3->extra->iterator();
HXDLIN(  82)						while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  82)							::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  83)							{
HXLINE(  83)								 ::openfl::utils::_internal::format::amf3::AMF3Value v2 = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::encode(o3->extra->get(k1));
HXDLIN(  83)								m->set(k1,v2);
            							}
            						}
            					}
HXLINE(  84)					return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AArray(a1,m);
HXLINE(  76)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE( 115)					if (::Std_obj::isOfType(o,::hx::ClassOf< ::openfl::utils::IExternalizable >())) {
HXLINE( 117)						return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::AExternal(o);
            					}
            					else {
HXLINE( 128)						return ::openfl::utils::_internal::format::amf3::AMF3Value_obj::ANull_dyn();
            					}
            				}
            				_hx_goto_1:;
            			}
            			break;
            			default:{
HXLINE( 133)				HX_STACK_DO_THROW((HX_("Can't encode ",87,74,15,3f) + ::Std_obj::string(o)));
            			}
            		}
HXLINE(  44)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,encode,return )

 ::Dynamic AMF3Tools_obj::decode( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_138_decode)
HXLINE( 139)		if (::hx::IsNull( a )) {
HXLINE( 139)			return null();
            		}
HXLINE( 141)		switch((int)(a->_hx_getIndex())){
            			case (int)0: {
HXLINE( 143)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::undefined(a);
            			}
            			break;
            			case (int)1: {
HXLINE( 144)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::anull(a);
            			}
            			break;
            			case (int)2: {
HXLINE( 145)				bool _g = a->_hx_getBool(0);
HXDLIN( 145)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::_hx_bool(a);
            			}
            			break;
            			case (int)3: {
HXLINE( 146)				int _g1 = a->_hx_getInt(0);
HXDLIN( 146)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::_hx_int(a);
            			}
            			break;
            			case (int)4: {
HXLINE( 147)				Float _g2 = a->_hx_getFloat(0);
HXDLIN( 147)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::number(a);
            			}
            			break;
            			case (int)5: {
HXLINE( 148)				::String _g3 = a->_hx_getString(0);
HXDLIN( 148)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::string(a);
            			}
            			break;
            			case (int)6: {
HXLINE( 149)				 ::Date _g4 = a->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 149)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::date(a);
            			}
            			break;
            			case (int)7: {
HXLINE( 154)				 ::haxe::ds::StringMap _g5 = a->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 154)				 ::Dynamic _g6 = a->_hx_getObject(1);
HXDLIN( 154)				::String _g7 = a->_hx_getString(2);
HXDLIN( 154)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::object(a);
            			}
            			break;
            			case (int)8: {
HXLINE( 155)				::Dynamic _g8 = a->_hx_getObject(0);
HXDLIN( 155)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::external(a);
            			}
            			break;
            			case (int)9: {
HXLINE( 150)				::Array< ::Dynamic> _g9 = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 150)				 ::haxe::ds::StringMap _g10 = a->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 150)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::array(a);
            			}
            			break;
            			case (int)10: {
HXLINE( 151)				 ::openfl::_Vector::IntVector _g11 = a->_hx_getObject(0).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN( 151)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::intVector(a);
            			}
            			break;
            			case (int)11: {
HXLINE( 152)				 ::openfl::_Vector::FloatVector _g12 = a->_hx_getObject(0).StaticCast<  ::openfl::_Vector::FloatVector >();
HXDLIN( 152)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::floatVector(a);
            			}
            			break;
            			case (int)12: {
HXLINE( 153)				 ::openfl::_Vector::ObjectVector _g13 = a->_hx_getObject(0).StaticCast<  ::openfl::_Vector::ObjectVector >();
HXDLIN( 153)				::String _g14 = a->_hx_getString(1);
HXDLIN( 153)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::objectVector(a);
            			}
            			break;
            			case (int)13: {
HXLINE( 156)				 ::Xml _g15 = a->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 156)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::xml(a);
            			}
            			break;
            			case (int)14: {
HXLINE( 157)				 ::openfl::utils::ByteArrayData _g16 = a->_hx_getObject(0).StaticCast<  ::openfl::utils::ByteArrayData >();
HXDLIN( 157)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::byteArray(a);
            			}
            			break;
            			case (int)15: {
HXLINE( 158)				 ::haxe::ds::EnumValueMap _g17 = a->_hx_getObject(0).StaticCast<  ::haxe::ds::EnumValueMap >();
HXDLIN( 158)				return ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::map(a);
            			}
            			break;
            		}
HXLINE( 141)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,decode,return )

 ::Dynamic AMF3Tools_obj::undefined( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_164_undefined)
HXDLIN( 164)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,undefined,return )

 ::Dynamic AMF3Tools_obj::anull( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_169_anull)
HXDLIN( 169)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,anull,return )

 ::Dynamic AMF3Tools_obj::_hx_bool( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_173_bool)
HXLINE( 174)		if (::hx::IsNull( a )) {
HXLINE( 174)			return null();
            		}
HXLINE( 175)		if ((a->_hx_getIndex() == 2)) {
HXLINE( 177)			bool b = a->_hx_getBool(0);
HXDLIN( 177)			return b;
            		}
            		else {
HXLINE( 178)			return null();
            		}
HXLINE( 175)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,_hx_bool,return )

 ::Dynamic AMF3Tools_obj::_hx_int( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_183_int)
HXLINE( 184)		if (::hx::IsNull( a )) {
HXLINE( 184)			return null();
            		}
HXLINE( 185)		if ((a->_hx_getIndex() == 3)) {
HXLINE( 187)			int n = a->_hx_getInt(0);
HXDLIN( 187)			return n;
            		}
            		else {
HXLINE( 188)			return null();
            		}
HXLINE( 185)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,_hx_int,return )

 ::Dynamic AMF3Tools_obj::number( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_193_number)
HXLINE( 194)		if (::hx::IsNull( a )) {
HXLINE( 194)			return null();
            		}
HXLINE( 195)		if ((a->_hx_getIndex() == 4)) {
HXLINE( 197)			Float n = a->_hx_getFloat(0);
HXDLIN( 197)			return n;
            		}
            		else {
HXLINE( 198)			return null();
            		}
HXLINE( 195)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,number,return )

::String AMF3Tools_obj::string( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_203_string)
HXLINE( 204)		if (::hx::IsNull( a )) {
HXLINE( 204)			return null();
            		}
HXLINE( 205)		if ((a->_hx_getIndex() == 5)) {
HXLINE( 207)			::String s = a->_hx_getString(0);
HXDLIN( 207)			return s;
            		}
            		else {
HXLINE( 208)			return null();
            		}
HXLINE( 205)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,string,return )

 ::Date AMF3Tools_obj::date( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_213_date)
HXLINE( 214)		if (::hx::IsNull( a )) {
HXLINE( 214)			return null();
            		}
HXLINE( 215)		if ((a->_hx_getIndex() == 6)) {
HXLINE( 217)			 ::Date d = a->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 217)			return d;
            		}
            		else {
HXLINE( 218)			return null();
            		}
HXLINE( 215)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,date,return )

::cpp::VirtualArray AMF3Tools_obj::array( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_240_array)
HXLINE( 241)		if (::hx::IsNull( a )) {
HXLINE( 241)			return null();
            		}
HXLINE( 242)		if ((a->_hx_getIndex() == 9)) {
HXLINE( 244)			::Array< ::Dynamic> a1 = a->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 244)			 ::haxe::ds::StringMap m = a->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 245)			::cpp::VirtualArray b = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 246)			{
HXLINE( 246)				int _g = 0;
HXDLIN( 246)				while((_g < a1->length)){
HXLINE( 246)					 ::openfl::utils::_internal::format::amf3::AMF3Value f = a1->__get(_g).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
HXDLIN( 246)					_g = (_g + 1);
HXLINE( 247)					b->push(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(f));
            				}
            			}
HXLINE( 248)			return b;
            		}
            		else {
HXLINE( 249)			return null();
            		}
HXLINE( 242)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,array,return )

 ::openfl::_Vector::IntVector AMF3Tools_obj::intVector( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_254_intVector)
HXLINE( 255)		if (::hx::IsNull( a )) {
HXLINE( 255)			return null();
            		}
HXLINE( 256)		if ((a->_hx_getIndex() == 10)) {
HXLINE( 258)			 ::openfl::_Vector::IntVector v = a->_hx_getObject(0).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN( 258)			return v;
            		}
            		else {
HXLINE( 259)			return null();
            		}
HXLINE( 256)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,intVector,return )

 ::openfl::_Vector::FloatVector AMF3Tools_obj::floatVector( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_264_floatVector)
HXLINE( 265)		if (::hx::IsNull( a )) {
HXLINE( 265)			return null();
            		}
HXLINE( 266)		if ((a->_hx_getIndex() == 11)) {
HXLINE( 268)			 ::openfl::_Vector::FloatVector v = a->_hx_getObject(0).StaticCast<  ::openfl::_Vector::FloatVector >();
HXDLIN( 268)			return v;
            		}
            		else {
HXLINE( 269)			return null();
            		}
HXLINE( 266)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,floatVector,return )

 ::openfl::_Vector::ObjectVector AMF3Tools_obj::objectVector( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_GC_STACKFRAME(&_hx_pos_56aec6e41d1816a2_274_objectVector)
HXLINE( 275)		if (::hx::IsNull( a )) {
HXLINE( 275)			return null();
            		}
HXLINE( 276)		if ((a->_hx_getIndex() == 12)) {
HXLINE( 278)			 ::openfl::_Vector::ObjectVector v = a->_hx_getObject(0).StaticCast<  ::openfl::_Vector::ObjectVector >();
HXDLIN( 278)			::String type = a->_hx_getString(1);
HXLINE( 279)			int length = ::openfl::_Vector::IVector_obj::get_length(v);
HXDLIN( 279)			::Array< ::Dynamic> array = null();
HXDLIN( 279)			 ::openfl::_Vector::ObjectVector ret =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,v->fixed,array,true);
HXLINE( 280)			{
HXLINE( 280)				int _g = 0;
HXDLIN( 280)				int _g1 = v->get_length();
HXDLIN( 280)				while((_g < _g1)){
HXLINE( 280)					_g = (_g + 1);
HXDLIN( 280)					int i = (_g - 1);
HXLINE( 282)					ret->set(i,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(v->get(i).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >()));
            				}
            			}
HXLINE( 284)			return ret;
            		}
            		else {
HXLINE( 285)			return null();
            		}
HXLINE( 276)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,objectVector,return )

 ::Dynamic AMF3Tools_obj::object( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_290_object)
HXLINE( 291)		if (::hx::IsNull( a )) {
HXLINE( 291)			return null();
            		}
HXLINE( 292)		if ((a->_hx_getIndex() == 7)) {
HXLINE( 294)			 ::Dynamic _g = a->_hx_getObject(1);
HXDLIN( 294)			 ::haxe::ds::StringMap f = a->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 294)			::String className = a->_hx_getString(2);
HXLINE( 295)			 ::Dynamic o = null();
HXLINE( 296)			bool _hx_tmp;
HXDLIN( 296)			if (::hx::IsNotNull( className )) {
HXLINE( 296)				_hx_tmp = (className != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 296)				_hx_tmp = false;
            			}
HXDLIN( 296)			if (_hx_tmp) {
HXLINE( 298)				::hx::Class cls = ::openfl::Lib_obj::getClassByAlias(className);
HXLINE( 299)				if (::hx::IsNull( cls )) {
HXLINE( 299)					cls = ::Type_obj::resolveClass(className);
            				}
HXLINE( 301)				if (::hx::IsNotNull( cls )) {
HXLINE( 303)					o = ::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0));
            				}
            			}
            			else {
HXLINE( 308)				o =  ::Dynamic(::hx::Anon_obj::Create(0));
            			}
HXLINE( 311)			bool _hx_tmp1;
HXDLIN( 311)			if (::hx::IsNotNull( o )) {
HXLINE( 311)				_hx_tmp1 = ::hx::IsNotNull( f );
            			}
            			else {
HXLINE( 311)				_hx_tmp1 = false;
            			}
HXDLIN( 311)			if (_hx_tmp1) {
HXLINE( 313)				 ::Dynamic name = f->keys();
HXDLIN( 313)				while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 313)					::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 315)					::Reflect_obj::setProperty(o,name1,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(f->get(name1)));
            				}
            			}
HXLINE( 318)			return o;
            		}
            		else {
HXLINE( 319)			return null();
            		}
HXLINE( 292)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,object,return )

::Dynamic AMF3Tools_obj::external( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_324_external)
HXLINE( 325)		if (::hx::IsNull( a )) {
HXLINE( 325)			return null();
            		}
HXLINE( 326)		if ((a->_hx_getIndex() == 8)) {
HXLINE( 328)			::Dynamic e = a->_hx_getObject(0);
HXDLIN( 328)			return e;
            		}
            		else {
HXLINE( 329)			return null();
            		}
HXLINE( 326)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,external,return )

 ::Xml AMF3Tools_obj::xml( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_334_xml)
HXLINE( 335)		if (::hx::IsNull( a )) {
HXLINE( 335)			return null();
            		}
HXLINE( 336)		if ((a->_hx_getIndex() == 13)) {
HXLINE( 338)			 ::Xml x = a->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 338)			return x;
            		}
            		else {
HXLINE( 339)			return null();
            		}
HXLINE( 336)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,xml,return )

 ::openfl::utils::ByteArrayData AMF3Tools_obj::byteArray( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_STACKFRAME(&_hx_pos_56aec6e41d1816a2_344_byteArray)
HXLINE( 345)		if (::hx::IsNull( a )) {
HXLINE( 345)			return null();
            		}
HXLINE( 346)		if ((a->_hx_getIndex() == 14)) {
HXLINE( 348)			 ::openfl::utils::ByteArrayData b = a->_hx_getObject(0).StaticCast<  ::openfl::utils::ByteArrayData >();
HXDLIN( 348)			return b;
            		}
            		else {
HXLINE( 349)			return null();
            		}
HXLINE( 346)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,byteArray,return )

 ::haxe::ds::ObjectMap AMF3Tools_obj::map( ::openfl::utils::_internal::format::amf3::AMF3Value a){
            	HX_GC_STACKFRAME(&_hx_pos_56aec6e41d1816a2_354_map)
HXLINE( 356)		if (::hx::IsNull( a )) {
HXLINE( 356)			return null();
            		}
HXLINE( 357)		if ((a->_hx_getIndex() == 15)) {
HXLINE( 359)			 ::haxe::ds::EnumValueMap m = a->_hx_getObject(0).StaticCast<  ::haxe::ds::EnumValueMap >();
HXLINE( 360)			{
HXLINE( 360)				 ::Dynamic f = m->keys();
HXDLIN( 360)				while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 360)					 ::openfl::utils::_internal::format::amf3::AMF3Value f1 = f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 362)					if (::Std_obj::isOfType(f1,::hx::ClassOf< int >())) {
HXLINE( 364)						 ::haxe::ds::IntMap p =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 365)						{
HXLINE( 365)							 ::Dynamic f2 = m->keys();
HXDLIN( 365)							while(( (bool)(f2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 365)								 ::openfl::utils::_internal::format::amf3::AMF3Value f3 = f2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 366)								{
HXLINE( 366)									int key = ( (int)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(f3)) );
HXDLIN( 366)									p->set(key,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(m->get(f3).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >()));
            								}
            							}
            						}
            					}
            					else {
HXLINE( 369)						if (::Std_obj::isOfType(f1,::hx::ClassOf< ::String >())) {
HXLINE( 371)							 ::haxe::ds::StringMap p1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 372)							{
HXLINE( 372)								 ::Dynamic f4 = m->keys();
HXDLIN( 372)								while(( (bool)(f4->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 372)									 ::openfl::utils::_internal::format::amf3::AMF3Value f5 = f4->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 373)									{
HXLINE( 373)										::String key1 = ( (::String)(::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(f5)) );
HXDLIN( 373)										p1->set(key1,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(m->get(f5).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >()));
            									}
            								}
            							}
            						}
            						else {
HXLINE( 378)							 ::haxe::ds::ObjectMap p2 =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 379)							{
HXLINE( 379)								 ::Dynamic f6 = m->keys();
HXDLIN( 379)								while(( (bool)(f6->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 379)									 ::openfl::utils::_internal::format::amf3::AMF3Value f7 = f6->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 380)									{
HXLINE( 380)										 ::Dynamic key2 = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(f7);
HXDLIN( 380)										p2->set(key2,::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(m->get(f7).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >()));
            									}
            								}
            							}
            						}
            					}
HXLINE( 383)					goto _hx_goto_26;
            				}
            				_hx_goto_26:;
            			}
HXLINE( 385)			return  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 386)			return null();
            		}
HXLINE( 357)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AMF3Tools_obj,map,return )


AMF3Tools_obj::AMF3Tools_obj()
{
}

bool AMF3Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"date") ) { outValue = date_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"anull") ) { outValue = anull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"number") ) { outValue = number_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"object") ) { outValue = object_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { outValue = external_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"undefined") ) { outValue = undefined_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"intVector") ) { outValue = intVector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"byteArray") ) { outValue = byteArray_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatVector") ) { outValue = floatVector_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectVector") ) { outValue = objectVector_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AMF3Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AMF3Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AMF3Tools_obj::__mClass;

static ::String AMF3Tools_obj_sStaticFields[] = {
	HX_("encode",16,f2,e3,f9),
	HX_("decode",2e,5d,ed,64),
	HX_("undefined",90,3e,0a,9d),
	HX_("anull",68,e3,ec,22),
	HX_("bool",2a,84,1b,41),
	HX_("int",ef,0c,50,00),
	HX_("number",c9,86,7a,a1),
	HX_("string",d1,28,30,11),
	HX_("date",2e,56,63,42),
	HX_("array",99,6d,8f,25),
	HX_("intVector",12,0f,5d,bc),
	HX_("floatVector",7f,07,7f,3e),
	HX_("objectVector",e2,bc,67,71),
	HX_("object",bf,7e,3f,15),
	HX_("external",4b,42,83,e3),
	HX_("xml",d7,6d,5b,00),
	HX_("byteArray",71,41,c4,bb),
	HX_("map",9c,0a,53,00),
	::String(null())
};

void AMF3Tools_obj::__register()
{
	AMF3Tools_obj _hx_dummy;
	AMF3Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf3.AMF3Tools",f7,ec,c6,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AMF3Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AMF3Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AMF3Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMF3Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMF3Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_164_flatten2DArray_Int,"flixel.util.FlxArrayUtil","flatten2DArray_Int",0x9867551e,"flixel.util.FlxArrayUtil.flatten2DArray_Int","flixel/util/FlxArrayUtil.hx",164,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_34_fastSplice_flixel_tweens_FlxTween,"flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",34,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_34_fastSplice_flixel_util_FlxTimer,"flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",34,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_66_swapAndPop_fastSplice_T,"flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",66,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_16_setLength,"flixel.util.FlxArrayUtil","setLength",0xbce5fadd,"flixel.util.FlxArrayUtil.setLength","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_80_swapByIndex,"flixel.util.FlxArrayUtil","swapByIndex",0x9368375d,"flixel.util.FlxArrayUtil.swapByIndex","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_95_safeSwapByIndex,"flixel.util.FlxArrayUtil","safeSwapByIndex",0xc5e40990,"flixel.util.FlxArrayUtil.safeSwapByIndex","flixel/util/FlxArrayUtil.hx",95,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_112_swap,"flixel.util.FlxArrayUtil","swap",0x5d96f5fe,"flixel.util.FlxArrayUtil.swap","flixel/util/FlxArrayUtil.hx",112,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_124_safeSwap,"flixel.util.FlxArrayUtil","safeSwap",0x9b3c5b6b,"flixel.util.FlxArrayUtil.safeSwap","flixel/util/FlxArrayUtil.hx",124,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_136_clearArray,"flixel.util.FlxArrayUtil","clearArray",0xac755a77,"flixel.util.FlxArrayUtil.clearArray","flixel/util/FlxArrayUtil.hx",136,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_177_equals,"flixel.util.FlxArrayUtil","equals",0x2985aa6a,"flixel.util.FlxArrayUtil.equals","flixel/util/FlxArrayUtil.hx",177,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_198_last,"flixel.util.FlxArrayUtil","last",0x58e5d5c1,"flixel.util.FlxArrayUtil.last","flixel/util/FlxArrayUtil.hx",198,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_209_safePush,"flixel.util.FlxArrayUtil","safePush",0x993f42b2,"flixel.util.FlxArrayUtil.safePush","flixel/util/FlxArrayUtil.hx",209,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_219_contains,"flixel.util.FlxArrayUtil","contains",0x2d55b70a,"flixel.util.FlxArrayUtil.contains","flixel/util/FlxArrayUtil.hx",219,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_228_safeContains,"flixel.util.FlxArrayUtil","safeContains",0xdcbed6f7,"flixel.util.FlxArrayUtil.safeContains","flixel/util/FlxArrayUtil.hx",228,0xa0dc755b)
namespace flixel{
namespace util{

void FlxArrayUtil_obj::__construct() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return new FlxArrayUtil_obj; }

void *FlxArrayUtil_obj::_hx_vtable = 0;

Dynamic FlxArrayUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxArrayUtil_obj > _hx_result = new FlxArrayUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxArrayUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x246e206f;
}

::Array< int > FlxArrayUtil_obj::flatten2DArray_Int(::Array< ::Dynamic> array){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_164_flatten2DArray_Int)
HXLINE( 165)		::Array< int > result = ::Array_obj< int >::__new(0);
HXLINE( 166)		{
HXLINE( 166)			int _g = 0;
HXDLIN( 166)			while((_g < array->length)){
HXLINE( 166)				::Array< int > innerArray = array->__get(_g).StaticCast< ::Array< int > >();
HXDLIN( 166)				_g = (_g + 1);
HXLINE( 167)				{
HXLINE( 167)					int _g1 = 0;
HXDLIN( 167)					while((_g1 < innerArray->length)){
HXLINE( 167)						int element = innerArray->__get(_g1);
HXDLIN( 167)						_g1 = (_g1 + 1);
HXLINE( 168)						result->push(element);
            					}
            				}
            			}
            		}
HXLINE( 169)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,flatten2DArray_Int,return )

::Array< ::Dynamic> FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween(::Array< ::Dynamic> array, ::flixel::tweens::FlxTween element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_34_fastSplice_flixel_tweens_FlxTween)
HXLINE(  35)		int index = array->indexOf(element,null());
HXLINE(  36)		if ((index != -1)) {
HXLINE(  37)			array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(  37)			array->pop().StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(  37)			return array;
            		}
HXLINE(  38)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

::Array< ::Dynamic> FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer(::Array< ::Dynamic> array, ::flixel::util::FlxTimer element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_34_fastSplice_flixel_util_FlxTimer)
HXLINE(  35)		int index = array->indexOf(element,null());
HXLINE(  36)		if ((index != -1)) {
HXLINE(  37)			array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN(  37)			array->pop().StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN(  37)			return array;
            		}
HXLINE(  38)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

::cpp::VirtualArray FlxArrayUtil_obj::swapAndPop_fastSplice_T(::cpp::VirtualArray array,int index){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_66_swapAndPop_fastSplice_T)
HXLINE(  67)		array->set(index,array->__get((array->get_length() - 1)));
HXLINE(  68)		array->pop();
HXLINE(  69)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

::cpp::VirtualArray FlxArrayUtil_obj::setLength(::cpp::VirtualArray array,int newLength){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_16_setLength)
HXLINE(  17)		bool _hx_tmp;
HXDLIN(  17)		if ((newLength > 0)) {
HXLINE(  17)			_hx_tmp = (newLength < array->get_length());
            		}
            		else {
HXLINE(  17)			_hx_tmp = false;
            		}
HXDLIN(  17)		if (_hx_tmp) {
HXLINE(  18)			array->resize(newLength);
            		}
HXLINE(  20)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength,return )

::cpp::VirtualArray FlxArrayUtil_obj::swapByIndex(::cpp::VirtualArray array,int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_80_swapByIndex)
HXLINE(  81)		 ::Dynamic temp = array->__get(index1);
HXLINE(  82)		array->set(index1,array->__get(index2));
HXLINE(  83)		array->set(index2,temp);
HXLINE(  84)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,swapByIndex,return )

::cpp::VirtualArray FlxArrayUtil_obj::safeSwapByIndex(::cpp::VirtualArray array,int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_95_safeSwapByIndex)
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		bool _hx_tmp1;
HXDLIN(  96)		bool _hx_tmp2;
HXDLIN(  96)		if ((index1 >= 0)) {
HXLINE(  96)			_hx_tmp2 = (index1 < array->get_length());
            		}
            		else {
HXLINE(  96)			_hx_tmp2 = false;
            		}
HXDLIN(  96)		if (_hx_tmp2) {
HXLINE(  96)			_hx_tmp1 = (index2 >= 0);
            		}
            		else {
HXLINE(  96)			_hx_tmp1 = false;
            		}
HXDLIN(  96)		if (_hx_tmp1) {
HXLINE(  96)			_hx_tmp = (index2 < array->get_length());
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  98)			 ::Dynamic temp = array->__get(index1);
HXDLIN(  98)			array->set(index1,array->__get(index2));
HXDLIN(  98)			array->set(index2,temp);
            		}
HXLINE( 100)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,safeSwapByIndex,return )

::cpp::VirtualArray FlxArrayUtil_obj::swap(::cpp::VirtualArray array, ::Dynamic item1, ::Dynamic item2){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_112_swap)
HXDLIN( 112)		int index1 = array->indexOf(item1,null());
HXDLIN( 112)		int index2 = array->indexOf(item2,null());
HXDLIN( 112)		 ::Dynamic temp = array->__get(index1);
HXDLIN( 112)		array->set(index1,array->__get(index2));
HXDLIN( 112)		array->set(index2,temp);
HXDLIN( 112)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,swap,return )

::cpp::VirtualArray FlxArrayUtil_obj::safeSwap(::cpp::VirtualArray array, ::Dynamic item1, ::Dynamic item2){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_124_safeSwap)
HXDLIN( 124)		int index1 = array->indexOf(item1,null());
HXDLIN( 124)		int index2 = array->indexOf(item2,null());
HXDLIN( 124)		bool _hx_tmp;
HXDLIN( 124)		bool _hx_tmp1;
HXDLIN( 124)		bool _hx_tmp2;
HXDLIN( 124)		if ((index1 >= 0)) {
HXDLIN( 124)			_hx_tmp2 = (index1 < array->get_length());
            		}
            		else {
HXDLIN( 124)			_hx_tmp2 = false;
            		}
HXDLIN( 124)		if (_hx_tmp2) {
HXDLIN( 124)			_hx_tmp1 = (index2 >= 0);
            		}
            		else {
HXDLIN( 124)			_hx_tmp1 = false;
            		}
HXDLIN( 124)		if (_hx_tmp1) {
HXDLIN( 124)			_hx_tmp = (index2 < array->get_length());
            		}
            		else {
HXDLIN( 124)			_hx_tmp = false;
            		}
HXDLIN( 124)		if (_hx_tmp) {
HXDLIN( 124)			 ::Dynamic temp = array->__get(index1);
HXDLIN( 124)			array->set(index1,array->__get(index2));
HXDLIN( 124)			array->set(index2,temp);
            		}
HXDLIN( 124)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,safeSwap,return )

::cpp::VirtualArray FlxArrayUtil_obj::clearArray(::cpp::VirtualArray array,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_136_clearArray)
HXLINE( 137)		if (::hx::IsNull( array )) {
HXLINE( 138)			return array;
            		}
HXLINE( 140)		if (recursive) {
HXLINE( 142)			while((array->get_length() > 0)){
HXLINE( 144)				 ::Dynamic thing = array->pop();
HXLINE( 145)				if (::Std_obj::isOfType(thing,::hx::ArrayBase::__mClass)) {
HXLINE( 146)					::flixel::util::FlxArrayUtil_obj::clearArray(array,recursive);
            				}
            			}
            		}
            		else {
HXLINE( 151)			while((array->get_length() > 0)){
HXLINE( 152)				array->pop();
            			}
            		}
HXLINE( 155)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray,return )

bool FlxArrayUtil_obj::equals(::cpp::VirtualArray array1,::cpp::VirtualArray array2){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_177_equals)
HXLINE( 178)		bool _hx_tmp;
HXDLIN( 178)		if (::hx::IsNull( array1 )) {
HXLINE( 178)			_hx_tmp = ::hx::IsNull( array2 );
            		}
            		else {
HXLINE( 178)			_hx_tmp = false;
            		}
HXDLIN( 178)		if (_hx_tmp) {
HXLINE( 179)			return true;
            		}
HXLINE( 180)		bool _hx_tmp1;
HXDLIN( 180)		if (::hx::IsNull( array1 )) {
HXLINE( 180)			_hx_tmp1 = ::hx::IsNotNull( array2 );
            		}
            		else {
HXLINE( 180)			_hx_tmp1 = false;
            		}
HXDLIN( 180)		if (_hx_tmp1) {
HXLINE( 181)			return false;
            		}
HXLINE( 182)		bool _hx_tmp2;
HXDLIN( 182)		if (::hx::IsNotNull( array1 )) {
HXLINE( 182)			_hx_tmp2 = ::hx::IsNull( array2 );
            		}
            		else {
HXLINE( 182)			_hx_tmp2 = false;
            		}
HXDLIN( 182)		if (_hx_tmp2) {
HXLINE( 183)			return false;
            		}
HXLINE( 184)		if ((array1->get_length() != array2->get_length())) {
HXLINE( 185)			return false;
            		}
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			int _g1 = array1->get_length();
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 188)				if (::hx::IsNotEq( array1->__get(i),array2->__get(i) )) {
HXLINE( 189)					return false;
            				}
            			}
            		}
HXLINE( 191)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,equals,return )

 ::Dynamic FlxArrayUtil_obj::last(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_198_last)
HXLINE( 199)		bool _hx_tmp;
HXDLIN( 199)		if (::hx::IsNotNull( array )) {
HXLINE( 199)			_hx_tmp = (array->get_length() == 0);
            		}
            		else {
HXLINE( 199)			_hx_tmp = true;
            		}
HXDLIN( 199)		if (_hx_tmp) {
HXLINE( 200)			return null();
            		}
HXLINE( 201)		return array->__get((array->get_length() - 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,last,return )

::cpp::VirtualArray FlxArrayUtil_obj::safePush(::cpp::VirtualArray array, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_209_safePush)
HXLINE( 210)		if (::hx::IsNull( array )) {
HXLINE( 211)			array = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 213)		array->push(element);
HXLINE( 214)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,safePush,return )

bool FlxArrayUtil_obj::contains(::cpp::VirtualArray array, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_219_contains)
HXDLIN( 219)		return (array->indexOf(element,null()) != -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,contains,return )

bool FlxArrayUtil_obj::safeContains(::cpp::VirtualArray array, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_228_safeContains)
HXDLIN( 228)		if (::hx::IsNotNull( array )) {
HXDLIN( 228)			return (array->indexOf(element,null()) != -1);
            		}
            		else {
HXDLIN( 228)			return false;
            		}
HXDLIN( 228)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,safeContains,return )


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

bool FlxArrayUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"safeSwap") ) { outValue = safeSwap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"safePush") ) { outValue = safePush_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setLength") ) { outValue = setLength_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearArray") ) { outValue = clearArray_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapByIndex") ) { outValue = swapByIndex_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"safeContains") ) { outValue = safeContains_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"safeSwapByIndex") ) { outValue = safeSwapByIndex_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"flatten2DArray_Int") ) { outValue = flatten2DArray_Int_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { outValue = swapAndPop_fastSplice_T_dyn(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { outValue = fastSplice_flixel_util_FlxTimer_dyn(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { outValue = fastSplice_flixel_tweens_FlxTween_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxArrayUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxArrayUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxArrayUtil_obj::__mClass;

static ::String FlxArrayUtil_obj_sStaticFields[] = {
	HX_("flatten2DArray_Int",73,84,55,08),
	HX_("fastSplice_flixel_tweens_FlxTween",b4,8d,a9,b9),
	HX_("fastSplice_flixel_util_FlxTimer",74,8a,94,6f),
	HX_("swapAndPop_fastSplice_T",1f,43,97,d1),
	HX_("setLength",28,0a,af,fe),
	HX_("swapByIndex",68,ef,0b,a5),
	HX_("safeSwapByIndex",1b,23,2c,f5),
	HX_("swap",93,2a,5e,4c),
	HX_("safeSwap",80,fe,61,9a),
	HX_("clearArray",cc,ac,99,fa),
	HX_("equals",3f,ee,f2,bf),
	HX_("last",56,0a,ad,47),
	HX_("safePush",c7,e5,64,98),
	HX_("contains",1f,5a,7b,2c),
	HX_("safeContains",8c,28,5c,3a),
	::String(null())
};

void FlxArrayUtil_obj::__register()
{
	FlxArrayUtil_obj _hx_dummy;
	FlxArrayUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxArrayUtil",e3,4c,85,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxArrayUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxArrayUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxArrayUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxArrayUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxArrayUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util

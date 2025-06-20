// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_45_array,"Lambda","array",0x9c8b0512,"Lambda.array","/usr/local/lib/haxe/std/Lambda.hx",45,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_125_exists,"Lambda","exists",0x65091043,"Lambda.exists","/usr/local/lib/haxe/std/Lambda.hx",125,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_183_fold,"Lambda","fold",0x9b8816a8,"Lambda.fold","/usr/local/lib/haxe/std/Lambda.hx",183,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_194_foldi,"Lambda","foldi",0x7b8bbcc1,"Lambda.foldi","/usr/local/lib/haxe/std/Lambda.hx",194,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_209_count,"Lambda","count",0xc15edc48,"Lambda.count","/usr/local/lib/haxe/std/Lambda.hx",209,0xf61dfe9a)

void Lambda_obj::__construct() { }

Dynamic Lambda_obj::__CreateEmpty() { return new Lambda_obj; }

void *Lambda_obj::_hx_vtable = 0;

Dynamic Lambda_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lambda_obj > _hx_result = new Lambda_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lambda_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cec6e4b;
}

::cpp::VirtualArray Lambda_obj::array( ::Dynamic it){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_45_array)
HXLINE(  46)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE(  47)		{
HXLINE(  47)			 ::Dynamic i = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  47)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  47)				 ::Dynamic i1 = i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  48)				a->push(i1);
            			}
            		}
HXLINE(  49)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

bool Lambda_obj::exists( ::Dynamic it, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_125_exists)
HXLINE( 126)		{
HXLINE( 126)			 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 126)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 126)				 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 127)				if (( (bool)(f(x1)) )) {
HXLINE( 128)					return true;
            				}
            			}
            		}
HXLINE( 129)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,exists,return )

 ::Dynamic Lambda_obj::fold( ::Dynamic it, ::Dynamic f, ::Dynamic first){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_183_fold)
HXLINE( 184)		{
HXLINE( 184)			 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 184)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 184)				 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 185)				first = f(x1,first);
            			}
            		}
HXLINE( 186)		return first;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lambda_obj,fold,return )

 ::Dynamic Lambda_obj::foldi( ::Dynamic it, ::Dynamic f, ::Dynamic first){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_194_foldi)
HXLINE( 195)		int i = 0;
HXLINE( 196)		{
HXLINE( 196)			 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 196)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 196)				 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 197)				first = f(x1,first,i);
HXLINE( 198)				i = (i + 1);
            			}
            		}
HXLINE( 200)		return first;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lambda_obj,foldi,return )

int Lambda_obj::count( ::Dynamic it, ::Dynamic pred){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_209_count)
HXLINE( 210)		int n = 0;
HXLINE( 211)		if (::hx::IsNull( pred )) {
HXLINE( 212)			 ::Dynamic _ = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 212)			while(( (bool)(_->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 212)				 ::Dynamic _1 = _->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 213)				n = (n + 1);
            			}
            		}
            		else {
HXLINE( 215)			 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 215)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 215)				 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 216)				if (( (bool)(pred(x1)) )) {
HXLINE( 217)					n = (n + 1);
            				}
            			}
            		}
HXLINE( 218)		return n;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,count,return )


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fold") ) { outValue = fold_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"foldi") ) { outValue = foldi_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lambda_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Lambda_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Lambda_obj::__mClass;

static ::String Lambda_obj_sStaticFields[] = {
	HX_("array",99,6d,8f,25),
	HX_("exists",dc,1d,e0,bf),
	HX_("fold",01,5c,c0,43),
	HX_("foldi",48,25,90,04),
	HX_("count",cf,44,63,4a),
	::String(null())
};

void Lambda_obj::__register()
{
	Lambda_obj _hx_dummy;
	Lambda_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Lambda",27,a7,54,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lambda_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lambda_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lambda_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lambda_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


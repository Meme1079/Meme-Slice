// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__JointStyle_JointStyle_Impl_
#include <openfl/display/_JointStyle/JointStyle_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_36_fromInt,"openfl.display._JointStyle.JointStyle_Impl_","fromInt",0x77a6f7b0,"openfl.display._JointStyle.JointStyle_Impl_.fromInt","openfl/display/JointStyle.hx",36,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_41_fromString,"openfl.display._JointStyle.JointStyle_Impl_","fromString",0x7f19acb0,"openfl.display._JointStyle.JointStyle_Impl_.fromString","openfl/display/JointStyle.hx",41,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_52_toInt,"openfl.display._JointStyle.JointStyle_Impl_","toInt",0x6fa6af7f,"openfl.display._JointStyle.JointStyle_Impl_.toInt","openfl/display/JointStyle.hx",52,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_57_toString,"openfl.display._JointStyle.JointStyle_Impl_","toString",0xcf598041,"openfl.display._JointStyle.JointStyle_Impl_.toString","openfl/display/JointStyle.hx",57,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_20_boot,"openfl.display._JointStyle.JointStyle_Impl_","boot",0x74078547,"openfl.display._JointStyle.JointStyle_Impl_.boot","openfl/display/JointStyle.hx",20,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_26_boot,"openfl.display._JointStyle.JointStyle_Impl_","boot",0x74078547,"openfl.display._JointStyle.JointStyle_Impl_.boot","openfl/display/JointStyle.hx",26,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_32_boot,"openfl.display._JointStyle.JointStyle_Impl_","boot",0x74078547,"openfl.display._JointStyle.JointStyle_Impl_.boot","openfl/display/JointStyle.hx",32,0xc58a30ab)
namespace openfl{
namespace display{
namespace _JointStyle{

void JointStyle_Impl__obj::__construct() { }

Dynamic JointStyle_Impl__obj::__CreateEmpty() { return new JointStyle_Impl__obj; }

void *JointStyle_Impl__obj::_hx_vtable = 0;

Dynamic JointStyle_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JointStyle_Impl__obj > _hx_result = new JointStyle_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JointStyle_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09139edb;
}

 ::Dynamic JointStyle_Impl__obj::BEVEL;

 ::Dynamic JointStyle_Impl__obj::MITER;

 ::Dynamic JointStyle_Impl__obj::ROUND;

 ::Dynamic JointStyle_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_36_fromInt)
HXDLIN(  36)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,fromInt,return )

 ::Dynamic JointStyle_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_41_fromString)
HXDLIN(  41)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bevel",7a,48,61,b0)) ){
HXLINE(  43)			return 0;
HXDLIN(  43)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("miter",05,00,6d,08)) ){
HXLINE(  44)			return 1;
HXDLIN(  44)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("round",4e,f8,65,ed)) ){
HXLINE(  45)			return 2;
HXDLIN(  45)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  46)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,fromString,return )

 ::Dynamic JointStyle_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_52_toInt)
HXDLIN(  52)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,toInt,return )

::String JointStyle_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_57_toString)
HXDLIN(  57)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  59)			return HX_("bevel",7a,48,61,b0);
HXDLIN(  59)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  60)			return HX_("miter",05,00,6d,08);
HXDLIN(  60)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  61)			return HX_("round",4e,f8,65,ed);
HXDLIN(  61)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  62)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  57)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,toString,return )


JointStyle_Impl__obj::JointStyle_Impl__obj()
{
}

bool JointStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JointStyle_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo JointStyle_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &JointStyle_Impl__obj::BEVEL,HX_("BEVEL",5a,80,4f,2e)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &JointStyle_Impl__obj::MITER,HX_("MITER",e5,37,5b,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &JointStyle_Impl__obj::ROUND,HX_("ROUND",2e,30,54,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void JointStyle_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::BEVEL,"BEVEL");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::ROUND,"ROUND");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JointStyle_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::BEVEL,"BEVEL");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::MITER,"MITER");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::ROUND,"ROUND");
};

#endif

::hx::Class JointStyle_Impl__obj::__mClass;

static ::String JointStyle_Impl__obj_sStaticFields[] = {
	HX_("BEVEL",5a,80,4f,2e),
	HX_("MITER",e5,37,5b,86),
	HX_("ROUND",2e,30,54,6b),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void JointStyle_Impl__obj::__register()
{
	JointStyle_Impl__obj _hx_dummy;
	JointStyle_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._JointStyle.JointStyle_Impl_",79,f7,31,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JointStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JointStyle_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JointStyle_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JointStyle_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JointStyle_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JointStyle_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JointStyle_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JointStyle_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_20_boot)
HXDLIN(  20)		BEVEL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_26_boot)
HXDLIN(  26)		MITER = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_32_boot)
HXDLIN(  32)		ROUND = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _JointStyle

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_
#include <openfl/display/_LineScaleMode/LineScaleMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_49_fromInt,"openfl.display._LineScaleMode.LineScaleMode_Impl_","fromInt",0x4a6a68e6,"openfl.display._LineScaleMode.LineScaleMode_Impl_.fromInt","openfl/display/LineScaleMode.hx",49,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_54_fromString,"openfl.display._LineScaleMode.LineScaleMode_Impl_","fromString",0x5d04613a,"openfl.display._LineScaleMode.LineScaleMode_Impl_.fromString","openfl/display/LineScaleMode.hx",54,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_66_toInt,"openfl.display._LineScaleMode.LineScaleMode_Impl_","toInt",0x2c0c4735,"openfl.display._LineScaleMode.LineScaleMode_Impl_.toInt","openfl/display/LineScaleMode.hx",66,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_71_toString,"openfl.display._LineScaleMode.LineScaleMode_Impl_","toString",0x67991e4b,"openfl.display._LineScaleMode.LineScaleMode_Impl_.toString","openfl/display/LineScaleMode.hx",71,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_21_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",21,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_27_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",27,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_34_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",34,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_45_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",45,0x274c8551)
namespace openfl{
namespace display{
namespace _LineScaleMode{

void LineScaleMode_Impl__obj::__construct() { }

Dynamic LineScaleMode_Impl__obj::__CreateEmpty() { return new LineScaleMode_Impl__obj; }

void *LineScaleMode_Impl__obj::_hx_vtable = 0;

Dynamic LineScaleMode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineScaleMode_Impl__obj > _hx_result = new LineScaleMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineScaleMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e37a0ed;
}

 ::Dynamic LineScaleMode_Impl__obj::HORIZONTAL;

 ::Dynamic LineScaleMode_Impl__obj::NONE;

 ::Dynamic LineScaleMode_Impl__obj::NORMAL;

 ::Dynamic LineScaleMode_Impl__obj::VERTICAL;

 ::Dynamic LineScaleMode_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_49_fromInt)
HXDLIN(  49)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,fromInt,return )

 ::Dynamic LineScaleMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_54_fromString)
HXDLIN(  54)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("horizontal",e4,fc,c3,15)) ){
HXLINE(  56)			return 0;
HXDLIN(  56)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  57)			return 1;
HXDLIN(  57)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  58)			return 2;
HXDLIN(  58)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("vertical",76,bc,15,6a)) ){
HXLINE(  59)			return 3;
HXDLIN(  59)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  60)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,fromString,return )

 ::Dynamic LineScaleMode_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_66_toInt)
HXDLIN(  66)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,toInt,return )

::String LineScaleMode_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_71_toString)
HXDLIN(  71)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  73)			return HX_("horizontal",e4,fc,c3,15);
HXDLIN(  73)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  74)			return HX_("none",b8,12,0a,49);
HXDLIN(  74)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  75)			return HX_("normal",27,72,69,30);
HXDLIN(  75)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  76)			return HX_("vertical",76,bc,15,6a);
HXDLIN(  76)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  77)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  71)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,toString,return )


LineScaleMode_Impl__obj::LineScaleMode_Impl__obj()
{
}

bool LineScaleMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *LineScaleMode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LineScaleMode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &LineScaleMode_Impl__obj::HORIZONTAL,HX_("HORIZONTAL",e4,70,cd,07)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &LineScaleMode_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &LineScaleMode_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &LineScaleMode_Impl__obj::VERTICAL,HX_("VERTICAL",76,4c,9b,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LineScaleMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineScaleMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::VERTICAL,"VERTICAL");
};

#endif

::hx::Class LineScaleMode_Impl__obj::__mClass;

static ::String LineScaleMode_Impl__obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("NONE",b8,da,ca,33),
	HX_("NORMAL",27,1e,ec,e2),
	HX_("VERTICAL",76,4c,9b,c3),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void LineScaleMode_Impl__obj::__register()
{
	LineScaleMode_Impl__obj _hx_dummy;
	LineScaleMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._LineScaleMode.LineScaleMode_Impl_",af,42,46,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineScaleMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineScaleMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LineScaleMode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LineScaleMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineScaleMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineScaleMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineScaleMode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LineScaleMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_21_boot)
HXDLIN(  21)		HORIZONTAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_27_boot)
HXDLIN(  27)		NONE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_34_boot)
HXDLIN(  34)		NORMAL = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_45_boot)
HXDLIN(  45)		VERTICAL = 3;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _LineScaleMode

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DProgramFormat_Context3DProgramFormat_Impl_
#include <openfl/display3D/_Context3DProgramFormat/Context3DProgramFormat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_edbb0cdee1a780b7_26_fromString,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_","fromString",0xccfbe061,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_.fromString","openfl/display3D/Context3DProgramFormat.hx",26,0x60f90708)
HX_LOCAL_STACK_FRAME(_hx_pos_edbb0cdee1a780b7_36_toString,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_","toString",0x856eb5b2,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_.toString","openfl/display3D/Context3DProgramFormat.hx",36,0x60f90708)
HX_LOCAL_STACK_FRAME(_hx_pos_edbb0cdee1a780b7_17_boot,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_","boot",0x36b6ee38,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_.boot","openfl/display3D/Context3DProgramFormat.hx",17,0x60f90708)
HX_LOCAL_STACK_FRAME(_hx_pos_edbb0cdee1a780b7_22_boot,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_","boot",0x36b6ee38,"openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_.boot","openfl/display3D/Context3DProgramFormat.hx",22,0x60f90708)
namespace openfl{
namespace display3D{
namespace _Context3DProgramFormat{

void Context3DProgramFormat_Impl__obj::__construct() { }

Dynamic Context3DProgramFormat_Impl__obj::__CreateEmpty() { return new Context3DProgramFormat_Impl__obj; }

void *Context3DProgramFormat_Impl__obj::_hx_vtable = 0;

Dynamic Context3DProgramFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DProgramFormat_Impl__obj > _hx_result = new Context3DProgramFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DProgramFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f15a2da;
}

 ::Dynamic Context3DProgramFormat_Impl__obj::AGAL;

 ::Dynamic Context3DProgramFormat_Impl__obj::GLSL;

 ::Dynamic Context3DProgramFormat_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_edbb0cdee1a780b7_26_fromString)
HXDLIN(  26)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("agal",51,2f,6c,40)) ){
HXLINE(  28)			return 0;
HXDLIN(  28)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("glsl",fe,51,67,44)) ){
HXLINE(  29)			return 1;
HXDLIN(  29)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  30)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  26)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProgramFormat_Impl__obj,fromString,return )

::String Context3DProgramFormat_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_edbb0cdee1a780b7_36_toString)
HXDLIN(  36)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  38)			return HX_("agal",51,2f,6c,40);
HXDLIN(  38)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  39)			return HX_("glsl",fe,51,67,44);
HXDLIN(  39)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  40)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProgramFormat_Impl__obj,toString,return )


Context3DProgramFormat_Impl__obj::Context3DProgramFormat_Impl__obj()
{
}

bool Context3DProgramFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DProgramFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DProgramFormat_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProgramFormat_Impl__obj::AGAL,HX_("AGAL",51,f7,2c,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProgramFormat_Impl__obj::GLSL,HX_("GLSL",fe,19,28,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DProgramFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramFormat_Impl__obj::AGAL,"AGAL");
	HX_MARK_MEMBER_NAME(Context3DProgramFormat_Impl__obj::GLSL,"GLSL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DProgramFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramFormat_Impl__obj::AGAL,"AGAL");
	HX_VISIT_MEMBER_NAME(Context3DProgramFormat_Impl__obj::GLSL,"GLSL");
};

#endif

::hx::Class Context3DProgramFormat_Impl__obj::__mClass;

static ::String Context3DProgramFormat_Impl__obj_sStaticFields[] = {
	HX_("AGAL",51,f7,2c,2b),
	HX_("GLSL",fe,19,28,2f),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DProgramFormat_Impl__obj::__register()
{
	Context3DProgramFormat_Impl__obj _hx_dummy;
	Context3DProgramFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DProgramFormat.Context3DProgramFormat_Impl_",28,34,bd,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DProgramFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DProgramFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DProgramFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DProgramFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DProgramFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DProgramFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DProgramFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DProgramFormat_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_edbb0cdee1a780b7_17_boot)
HXDLIN(  17)		AGAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_edbb0cdee1a780b7_22_boot)
HXDLIN(  22)		GLSL = 1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProgramFormat

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__CompressionAlgorithm_CompressionAlgorithm_Impl_
#include <openfl/utils/_CompressionAlgorithm/CompressionAlgorithm_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_29_fromString,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","fromString",0x5224159f,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.fromString","openfl/utils/CompressionAlgorithm.hx",29,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_40_toString,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","toString",0x36c27f70,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.toString","openfl/utils/CompressionAlgorithm.hx",40,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_17_boot,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","boot",0xc13780f6,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.boot","openfl/utils/CompressionAlgorithm.hx",17,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_20_boot,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","boot",0xc13780f6,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.boot","openfl/utils/CompressionAlgorithm.hx",20,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_25_boot,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","boot",0xc13780f6,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.boot","openfl/utils/CompressionAlgorithm.hx",25,0x4617ecf8)
namespace openfl{
namespace utils{
namespace _CompressionAlgorithm{

void CompressionAlgorithm_Impl__obj::__construct() { }

Dynamic CompressionAlgorithm_Impl__obj::__CreateEmpty() { return new CompressionAlgorithm_Impl__obj; }

void *CompressionAlgorithm_Impl__obj::_hx_vtable = 0;

Dynamic CompressionAlgorithm_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompressionAlgorithm_Impl__obj > _hx_result = new CompressionAlgorithm_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompressionAlgorithm_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78fde2b4;
}

 ::Dynamic CompressionAlgorithm_Impl__obj::DEFLATE;

 ::Dynamic CompressionAlgorithm_Impl__obj::LZMA;

 ::Dynamic CompressionAlgorithm_Impl__obj::ZLIB;

 ::Dynamic CompressionAlgorithm_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_29_fromString)
HXDLIN(  29)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("deflate",6b,0b,fa,a2)) ){
HXLINE(  31)			return 0;
HXDLIN(  31)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lzma",62,fd,bf,47)) ){
HXLINE(  32)			return 1;
HXDLIN(  32)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("zlib",0b,57,f6,50)) ){
HXLINE(  33)			return 2;
HXDLIN(  33)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  34)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  29)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompressionAlgorithm_Impl__obj,fromString,return )

::String CompressionAlgorithm_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_40_toString)
HXDLIN(  40)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  42)			return HX_("deflate",6b,0b,fa,a2);
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  43)			return HX_("lzma",62,fd,bf,47);
HXDLIN(  43)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  44)			return HX_("zlib",0b,57,f6,50);
HXDLIN(  44)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  45)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompressionAlgorithm_Impl__obj,toString,return )


CompressionAlgorithm_Impl__obj::CompressionAlgorithm_Impl__obj()
{
}

bool CompressionAlgorithm_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *CompressionAlgorithm_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CompressionAlgorithm_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CompressionAlgorithm_Impl__obj::DEFLATE,HX_("DEFLATE",4b,df,cd,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CompressionAlgorithm_Impl__obj::LZMA,HX_("LZMA",62,c5,80,32)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CompressionAlgorithm_Impl__obj::ZLIB,HX_("ZLIB",0b,1f,b7,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CompressionAlgorithm_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::ZLIB,"ZLIB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompressionAlgorithm_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::ZLIB,"ZLIB");
};

#endif

::hx::Class CompressionAlgorithm_Impl__obj::__mClass;

static ::String CompressionAlgorithm_Impl__obj_sStaticFields[] = {
	HX_("DEFLATE",4b,df,cd,22),
	HX_("LZMA",62,c5,80,32),
	HX_("ZLIB",0b,1f,b7,3b),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void CompressionAlgorithm_Impl__obj::__register()
{
	CompressionAlgorithm_Impl__obj _hx_dummy;
	CompressionAlgorithm_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_",2a,9a,41,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompressionAlgorithm_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompressionAlgorithm_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CompressionAlgorithm_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CompressionAlgorithm_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompressionAlgorithm_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompressionAlgorithm_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompressionAlgorithm_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CompressionAlgorithm_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_17_boot)
HXDLIN(  17)		DEFLATE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_20_boot)
HXDLIN(  20)		LZMA = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_25_boot)
HXDLIN(  25)		ZLIB = 2;
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _CompressionAlgorithm

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae9d30f993cc7475_65_toString,"_Xml.XmlType_Impl_","toString",0x16b62c3f,"_Xml.XmlType_Impl_.toString","/usr/local/lib/haxe/std/Xml.hx",65,0x5c1024e4)
namespace _Xml{

void XmlType_Impl__obj::__construct() { }

Dynamic XmlType_Impl__obj::__CreateEmpty() { return new XmlType_Impl__obj; }

void *XmlType_Impl__obj::_hx_vtable = 0;

Dynamic XmlType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XmlType_Impl__obj > _hx_result = new XmlType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool XmlType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29df0a39;
}

::String XmlType_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_ae9d30f993cc7475_65_toString)
HXDLIN(  65)		switch((int)(this1)){
            			case (int)0: {
HXLINE(  66)				return HX_("Element",9c,d6,a5,d3);
            			}
            			break;
            			case (int)1: {
HXLINE(  67)				return HX_("PCData",bd,3d,a2,bd);
            			}
            			break;
            			case (int)2: {
HXLINE(  68)				return HX_("CData",0d,60,15,c1);
            			}
            			break;
            			case (int)3: {
HXLINE(  69)				return HX_("Comment",3f,a2,c1,4e);
            			}
            			break;
            			case (int)4: {
HXLINE(  70)				return HX_("DocType",32,25,de,a5);
            			}
            			break;
            			case (int)5: {
HXLINE(  71)				return HX_("ProcessingInstruction",db,1e,14,6a);
            			}
            			break;
            			case (int)6: {
HXLINE(  72)				return HX_("Document",3b,ab,c4,74);
            			}
            			break;
            		}
HXLINE(  65)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(XmlType_Impl__obj,toString,return )


XmlType_Impl__obj::XmlType_Impl__obj()
{
}

bool XmlType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *XmlType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *XmlType_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class XmlType_Impl__obj::__mClass;

static ::String XmlType_Impl__obj_sStaticFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void XmlType_Impl__obj::__register()
{
	XmlType_Impl__obj _hx_dummy;
	XmlType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("_Xml.XmlType_Impl_",3b,c3,52,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &XmlType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(XmlType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< XmlType_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XmlType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XmlType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace _Xml

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_27fdfe9151c47db1_13_new,"lime.net.HTTPRequestHeader","new",0x37ed5b1c,"lime.net.HTTPRequestHeader.new","lime/net/HTTPRequestHeader.hx",13,0x41d61d56)
namespace lime{
namespace net{

void HTTPRequestHeader_obj::__construct(::String name,::String __o_value){
            		::String value = __o_value;
            		if (::hx::IsNull(__o_value)) value = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_27fdfe9151c47db1_13_new)
HXLINE(  14)		this->name = name;
HXLINE(  15)		this->value = value;
            	}

Dynamic HTTPRequestHeader_obj::__CreateEmpty() { return new HTTPRequestHeader_obj; }

void *HTTPRequestHeader_obj::_hx_vtable = 0;

Dynamic HTTPRequestHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HTTPRequestHeader_obj > _hx_result = new HTTPRequestHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HTTPRequestHeader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a15502c;
}


HTTPRequestHeader_obj::HTTPRequestHeader_obj()
{
}

void HTTPRequestHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPRequestHeader);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void HTTPRequestHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val HTTPRequestHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HTTPRequestHeader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPRequestHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HTTPRequestHeader_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(HTTPRequestHeader_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(HTTPRequestHeader_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HTTPRequestHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String HTTPRequestHeader_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class HTTPRequestHeader_obj::__mClass;

void HTTPRequestHeader_obj::__register()
{
	HTTPRequestHeader_obj _hx_dummy;
	HTTPRequestHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net.HTTPRequestHeader",2a,dd,2a,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HTTPRequestHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HTTPRequestHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPRequestHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPRequestHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_system_SecurityDomain
#include <openfl/system/SecurityDomain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b514a9552a6ee0e8_423_new,"openfl.system.LoaderContext","new",0xca9b9c4d,"openfl.system.LoaderContext.new","openfl/system/LoaderContext.hx",423,0x3ddfdde3)
namespace openfl{
namespace _hx_system{

void LoaderContext_obj::__construct(::hx::Null< bool >  __o_checkPolicyFile, ::openfl::_hx_system::ApplicationDomain applicationDomain, ::openfl::_hx_system::SecurityDomain securityDomain){
            		bool checkPolicyFile = __o_checkPolicyFile.Default(false);
            	HX_STACKFRAME(&_hx_pos_b514a9552a6ee0e8_423_new)
HXLINE( 424)		this->checkPolicyFile = checkPolicyFile;
HXLINE( 425)		this->securityDomain = securityDomain;
HXLINE( 426)		this->applicationDomain = applicationDomain;
HXLINE( 428)		this->allowCodeImport = true;
HXLINE( 429)		this->allowLoadBytesCodeExecution = true;
            	}

Dynamic LoaderContext_obj::__CreateEmpty() { return new LoaderContext_obj; }

void *LoaderContext_obj::_hx_vtable = 0;

Dynamic LoaderContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoaderContext_obj > _hx_result = new LoaderContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LoaderContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fb55741;
}


::hx::ObjectPtr< LoaderContext_obj > LoaderContext_obj::__new(::hx::Null< bool >  __o_checkPolicyFile, ::openfl::_hx_system::ApplicationDomain applicationDomain, ::openfl::_hx_system::SecurityDomain securityDomain) {
	::hx::ObjectPtr< LoaderContext_obj > __this = new LoaderContext_obj();
	__this->__construct(__o_checkPolicyFile,applicationDomain,securityDomain);
	return __this;
}

::hx::ObjectPtr< LoaderContext_obj > LoaderContext_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_checkPolicyFile, ::openfl::_hx_system::ApplicationDomain applicationDomain, ::openfl::_hx_system::SecurityDomain securityDomain) {
	LoaderContext_obj *__this = (LoaderContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoaderContext_obj), true, "openfl.system.LoaderContext"));
	*(void **)__this = LoaderContext_obj::_hx_vtable;
	__this->__construct(__o_checkPolicyFile,applicationDomain,securityDomain);
	return __this;
}

LoaderContext_obj::LoaderContext_obj()
{
}

void LoaderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderContext);
	HX_MARK_MEMBER_NAME(allowCodeImport,"allowCodeImport");
	HX_MARK_MEMBER_NAME(allowLoadBytesCodeExecution,"allowLoadBytesCodeExecution");
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_MARK_MEMBER_NAME(securityDomain,"securityDomain");
	HX_MARK_END_CLASS();
}

void LoaderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowCodeImport,"allowCodeImport");
	HX_VISIT_MEMBER_NAME(allowLoadBytesCodeExecution,"allowLoadBytesCodeExecution");
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_VISIT_MEMBER_NAME(securityDomain,"securityDomain");
}

::hx::Val LoaderContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"securityDomain") ) { return ::hx::Val( securityDomain ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCodeImport") ) { return ::hx::Val( allowCodeImport ); }
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return ::hx::Val( checkPolicyFile ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return ::hx::Val( applicationDomain ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowLoadBytesCodeExecution") ) { return ::hx::Val( allowLoadBytesCodeExecution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LoaderContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"securityDomain") ) { securityDomain=inValue.Cast<  ::openfl::_hx_system::SecurityDomain >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCodeImport") ) { allowCodeImport=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast<  ::openfl::_hx_system::ApplicationDomain >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowLoadBytesCodeExecution") ) { allowLoadBytesCodeExecution=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("allowCodeImport",5b,74,fd,31));
	outFields->push(HX_("allowLoadBytesCodeExecution",6f,74,e7,4b));
	outFields->push(HX_("applicationDomain",b4,2c,db,a3));
	outFields->push(HX_("checkPolicyFile",76,1e,96,af));
	outFields->push(HX_("securityDomain",24,d0,3f,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoaderContext_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(LoaderContext_obj,allowCodeImport),HX_("allowCodeImport",5b,74,fd,31)},
	{::hx::fsBool,(int)offsetof(LoaderContext_obj,allowLoadBytesCodeExecution),HX_("allowLoadBytesCodeExecution",6f,74,e7,4b)},
	{::hx::fsObject /*  ::openfl::_hx_system::ApplicationDomain */ ,(int)offsetof(LoaderContext_obj,applicationDomain),HX_("applicationDomain",b4,2c,db,a3)},
	{::hx::fsBool,(int)offsetof(LoaderContext_obj,checkPolicyFile),HX_("checkPolicyFile",76,1e,96,af)},
	{::hx::fsObject /*  ::openfl::_hx_system::SecurityDomain */ ,(int)offsetof(LoaderContext_obj,securityDomain),HX_("securityDomain",24,d0,3f,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LoaderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String LoaderContext_obj_sMemberFields[] = {
	HX_("allowCodeImport",5b,74,fd,31),
	HX_("allowLoadBytesCodeExecution",6f,74,e7,4b),
	HX_("applicationDomain",b4,2c,db,a3),
	HX_("checkPolicyFile",76,1e,96,af),
	HX_("securityDomain",24,d0,3f,66),
	::String(null()) };

::hx::Class LoaderContext_obj::__mClass;

void LoaderContext_obj::__register()
{
	LoaderContext_obj _hx_dummy;
	LoaderContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.system.LoaderContext",db,71,92,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoaderContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoaderContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoaderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoaderContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace system

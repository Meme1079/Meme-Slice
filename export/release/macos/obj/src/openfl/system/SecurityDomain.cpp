// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_system_SecurityDomain
#include <openfl/system/SecurityDomain.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_708c5fba9d37bf54_23_new,"openfl.system.SecurityDomain","new",0x0cdddaf7,"openfl.system.SecurityDomain.new","openfl/system/SecurityDomain.hx",23,0x68641a39)
HX_LOCAL_STACK_FRAME(_hx_pos_708c5fba9d37bf54_15_boot,"openfl.system.SecurityDomain","boot",0x2d5abdbb,"openfl.system.SecurityDomain.boot","openfl/system/SecurityDomain.hx",15,0x68641a39)
HX_LOCAL_STACK_FRAME(_hx_pos_708c5fba9d37bf54_20_boot,"openfl.system.SecurityDomain","boot",0x2d5abdbb,"openfl.system.SecurityDomain.boot","openfl/system/SecurityDomain.hx",20,0x68641a39)
namespace openfl{
namespace _hx_system{

void SecurityDomain_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_708c5fba9d37bf54_23_new)
            	}

Dynamic SecurityDomain_obj::__CreateEmpty() { return new SecurityDomain_obj; }

void *SecurityDomain_obj::_hx_vtable = 0;

Dynamic SecurityDomain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SecurityDomain_obj > _hx_result = new SecurityDomain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SecurityDomain_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x46406503;
}

 ::openfl::_hx_system::SecurityDomain SecurityDomain_obj::currentDomain;


SecurityDomain_obj::SecurityDomain_obj()
{
}

bool SecurityDomain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { outValue = ( currentDomain ); return true; }
	}
	return false;
}

bool SecurityDomain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=ioValue.Cast<  ::openfl::_hx_system::SecurityDomain >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SecurityDomain_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SecurityDomain_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_hx_system::SecurityDomain */ ,(void *) &SecurityDomain_obj::currentDomain,HX_("currentDomain",5d,32,dd,10)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SecurityDomain_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SecurityDomain_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

#endif

::hx::Class SecurityDomain_obj::__mClass;

static ::String SecurityDomain_obj_sStaticFields[] = {
	HX_("currentDomain",5d,32,dd,10),
	::String(null())
};

void SecurityDomain_obj::__register()
{
	SecurityDomain_obj _hx_dummy;
	SecurityDomain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.system.SecurityDomain",85,93,11,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SecurityDomain_obj::__GetStatic;
	__mClass->mSetStaticField = &SecurityDomain_obj::__SetStatic;
	__mClass->mMarkFunc = SecurityDomain_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SecurityDomain_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SecurityDomain_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SecurityDomain_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SecurityDomain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SecurityDomain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SecurityDomain_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_708c5fba9d37bf54_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:UnnecessaryConstructor",15,0f,26,74))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_708c5fba9d37bf54_20_boot)
HXDLIN(  20)		currentDomain =  ::openfl::_hx_system::SecurityDomain_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace system

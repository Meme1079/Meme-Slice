// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events__EventType_EventType_Impl_
#include <openfl/events/_EventType/EventType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b9f37f4a2d6a8651_24_equals,"openfl.events._EventType.EventType_Impl_","equals",0xb110b5bb,"openfl.events._EventType.EventType_Impl_.equals","openfl/events/EventType.hx",24,0xb786c821)
HX_LOCAL_STACK_FRAME(_hx_pos_b9f37f4a2d6a8651_29_notEquals,"openfl.events._EventType.EventType_Impl_","notEquals",0xf74ad9b6,"openfl.events._EventType.EventType_Impl_.notEquals","openfl/events/EventType.hx",29,0xb786c821)
namespace openfl{
namespace events{
namespace _EventType{

void EventType_Impl__obj::__construct() { }

Dynamic EventType_Impl__obj::__CreateEmpty() { return new EventType_Impl__obj; }

void *EventType_Impl__obj::_hx_vtable = 0;

Dynamic EventType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventType_Impl__obj > _hx_result = new EventType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73749af6;
}

bool EventType_Impl__obj::equals(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_b9f37f4a2d6a8651_24_equals)
HXDLIN(  24)		return (a == b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventType_Impl__obj,equals,return )

bool EventType_Impl__obj::notEquals(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_b9f37f4a2d6a8651_29_notEquals)
HXDLIN(  29)		return (a != b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventType_Impl__obj,notEquals,return )


EventType_Impl__obj::EventType_Impl__obj()
{
}

bool EventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEquals") ) { outValue = notEquals_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EventType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EventType_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class EventType_Impl__obj::__mClass;

static ::String EventType_Impl__obj_sStaticFields[] = {
	HX_("equals",3f,ee,f2,bf),
	HX_("notEquals",b2,cb,db,3c),
	::String(null())
};

void EventType_Impl__obj::__register()
{
	EventType_Impl__obj _hx_dummy;
	EventType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events._EventType.EventType_Impl_",72,81,76,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EventType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EventType_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
} // end namespace _EventType

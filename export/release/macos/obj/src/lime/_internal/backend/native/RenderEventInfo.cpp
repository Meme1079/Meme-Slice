// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_RenderEventInfo
#include <lime/_internal/backend/native/RenderEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e2a4e584e1f8ec25_828_new,"lime._internal.backend.native.RenderEventInfo","new",0x4ace2292,"lime._internal.backend.native.RenderEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",828,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_e2a4e584e1f8ec25_833_clone,"lime._internal.backend.native.RenderEventInfo","clone",0xe3bbd60f,"lime._internal.backend.native.RenderEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",833,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void RenderEventInfo_obj::__construct( ::Dynamic type){
            	HX_STACKFRAME(&_hx_pos_e2a4e584e1f8ec25_828_new)
HXDLIN( 828)		this->type = ( (int)(type) );
            	}

Dynamic RenderEventInfo_obj::__CreateEmpty() { return new RenderEventInfo_obj; }

void *RenderEventInfo_obj::_hx_vtable = 0;

Dynamic RenderEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderEventInfo_obj > _hx_result = new RenderEventInfo_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RenderEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7660a6a6;
}

 ::lime::_internal::backend::native::RenderEventInfo RenderEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e2a4e584e1f8ec25_833_clone)
HXDLIN( 833)		return  ::lime::_internal::backend::native::RenderEventInfo_obj::__alloc( HX_CTX ,this->type);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderEventInfo_obj,clone,return )


RenderEventInfo_obj::RenderEventInfo_obj()
{
}

::hx::Val RenderEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(RenderEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RenderEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderEventInfo_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class RenderEventInfo_obj::__mClass;

void RenderEventInfo_obj::__register()
{
	RenderEventInfo_obj _hx_dummy;
	RenderEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.RenderEventInfo",a0,31,09,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

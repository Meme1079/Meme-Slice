// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_87aa2d206f2b4265_13_flush,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","flush",0x2a892755,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.flush","lime/graphics/cairo/CairoSurface.hx",13,0x58ce1be8)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{

void CairoSurface_Impl__obj::__construct() { }

Dynamic CairoSurface_Impl__obj::__CreateEmpty() { return new CairoSurface_Impl__obj; }

void *CairoSurface_Impl__obj::_hx_vtable = 0;

Dynamic CairoSurface_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoSurface_Impl__obj > _hx_result = new CairoSurface_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoSurface_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x674e598d;
}

void CairoSurface_Impl__obj::flush( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_87aa2d206f2b4265_13_flush)
HXDLIN(  13)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_surface_flush(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,flush,(void))


CairoSurface_Impl__obj::CairoSurface_Impl__obj()
{
}

bool CairoSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoSurface_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoSurface_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoSurface_Impl__obj::__mClass;

static ::String CairoSurface_Impl__obj_sStaticFields[] = {
	HX_("flush",c4,62,9b,02),
	::String(null())
};

void CairoSurface_Impl__obj::__register()
{
	CairoSurface_Impl__obj _hx_dummy;
	CairoSurface_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_",3f,72,19,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoSurface_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoSurface_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoSurface_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoSurface_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface

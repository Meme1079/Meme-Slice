// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra
#include <lime/graphics/opengl/ext/EXT_read_format_bgra.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_87671ce3ef4fd386_4_new,"lime.graphics.opengl.ext.EXT_read_format_bgra","new",0x02c02b25,"lime.graphics.opengl.ext.EXT_read_format_bgra.new","lime/graphics/opengl/ext/EXT_read_format_bgra.hx",4,0x26ddab89)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_read_format_bgra_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_87671ce3ef4fd386_4_new)
HXLINE(   8)		this->UNSIGNED_SHORT_1_5_5_5_REV_EXT = 33638;
HXLINE(   7)		this->UNSIGNED_SHORT_4_4_4_4_REV_EXT = 33637;
HXLINE(   6)		this->BGRA_EXT = 32993;
            	}

Dynamic EXT_read_format_bgra_obj::__CreateEmpty() { return new EXT_read_format_bgra_obj; }

void *EXT_read_format_bgra_obj::_hx_vtable = 0;

Dynamic EXT_read_format_bgra_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_read_format_bgra_obj > _hx_result = new EXT_read_format_bgra_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_read_format_bgra_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ef6d403;
}


EXT_read_format_bgra_obj::EXT_read_format_bgra_obj()
{
}

::hx::Val EXT_read_format_bgra_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return ::hx::Val( BGRA_EXT ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_EXT") ) { return ::hx::Val( UNSIGNED_SHORT_4_4_4_4_REV_EXT ); }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_1_5_5_5_REV_EXT") ) { return ::hx::Val( UNSIGNED_SHORT_1_5_5_5_REV_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_read_format_bgra_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_EXT") ) { UNSIGNED_SHORT_4_4_4_4_REV_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_1_5_5_5_REV_EXT") ) { UNSIGNED_SHORT_1_5_5_5_REV_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_read_format_bgra_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BGRA_EXT",36,94,c4,bc));
	outFields->push(HX_("UNSIGNED_SHORT_4_4_4_4_REV_EXT",6c,63,94,9a));
	outFields->push(HX_("UNSIGNED_SHORT_1_5_5_5_REV_EXT",ec,d5,31,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_read_format_bgra_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_read_format_bgra_obj,BGRA_EXT),HX_("BGRA_EXT",36,94,c4,bc)},
	{::hx::fsInt,(int)offsetof(EXT_read_format_bgra_obj,UNSIGNED_SHORT_4_4_4_4_REV_EXT),HX_("UNSIGNED_SHORT_4_4_4_4_REV_EXT",6c,63,94,9a)},
	{::hx::fsInt,(int)offsetof(EXT_read_format_bgra_obj,UNSIGNED_SHORT_1_5_5_5_REV_EXT),HX_("UNSIGNED_SHORT_1_5_5_5_REV_EXT",ec,d5,31,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_read_format_bgra_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_read_format_bgra_obj_sMemberFields[] = {
	HX_("BGRA_EXT",36,94,c4,bc),
	HX_("UNSIGNED_SHORT_4_4_4_4_REV_EXT",6c,63,94,9a),
	HX_("UNSIGNED_SHORT_1_5_5_5_REV_EXT",ec,d5,31,75),
	::String(null()) };

::hx::Class EXT_read_format_bgra_obj::__mClass;

void EXT_read_format_bgra_obj::__register()
{
	EXT_read_format_bgra_obj _hx_dummy;
	EXT_read_format_bgra_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_read_format_bgra",b3,b4,e0,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_read_format_bgra_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_read_format_bgra_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_read_format_bgra_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_read_format_bgra_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

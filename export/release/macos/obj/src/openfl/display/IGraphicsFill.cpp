// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif

namespace openfl{
namespace display{


static ::String IGraphicsFill_obj_sMemberFields[] = {
	HX_("__graphicsFillType",e8,75,eb,27),
	::String(null()) };

::hx::Class IGraphicsFill_obj::__mClass;

void IGraphicsFill_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.IGraphicsFill",4d,8c,83,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IGraphicsFill_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc2d06665 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{


static ::String IFlxSprite_obj_sMemberFields[] = {
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("alpha",5e,a7,96,21),
	HX_("angle",d3,43,e2,22),
	HX_("facing",1a,3f,05,e4),
	HX_("moves",42,cc,65,0c),
	HX_("immovable",0a,27,70,27),
	HX_("offset",93,97,3f,60),
	HX_("origin",e6,19,01,4b),
	HX_("scale",8a,ce,ce,78),
	HX_("velocity",1d,02,fe,1e),
	HX_("maxVelocity",e1,0c,c4,94),
	HX_("acceleration",40,00,61,9a),
	HX_("drag",f4,2b,70,42),
	HX_("scrollFactor",bc,ec,cf,3b),
	HX_("reset",cf,49,c8,e6),
	HX_("setPosition",6b,6a,5b,fb),
	::String(null()) };

::hx::Class IFlxSprite_obj::__mClass;

void IFlxSprite_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.IFlxSprite",60,ad,56,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x897c83aa >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel

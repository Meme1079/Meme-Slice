// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxRenderMethod
#include <flixel/FlxRenderMethod.h>
#endif
namespace flixel{

::flixel::FlxRenderMethod FlxRenderMethod_obj::BLITTING;

::flixel::FlxRenderMethod FlxRenderMethod_obj::DRAW_TILES;

bool FlxRenderMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BLITTING",a3,53,d4,dc)) { outValue = FlxRenderMethod_obj::BLITTING; return true; }
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) { outValue = FlxRenderMethod_obj::DRAW_TILES; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxRenderMethod_obj)

int FlxRenderMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BLITTING",a3,53,d4,dc)) return 1;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return 0;
	return super::__FindIndex(inName);
}

int FlxRenderMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BLITTING",a3,53,d4,dc)) return 0;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxRenderMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BLITTING",a3,53,d4,dc)) return BLITTING;
	if (inName==HX_("DRAW_TILES",aa,4b,c0,d6)) return DRAW_TILES;
	return super::__Field(inName,inCallProp);
}

static ::String FlxRenderMethod_obj_sStaticFields[] = {
	HX_("DRAW_TILES",aa,4b,c0,d6),
	HX_("BLITTING",a3,53,d4,dc),
	::String(null())
};

::hx::Class FlxRenderMethod_obj::__mClass;

Dynamic __Create_FlxRenderMethod_obj() { return new FlxRenderMethod_obj; }

void FlxRenderMethod_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.FlxRenderMethod",37,14,c6,a4), ::hx::TCanCast< FlxRenderMethod_obj >,FlxRenderMethod_obj_sStaticFields,0,
	&__Create_FlxRenderMethod_obj, &__Create,
	&super::__SGetClass(), &CreateFlxRenderMethod_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxRenderMethod_obj::__GetStatic;
}

void FlxRenderMethod_obj::__boot()
{
BLITTING = ::hx::CreateConstEnum< FlxRenderMethod_obj >(HX_("BLITTING",a3,53,d4,dc),1);
DRAW_TILES = ::hx::CreateConstEnum< FlxRenderMethod_obj >(HX_("DRAW_TILES",aa,4b,c0,d6),0);
}


} // end namespace flixel

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_mappings_Manufacturer
#include <flixel/input/gamepad/mappings/Manufacturer.h>
#endif
HX_LOCAL_STACK_FRAME(_hx_pos_b569b380ca8d168f_193_boot,"Manufacturer_obj","boot",0x8a661ed7,"Manufacturer_obj.boot","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",193,0x5edd1803)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

::flixel::input::gamepad::mappings::Manufacturer Manufacturer_obj::AdobeWindows;

::flixel::input::gamepad::mappings::Manufacturer Manufacturer_obj::GooglePepper;

::flixel::input::gamepad::mappings::Manufacturer Manufacturer_obj::Unknown;

bool Manufacturer_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AdobeWindows",74,f3,dd,6f)) { outValue = Manufacturer_obj::AdobeWindows; return true; }
	if (inName==HX_("GooglePepper",9b,cf,95,53)) { outValue = Manufacturer_obj::GooglePepper; return true; }
	if (inName==HX_("Unknown",6a,4b,cc,ae)) { outValue = Manufacturer_obj::Unknown; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Manufacturer_obj)

int Manufacturer_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AdobeWindows",74,f3,dd,6f)) return 1;
	if (inName==HX_("GooglePepper",9b,cf,95,53)) return 0;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 2;
	return super::__FindIndex(inName);
}

int Manufacturer_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AdobeWindows",74,f3,dd,6f)) return 0;
	if (inName==HX_("GooglePepper",9b,cf,95,53)) return 0;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Manufacturer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AdobeWindows",74,f3,dd,6f)) return AdobeWindows;
	if (inName==HX_("GooglePepper",9b,cf,95,53)) return GooglePepper;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return Unknown;
	return super::__Field(inName,inCallProp);
}

static ::String Manufacturer_obj_sStaticFields[] = {
	HX_("GooglePepper",9b,cf,95,53),
	HX_("AdobeWindows",74,f3,dd,6f),
	HX_("Unknown",6a,4b,cc,ae),
	::String(null())
};

::hx::Class Manufacturer_obj::__mClass;

Dynamic __Create_Manufacturer_obj() { return new Manufacturer_obj; }

void Manufacturer_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.input.gamepad.mappings.Manufacturer",d7,3a,0b,c4), ::hx::TCanCast< Manufacturer_obj >,Manufacturer_obj_sStaticFields,0,
	&__Create_Manufacturer_obj, &__Create,
	&super::__SGetClass(), &CreateManufacturer_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Manufacturer_obj::__GetStatic;
}

void Manufacturer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b569b380ca8d168f_193_boot)
HXDLIN( 193)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:MemberName",d6,25,7e,c4))))));
            	}
AdobeWindows = ::hx::CreateConstEnum< Manufacturer_obj >(HX_("AdobeWindows",74,f3,dd,6f),1);
GooglePepper = ::hx::CreateConstEnum< Manufacturer_obj >(HX_("GooglePepper",9b,cf,95,53),0);
Unknown = ::hx::CreateConstEnum< Manufacturer_obj >(HX_("Unknown",6a,4b,cc,ae),2);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

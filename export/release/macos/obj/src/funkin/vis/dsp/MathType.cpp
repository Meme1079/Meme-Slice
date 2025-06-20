// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_funkin_vis_dsp_MathType
#include <funkin/vis/dsp/MathType.h>
#endif
namespace funkin{
namespace vis{
namespace dsp{

::funkin::vis::dsp::MathType MathType_obj::Cast;

::funkin::vis::dsp::MathType MathType_obj::Ceil;

::funkin::vis::dsp::MathType MathType_obj::Floor;

::funkin::vis::dsp::MathType MathType_obj::Round;

bool MathType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Cast",df,4a,93,2c)) { outValue = MathType_obj::Cast; return true; }
	if (inName==HX_("Ceil",25,4b,96,2c)) { outValue = MathType_obj::Ceil; return true; }
	if (inName==HX_("Floor",ac,41,c4,95)) { outValue = MathType_obj::Floor; return true; }
	if (inName==HX_("Round",2e,68,93,80)) { outValue = MathType_obj::Round; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MathType_obj)

int MathType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Cast",df,4a,93,2c)) return 3;
	if (inName==HX_("Ceil",25,4b,96,2c)) return 2;
	if (inName==HX_("Floor",ac,41,c4,95)) return 1;
	if (inName==HX_("Round",2e,68,93,80)) return 0;
	return super::__FindIndex(inName);
}

int MathType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Cast",df,4a,93,2c)) return 0;
	if (inName==HX_("Ceil",25,4b,96,2c)) return 0;
	if (inName==HX_("Floor",ac,41,c4,95)) return 0;
	if (inName==HX_("Round",2e,68,93,80)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val MathType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Cast",df,4a,93,2c)) return Cast;
	if (inName==HX_("Ceil",25,4b,96,2c)) return Ceil;
	if (inName==HX_("Floor",ac,41,c4,95)) return Floor;
	if (inName==HX_("Round",2e,68,93,80)) return Round;
	return super::__Field(inName,inCallProp);
}

static ::String MathType_obj_sStaticFields[] = {
	HX_("Round",2e,68,93,80),
	HX_("Floor",ac,41,c4,95),
	HX_("Ceil",25,4b,96,2c),
	HX_("Cast",df,4a,93,2c),
	::String(null())
};

::hx::Class MathType_obj::__mClass;

Dynamic __Create_MathType_obj() { return new MathType_obj; }

void MathType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("funkin.vis.dsp.MathType",fa,ee,1b,e4), ::hx::TCanCast< MathType_obj >,MathType_obj_sStaticFields,0,
	&__Create_MathType_obj, &__Create,
	&super::__SGetClass(), &CreateMathType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MathType_obj::__GetStatic;
}

void MathType_obj::__boot()
{
Cast = ::hx::CreateConstEnum< MathType_obj >(HX_("Cast",df,4a,93,2c),3);
Ceil = ::hx::CreateConstEnum< MathType_obj >(HX_("Ceil",25,4b,96,2c),2);
Floor = ::hx::CreateConstEnum< MathType_obj >(HX_("Floor",ac,41,c4,95),1);
Round = ::hx::CreateConstEnum< MathType_obj >(HX_("Round",2e,68,93,80),0);
}


} // end namespace funkin
} // end namespace vis
} // end namespace dsp

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1aabeebe910bc323_96_new,"openfl.display.GraphicsBitmapFill","new",0x9f0e8e19,"openfl.display.GraphicsBitmapFill.new","openfl/display/GraphicsBitmapFill.hx",96,0x222b0335)
namespace openfl{
namespace display{

void GraphicsBitmapFill_obj::__construct( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_1aabeebe910bc323_96_new)
HXLINE(  97)		this->bitmapData = bitmapData;
HXLINE(  98)		this->matrix = matrix;
HXLINE(  99)		this->repeat = repeat;
HXLINE( 100)		this->smooth = smooth;
HXLINE( 102)		this->_hx___graphicsDataType = 4;
HXLINE( 103)		this->_hx___graphicsFillType = 2;
            	}

Dynamic GraphicsBitmapFill_obj::__CreateEmpty() { return new GraphicsBitmapFill_obj; }

void *GraphicsBitmapFill_obj::_hx_vtable = 0;

Dynamic GraphicsBitmapFill_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsBitmapFill_obj > _hx_result = new GraphicsBitmapFill_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicsBitmapFill_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d2626eb;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsBitmapFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsBitmapFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsBitmapFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsBitmapFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsBitmapFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsBitmapFill_obj > GraphicsBitmapFill_obj::__new( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth) {
	::hx::ObjectPtr< GraphicsBitmapFill_obj > __this = new GraphicsBitmapFill_obj();
	__this->__construct(bitmapData,matrix,__o_repeat,__o_smooth);
	return __this;
}

::hx::ObjectPtr< GraphicsBitmapFill_obj > GraphicsBitmapFill_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth) {
	GraphicsBitmapFill_obj *__this = (GraphicsBitmapFill_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsBitmapFill_obj), true, "openfl.display.GraphicsBitmapFill"));
	*(void **)__this = GraphicsBitmapFill_obj::_hx_vtable;
	__this->__construct(bitmapData,matrix,__o_repeat,__o_smooth);
	return __this;
}

GraphicsBitmapFill_obj::GraphicsBitmapFill_obj()
{
}

void GraphicsBitmapFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsBitmapFill);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsBitmapFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
}

::hx::Val GraphicsBitmapFill_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat ); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return ::hx::Val( smooth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return ::hx::Val( bitmapData ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return ::hx::Val( _hx___graphicsFillType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsBitmapFill_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsBitmapFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmapData",b9,b5,c0,33));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("repeat",5b,97,7c,06));
	outFields->push(HX_("smooth",2e,08,6b,07));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	outFields->push(HX_("__graphicsFillType",e8,75,eb,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsBitmapFill_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(GraphicsBitmapFill_obj,bitmapData),HX_("bitmapData",b9,b5,c0,33)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(GraphicsBitmapFill_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsBool,(int)offsetof(GraphicsBitmapFill_obj,repeat),HX_("repeat",5b,97,7c,06)},
	{::hx::fsBool,(int)offsetof(GraphicsBitmapFill_obj,smooth),HX_("smooth",2e,08,6b,07)},
	{::hx::fsInt,(int)offsetof(GraphicsBitmapFill_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{::hx::fsInt,(int)offsetof(GraphicsBitmapFill_obj,_hx___graphicsFillType),HX_("__graphicsFillType",e8,75,eb,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsBitmapFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsBitmapFill_obj_sMemberFields[] = {
	HX_("bitmapData",b9,b5,c0,33),
	HX_("matrix",41,36,c8,bb),
	HX_("repeat",5b,97,7c,06),
	HX_("smooth",2e,08,6b,07),
	HX_("__graphicsDataType",0f,5d,4d,46),
	HX_("__graphicsFillType",e8,75,eb,27),
	::String(null()) };

::hx::Class GraphicsBitmapFill_obj::__mClass;

void GraphicsBitmapFill_obj::__register()
{
	GraphicsBitmapFill_obj _hx_dummy;
	GraphicsBitmapFill_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsBitmapFill",a7,8d,1d,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsBitmapFill_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsBitmapFill_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsBitmapFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsBitmapFill_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

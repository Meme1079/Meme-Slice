// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e4c1d0f133e7c9cd_181_new,"openfl.display.GraphicsGradientFill","new",0xc9ac905a,"openfl.display.GraphicsGradientFill.new","openfl/display/GraphicsGradientFill.hx",181,0x0dfeaf94)
namespace openfl{
namespace display{

void GraphicsGradientFill_obj::__construct( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_e4c1d0f133e7c9cd_181_new)
HXLINE( 182)		if (::hx::IsNull( type )) {
HXLINE( 184)			type = 0;
            		}
HXLINE( 187)		if (::hx::IsNull( spreadMethod )) {
HXLINE( 189)			spreadMethod = 0;
            		}
HXLINE( 192)		if (::hx::IsNull( interpolationMethod )) {
HXLINE( 194)			interpolationMethod = 1;
            		}
HXLINE( 197)		this->type = type;
HXLINE( 198)		this->colors = colors;
HXLINE( 199)		this->alphas = alphas;
HXLINE( 200)		this->ratios = ratios;
HXLINE( 201)		this->matrix = matrix;
HXLINE( 202)		this->spreadMethod = spreadMethod;
HXLINE( 203)		this->interpolationMethod = interpolationMethod;
HXLINE( 204)		this->focalPointRatio = focalPointRatio;
HXLINE( 205)		this->_hx___graphicsDataType = 2;
HXLINE( 206)		this->_hx___graphicsFillType = 1;
            	}

Dynamic GraphicsGradientFill_obj::__CreateEmpty() { return new GraphicsGradientFill_obj; }

void *GraphicsGradientFill_obj::_hx_vtable = 0;

Dynamic GraphicsGradientFill_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsGradientFill_obj > _hx_result = new GraphicsGradientFill_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GraphicsGradientFill_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a0495e4;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsGradientFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsGradientFill_obj > GraphicsGradientFill_obj::__new( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,::hx::Null< Float >  __o_focalPointRatio) {
	::hx::ObjectPtr< GraphicsGradientFill_obj > __this = new GraphicsGradientFill_obj();
	__this->__construct(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,__o_focalPointRatio);
	return __this;
}

::hx::ObjectPtr< GraphicsGradientFill_obj > GraphicsGradientFill_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,::hx::Null< Float >  __o_focalPointRatio) {
	GraphicsGradientFill_obj *__this = (GraphicsGradientFill_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsGradientFill_obj), true, "openfl.display.GraphicsGradientFill"));
	*(void **)__this = GraphicsGradientFill_obj::_hx_vtable;
	__this->__construct(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,__o_focalPointRatio);
	return __this;
}

GraphicsGradientFill_obj::GraphicsGradientFill_obj()
{
}

void GraphicsGradientFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsGradientFill);
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(focalPointRatio,"focalPointRatio");
	HX_MARK_MEMBER_NAME(interpolationMethod,"interpolationMethod");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(ratios,"ratios");
	HX_MARK_MEMBER_NAME(spreadMethod,"spreadMethod");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsGradientFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(focalPointRatio,"focalPointRatio");
	HX_VISIT_MEMBER_NAME(interpolationMethod,"interpolationMethod");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(ratios,"ratios");
	HX_VISIT_MEMBER_NAME(spreadMethod,"spreadMethod");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
}

::hx::Val GraphicsGradientFill_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"alphas") ) { return ::hx::Val( alphas ); }
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"ratios") ) { return ::hx::Val( ratios ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadMethod") ) { return ::hx::Val( spreadMethod ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"focalPointRatio") ) { return ::hx::Val( focalPointRatio ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return ::hx::Val( _hx___graphicsFillType ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolationMethod") ) { return ::hx::Val( interpolationMethod ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsGradientFill_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratios") ) { ratios=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadMethod") ) { spreadMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"focalPointRatio") ) { focalPointRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolationMethod") ) { interpolationMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsGradientFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphas",55,cb,3b,42));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("focalPointRatio",60,71,ca,c0));
	outFields->push(HX_("interpolationMethod",25,8f,f4,c8));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("ratios",08,35,8a,bb));
	outFields->push(HX_("spreadMethod",b4,05,24,ed));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	outFields->push(HX_("__graphicsFillType",e8,75,eb,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsGradientFill_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(GraphicsGradientFill_obj,alphas),HX_("alphas",55,cb,3b,42)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(GraphicsGradientFill_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsFloat,(int)offsetof(GraphicsGradientFill_obj,focalPointRatio),HX_("focalPointRatio",60,71,ca,c0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsGradientFill_obj,interpolationMethod),HX_("interpolationMethod",25,8f,f4,c8)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(GraphicsGradientFill_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(GraphicsGradientFill_obj,ratios),HX_("ratios",08,35,8a,bb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsGradientFill_obj,spreadMethod),HX_("spreadMethod",b4,05,24,ed)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsGradientFill_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(GraphicsGradientFill_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{::hx::fsInt,(int)offsetof(GraphicsGradientFill_obj,_hx___graphicsFillType),HX_("__graphicsFillType",e8,75,eb,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsGradientFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsGradientFill_obj_sMemberFields[] = {
	HX_("alphas",55,cb,3b,42),
	HX_("colors",b0,c5,86,c6),
	HX_("focalPointRatio",60,71,ca,c0),
	HX_("interpolationMethod",25,8f,f4,c8),
	HX_("matrix",41,36,c8,bb),
	HX_("ratios",08,35,8a,bb),
	HX_("spreadMethod",b4,05,24,ed),
	HX_("type",ba,f2,08,4d),
	HX_("__graphicsDataType",0f,5d,4d,46),
	HX_("__graphicsFillType",e8,75,eb,27),
	::String(null()) };

::hx::Class GraphicsGradientFill_obj::__mClass;

void GraphicsGradientFill_obj::__register()
{
	GraphicsGradientFill_obj _hx_dummy;
	GraphicsGradientFill_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsGradientFill",68,1b,1b,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsGradientFill_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsGradientFill_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsGradientFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsGradientFill_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7eaf41fa1350495_48_new,"openfl.display.GraphicsSolidFill","new",0x800a4bcb,"openfl.display.GraphicsSolidFill.new","openfl/display/GraphicsSolidFill.hx",48,0x9b142c07)
namespace openfl{
namespace display{

void GraphicsSolidFill_obj::__construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_e7eaf41fa1350495_48_new)
HXLINE(  49)		this->alpha = alpha;
HXLINE(  50)		this->color = color;
HXLINE(  51)		this->_hx___graphicsDataType = 1;
HXLINE(  52)		this->_hx___graphicsFillType = 0;
            	}

Dynamic GraphicsSolidFill_obj::__CreateEmpty() { return new GraphicsSolidFill_obj; }

void *GraphicsSolidFill_obj::_hx_vtable = 0;

Dynamic GraphicsSolidFill_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsSolidFill_obj > _hx_result = new GraphicsSolidFill_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GraphicsSolidFill_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fa34595;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsSolidFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsSolidFill_obj > GraphicsSolidFill_obj::__new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha) {
	::hx::ObjectPtr< GraphicsSolidFill_obj > __this = new GraphicsSolidFill_obj();
	__this->__construct(__o_color,__o_alpha);
	return __this;
}

::hx::ObjectPtr< GraphicsSolidFill_obj > GraphicsSolidFill_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha) {
	GraphicsSolidFill_obj *__this = (GraphicsSolidFill_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsSolidFill_obj), false, "openfl.display.GraphicsSolidFill"));
	*(void **)__this = GraphicsSolidFill_obj::_hx_vtable;
	__this->__construct(__o_color,__o_alpha);
	return __this;
}

GraphicsSolidFill_obj::GraphicsSolidFill_obj()
{
}

::hx::Val GraphicsSolidFill_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return ::hx::Val( _hx___graphicsFillType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsSolidFill_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsSolidFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	outFields->push(HX_("__graphicsFillType",e8,75,eb,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsSolidFill_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GraphicsSolidFill_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsInt,(int)offsetof(GraphicsSolidFill_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsInt,(int)offsetof(GraphicsSolidFill_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{::hx::fsInt,(int)offsetof(GraphicsSolidFill_obj,_hx___graphicsFillType),HX_("__graphicsFillType",e8,75,eb,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsSolidFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsSolidFill_obj_sMemberFields[] = {
	HX_("alpha",5e,a7,96,21),
	HX_("color",63,71,5c,4a),
	HX_("__graphicsDataType",0f,5d,4d,46),
	HX_("__graphicsFillType",e8,75,eb,27),
	::String(null()) };

::hx::Class GraphicsSolidFill_obj::__mClass;

void GraphicsSolidFill_obj::__register()
{
	GraphicsSolidFill_obj _hx_dummy;
	GraphicsSolidFill_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsSolidFill",59,0a,d8,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsSolidFill_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsSolidFill_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsSolidFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsSolidFill_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

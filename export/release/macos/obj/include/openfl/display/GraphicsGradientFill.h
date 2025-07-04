// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#define INCLUDED_openfl_display_GraphicsGradientFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,GraphicsGradientFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsGradientFill_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GraphicsGradientFill_obj OBJ_;
		GraphicsGradientFill_obj();

	public:
		enum { _hx_ClassId = 0x1a0495e4 };

		void __construct( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,::hx::Null< Float >  __o_focalPointRatio);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsGradientFill")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.GraphicsGradientFill"); }
		static ::hx::ObjectPtr< GraphicsGradientFill_obj > __new( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,::hx::Null< Float >  __o_focalPointRatio);
		static ::hx::ObjectPtr< GraphicsGradientFill_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,::hx::Null< Float >  __o_focalPointRatio);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsGradientFill_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("GraphicsGradientFill",1e,22,2d,41); }

		::Array< Float > alphas;
		::Array< int > colors;
		Float focalPointRatio;
		 ::Dynamic interpolationMethod;
		 ::openfl::geom::Matrix matrix;
		::Array< int > ratios;
		 ::Dynamic spreadMethod;
		 ::Dynamic type;
		int _hx___graphicsDataType;
		int _hx___graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsGradientFill */ 

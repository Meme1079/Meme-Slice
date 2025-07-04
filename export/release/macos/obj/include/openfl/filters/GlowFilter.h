// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_filters_GlowFilter
#define INCLUDED_openfl_filters_GlowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS2(openfl,filters,GlowFilter)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,BlurAlphaShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,CombineKnockoutShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,CombineShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,InnerCombineKnockoutShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,InnerCombineShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,InvertAlphaShader)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES GlowFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef GlowFilter_obj OBJ_;
		GlowFilter_obj();

	public:
		enum { _hx_ClassId = 0x1560c0a0 };

		void __construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.GlowFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters.GlowFilter"); }
		static ::hx::ObjectPtr< GlowFilter_obj > __new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout);
		static ::hx::ObjectPtr< GlowFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlowFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlowFilter",45,ce,a2,2d); }

		static void __boot();
		static  ::openfl::filters::_GlowFilter::InvertAlphaShader _hx___invertAlphaShader;
		static  ::openfl::filters::_GlowFilter::BlurAlphaShader _hx___blurAlphaShader;
		static  ::openfl::filters::_GlowFilter::CombineShader _hx___combineShader;
		static  ::openfl::filters::_GlowFilter::InnerCombineShader _hx___innerCombineShader;
		static  ::openfl::filters::_GlowFilter::CombineKnockoutShader _hx___combineKnockoutShader;
		static  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader _hx___innerCombineKnockoutShader;
		Float _hx___alpha;
		Float _hx___blurX;
		Float _hx___blurY;
		int _hx___color;
		int _hx___horizontalPasses;
		bool _hx___inner;
		bool _hx___knockout;
		int _hx___quality;
		Float _hx___strength;
		int _hx___verticalPasses;
		 ::openfl::filters::BitmapFilter clone();

		 ::openfl::display::BitmapData _hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint);

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData);

		void _hx___updateSize();
		::Dynamic _hx___updateSize_dyn();

		void _hx___calculateNumShaderPasses();
		::Dynamic _hx___calculateNumShaderPasses_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		Float get_blurX();
		::Dynamic get_blurX_dyn();

		Float set_blurX(Float value);
		::Dynamic set_blurX_dyn();

		Float get_blurY();
		::Dynamic get_blurY_dyn();

		Float set_blurY(Float value);
		::Dynamic set_blurY_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		bool get_inner();
		::Dynamic get_inner_dyn();

		bool set_inner(bool value);
		::Dynamic set_inner_dyn();

		bool get_knockout();
		::Dynamic get_knockout_dyn();

		bool set_knockout(bool value);
		::Dynamic set_knockout_dyn();

		int get_quality();
		::Dynamic get_quality_dyn();

		int set_quality(int value);
		::Dynamic set_quality_dyn();

		Float get_strength();
		::Dynamic get_strength_dyn();

		Float set_strength(Float value);
		::Dynamic set_strength_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_GlowFilter */ 

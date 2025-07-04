// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#define INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_ColorMatrixFilter,ColorMatrixShader)

namespace openfl{
namespace filters{
namespace _ColorMatrixFilter{


class HXCPP_CLASS_ATTRIBUTES ColorMatrixShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef ColorMatrixShader_obj OBJ_;
		ColorMatrixShader_obj();

	public:
		enum { _hx_ClassId = 0x39fae001 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._ColorMatrixFilter.ColorMatrixShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters._ColorMatrixFilter.ColorMatrixShader"); }
		static ::hx::ObjectPtr< ColorMatrixShader_obj > __new();
		static ::hx::ObjectPtr< ColorMatrixShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorMatrixShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorMatrixShader",29,96,47,e8); }

		static void __boot();
		static  ::Dynamic __meta__;
		void init(::Array< Float > matrix);
		::Dynamic init_dyn();

		 ::openfl::display::ShaderParameter_Float uMultipliers;
		 ::openfl::display::ShaderParameter_Float uOffsets;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _ColorMatrixFilter

#endif /* INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader */ 

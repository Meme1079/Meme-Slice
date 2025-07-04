// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics_ImageBuffer
#define INCLUDED_lime_graphics_ImageBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES ImageBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageBuffer_obj OBJ_;
		ImageBuffer_obj();

	public:
		enum { _hx_ClassId = 0x0cfba98f };

		void __construct( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_bitsPerPixel, ::Dynamic format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.ImageBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.graphics.ImageBuffer"); }
		static ::hx::ObjectPtr< ImageBuffer_obj > __new( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_bitsPerPixel, ::Dynamic format);
		static ::hx::ObjectPtr< ImageBuffer_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_bitsPerPixel, ::Dynamic format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageBuffer",9b,5e,07,fd); }

		int bitsPerPixel;
		 ::lime::utils::ArrayBufferView data;
		int format;
		int height;
		bool premultiplied;
		bool transparent;
		int width;
		 ::Dynamic _hx___srcBitmapData;
		 ::Dynamic _hx___srcCanvas;
		 ::Dynamic _hx___srcContext;
		 ::Dynamic _hx___srcCustom;
		 ::Dynamic _hx___srcImage;
		 ::Dynamic _hx___srcImageData;
		 ::lime::graphics::ImageBuffer clone();
		::Dynamic clone_dyn();

		 ::Dynamic get_src();
		::Dynamic get_src_dyn();

		 ::Dynamic set_src( ::Dynamic value);
		::Dynamic set_src_dyn();

		int get_stride();
		::Dynamic get_stride_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ImageBuffer */ 

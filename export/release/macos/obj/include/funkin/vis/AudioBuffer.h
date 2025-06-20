// Generated by Haxe 4.3.7
#ifndef INCLUDED_funkin_vis_AudioBuffer
#define INCLUDED_funkin_vis_AudioBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(funkin,vis,AudioBuffer)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace funkin{
namespace vis{


class HXCPP_CLASS_ATTRIBUTES AudioBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AudioBuffer_obj OBJ_;
		AudioBuffer_obj();

	public:
		enum { _hx_ClassId = 0x192ff1a7 };

		void __construct( ::lime::utils::ArrayBufferView data,Float sampleRate);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="funkin.vis.AudioBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"funkin.vis.AudioBuffer"); }
		static ::hx::ObjectPtr< AudioBuffer_obj > __new( ::lime::utils::ArrayBufferView data,Float sampleRate);
		static ::hx::ObjectPtr< AudioBuffer_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::utils::ArrayBufferView data,Float sampleRate);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AudioBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AudioBuffer",56,86,77,83); }

		 ::lime::utils::ArrayBufferView data;
		Float sampleRate;
};

} // end namespace funkin
} // end namespace vis

#endif /* INCLUDED_funkin_vis_AudioBuffer */ 

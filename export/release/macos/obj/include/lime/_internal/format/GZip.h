// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime__internal_format_GZip
#define INCLUDED_lime__internal_format_GZip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,GZip)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES GZip_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GZip_obj OBJ_;
		GZip_obj();

	public:
		enum { _hx_ClassId = 0x7f2141c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.GZip")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.format.GZip"); }

		inline static ::hx::ObjectPtr< GZip_obj > __new() {
			::hx::ObjectPtr< GZip_obj > __this = new GZip_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GZip_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GZip_obj *__this = (GZip_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GZip_obj), false, "lime._internal.format.GZip"));
			*(void **)__this = GZip_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GZip_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GZip",da,cc,32,2f); }

		static  ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static ::Dynamic compress_dyn();

		static  ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static ::Dynamic decompress_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_GZip */ 

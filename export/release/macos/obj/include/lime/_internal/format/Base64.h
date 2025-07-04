// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime__internal_format_Base64
#define INCLUDED_lime__internal_format_Base64

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,Base64)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES Base64_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Base64_obj OBJ_;
		Base64_obj();

	public:
		enum { _hx_ClassId = 0x13e2a8e1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.Base64")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.format.Base64"); }

		inline static ::hx::ObjectPtr< Base64_obj > __new() {
			::hx::ObjectPtr< Base64_obj > __this = new Base64_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Base64_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Base64_obj *__this = (Base64_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Base64_obj), false, "lime._internal.format.Base64"));
			*(void **)__this = Base64_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Base64_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Base64",af,71,bc,89); }

		static void __boot();
		static ::Array< ::String > DICTIONARY;
		static ::Array< ::String > EXTENDED_DICTIONARY;
		static  ::haxe::io::Bytes decode(::String source);
		static ::Dynamic decode_dyn();

		static ::String encode( ::haxe::io::Bytes source);
		static ::Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_Base64 */ 

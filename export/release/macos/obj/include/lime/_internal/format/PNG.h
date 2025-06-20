// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime__internal_format_PNG
#define INCLUDED_lime__internal_format_PNG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,PNG)
HX_DECLARE_CLASS2(lime,graphics,Image)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES PNG_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PNG_obj OBJ_;
		PNG_obj();

	public:
		enum { _hx_ClassId = 0x13554f4f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.PNG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.format.PNG"); }

		inline static ::hx::ObjectPtr< PNG_obj > __new() {
			::hx::ObjectPtr< PNG_obj > __this = new PNG_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PNG_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PNG_obj *__this = (PNG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PNG_obj), false, "lime._internal.format.PNG"));
			*(void **)__this = PNG_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PNG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PNG",89,f8,3c,00); }

		static  ::lime::graphics::Image decodeBytes( ::haxe::io::Bytes bytes,::hx::Null< bool >  decodeData);
		static ::Dynamic decodeBytes_dyn();

		static  ::lime::graphics::Image decodeFile(::String path,::hx::Null< bool >  decodeData);
		static ::Dynamic decodeFile_dyn();

		static  ::haxe::io::Bytes encode( ::lime::graphics::Image image);
		static ::Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_PNG */ 

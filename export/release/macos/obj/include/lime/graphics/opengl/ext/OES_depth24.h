// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth24
#define INCLUDED_lime_graphics_opengl_ext_OES_depth24

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f8d54f752c084853_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_depth24)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_depth24_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_depth24_obj OBJ_;
		OES_depth24_obj();

	public:
		enum { _hx_ClassId = 0x43157935 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_depth24")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_depth24"); }

		inline static ::hx::ObjectPtr< OES_depth24_obj > __new() {
			::hx::ObjectPtr< OES_depth24_obj > __this = new OES_depth24_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_depth24_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_depth24_obj *__this = (OES_depth24_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_depth24_obj), false, "lime.graphics.opengl.ext.OES_depth24"));
			*(void **)__this = OES_depth24_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f8d54f752c084853_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::OES_depth24)(__this) )->DEPTH_COMPONENT24_OES = 33190;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_depth24_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_depth24",83,70,fd,a0); }

		int DEPTH_COMPONENT24_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_depth24 */ 

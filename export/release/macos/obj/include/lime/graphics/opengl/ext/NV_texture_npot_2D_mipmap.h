// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_texture_npot_2D_mipmap
#define INCLUDED_lime_graphics_opengl_ext_NV_texture_npot_2D_mipmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4e1ebca46ecf80ff_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_texture_npot_2D_mipmap)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_texture_npot_2D_mipmap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_texture_npot_2D_mipmap_obj OBJ_;
		NV_texture_npot_2D_mipmap_obj();

	public:
		enum { _hx_ClassId = 0x3943dc46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_texture_npot_2D_mipmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_texture_npot_2D_mipmap"); }

		inline static ::hx::ObjectPtr< NV_texture_npot_2D_mipmap_obj > __new() {
			::hx::ObjectPtr< NV_texture_npot_2D_mipmap_obj > __this = new NV_texture_npot_2D_mipmap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_texture_npot_2D_mipmap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_texture_npot_2D_mipmap_obj *__this = (NV_texture_npot_2D_mipmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_texture_npot_2D_mipmap_obj), false, "lime.graphics.opengl.ext.NV_texture_npot_2D_mipmap"));
			*(void **)__this = NV_texture_npot_2D_mipmap_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4e1ebca46ecf80ff_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_texture_npot_2D_mipmap_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_texture_npot_2D_mipmap",78,dc,c7,30); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_texture_npot_2D_mipmap */ 

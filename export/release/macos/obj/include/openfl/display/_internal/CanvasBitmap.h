// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_CanvasBitmap
#define INCLUDED_openfl_display__internal_CanvasBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasBitmap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasBitmap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasBitmap_obj OBJ_;
		CanvasBitmap_obj();

	public:
		enum { _hx_ClassId = 0x0d80ad31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasBitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasBitmap"); }

		inline static ::hx::ObjectPtr< CanvasBitmap_obj > __new() {
			::hx::ObjectPtr< CanvasBitmap_obj > __this = new CanvasBitmap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasBitmap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasBitmap_obj *__this = (CanvasBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasBitmap_obj), false, "openfl.display._internal.CanvasBitmap"));
			*(void **)__this = CanvasBitmap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasBitmap",07,57,88,64); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasBitmap */ 

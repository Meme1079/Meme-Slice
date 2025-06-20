// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_DOMBitmap
#define INCLUDED_openfl_display__internal_DOMBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMBitmap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMBitmap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMBitmap_obj OBJ_;
		DOMBitmap_obj();

	public:
		enum { _hx_ClassId = 0x72dce387 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMBitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMBitmap"); }

		inline static ::hx::ObjectPtr< DOMBitmap_obj > __new() {
			::hx::ObjectPtr< DOMBitmap_obj > __this = new DOMBitmap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMBitmap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMBitmap_obj *__this = (DOMBitmap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMBitmap_obj), false, "openfl.display._internal.DOMBitmap"));
			*(void **)__this = DOMBitmap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMBitmap",f1,57,46,56); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void clear( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void render( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderCanvas( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderCanvas_dyn();

		static void renderDrawable( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

		static void renderImage( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderImage_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMBitmap */ 

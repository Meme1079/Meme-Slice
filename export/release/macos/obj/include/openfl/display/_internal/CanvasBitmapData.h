// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_CanvasBitmapData
#define INCLUDED_openfl_display__internal_CanvasBitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasBitmapData)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasBitmapData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasBitmapData_obj OBJ_;
		CanvasBitmapData_obj();

	public:
		enum { _hx_ClassId = 0x760c935f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasBitmapData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasBitmapData"); }

		inline static ::hx::ObjectPtr< CanvasBitmapData_obj > __new() {
			::hx::ObjectPtr< CanvasBitmapData_obj > __this = new CanvasBitmapData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasBitmapData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasBitmapData_obj *__this = (CanvasBitmapData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasBitmapData_obj), false, "openfl.display._internal.CanvasBitmapData"));
			*(void **)__this = CanvasBitmapData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasBitmapData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasBitmapData",d1,68,0a,5a); }

		static void renderDrawable( ::openfl::display::BitmapData bitmapData, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::BitmapData bitmapData, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasBitmapData */ 

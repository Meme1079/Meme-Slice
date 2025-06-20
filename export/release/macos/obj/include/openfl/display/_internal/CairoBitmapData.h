// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_CairoBitmapData
#define INCLUDED_openfl_display__internal_CairoBitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS3(openfl,display,_internal,CairoBitmapData)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CairoBitmapData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoBitmapData_obj OBJ_;
		CairoBitmapData_obj();

	public:
		enum { _hx_ClassId = 0x461ecd73 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CairoBitmapData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CairoBitmapData"); }

		inline static ::hx::ObjectPtr< CairoBitmapData_obj > __new() {
			::hx::ObjectPtr< CairoBitmapData_obj > __this = new CairoBitmapData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoBitmapData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoBitmapData_obj *__this = (CairoBitmapData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoBitmapData_obj), false, "openfl.display._internal.CairoBitmapData"));
			*(void **)__this = CairoBitmapData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoBitmapData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoBitmapData",41,ec,9b,af); }

		static void renderDrawable( ::openfl::display::BitmapData bitmapData, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CairoBitmapData */ 

// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_CanvasSimpleButton
#define INCLUDED_openfl_display__internal_CanvasSimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasSimpleButton)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasSimpleButton_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasSimpleButton_obj OBJ_;
		CanvasSimpleButton_obj();

	public:
		enum { _hx_ClassId = 0x73110686 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasSimpleButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasSimpleButton"); }

		inline static ::hx::ObjectPtr< CanvasSimpleButton_obj > __new() {
			::hx::ObjectPtr< CanvasSimpleButton_obj > __this = new CanvasSimpleButton_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasSimpleButton_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasSimpleButton_obj *__this = (CanvasSimpleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasSimpleButton_obj), false, "openfl.display._internal.CanvasSimpleButton"));
			*(void **)__this = CanvasSimpleButton_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasSimpleButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasSimpleButton",dc,b4,ae,b7); }

		static void renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasSimpleButton */ 

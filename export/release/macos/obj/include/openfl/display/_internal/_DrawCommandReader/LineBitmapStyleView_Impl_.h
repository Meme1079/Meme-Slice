// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_LineBitmapStyleView_Impl_
#define INCLUDED_openfl_display__internal__DrawCommandReader_LineBitmapStyleView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,display,_internal,_DrawCommandReader,LineBitmapStyleView_Impl_)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES LineBitmapStyleView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LineBitmapStyleView_Impl__obj OBJ_;
		LineBitmapStyleView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x60f45492 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_"); }

		inline static ::hx::ObjectPtr< LineBitmapStyleView_Impl__obj > __new() {
			::hx::ObjectPtr< LineBitmapStyleView_Impl__obj > __this = new LineBitmapStyleView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LineBitmapStyleView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			LineBitmapStyleView_Impl__obj *__this = (LineBitmapStyleView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineBitmapStyleView_Impl__obj), false, "openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_"));
			*(void **)__this = LineBitmapStyleView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineBitmapStyleView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineBitmapStyleView_Impl_",73,b1,c8,6b); }

		static  ::openfl::display::_internal::DrawCommandReader _new( ::openfl::display::_internal::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::display::BitmapData get_bitmap( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_bitmap_dyn();

		static  ::openfl::geom::Matrix get_matrix( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_matrix_dyn();

		static bool get_repeat( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_repeat_dyn();

		static bool get_smooth( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_smooth_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl_display__internal__DrawCommandReader_LineBitmapStyleView_Impl_ */ 

// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_system_Clipboard
#define INCLUDED_lime_system_Clipboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,_hx_system,Clipboard)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Clipboard_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Clipboard_obj OBJ_;
		Clipboard_obj();

	public:
		enum { _hx_ClassId = 0x4d7fe0f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.Clipboard")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system.Clipboard"); }

		inline static ::hx::ObjectPtr< Clipboard_obj > __new() {
			::hx::ObjectPtr< Clipboard_obj > __this = new Clipboard_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Clipboard_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Clipboard_obj *__this = (Clipboard_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Clipboard_obj), false, "lime.system.Clipboard"));
			*(void **)__this = Clipboard_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Clipboard_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Clipboard",b6,45,aa,e3); }

		static void __boot();
		static  ::lime::app::_Event_Void_Void onUpdate;
		static ::String _text;
		static bool _hx___updated;
		static void _hx___update();
		static ::Dynamic _hx___update_dyn();

		static ::String get_text();
		static ::Dynamic get_text_dyn();

		static ::String set_text(::String value);
		static ::Dynamic set_text_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Clipboard */ 

// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display_Application
#define INCLUDED_openfl_display_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,Application)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Application_obj : public  ::lime::app::Application_obj
{
	public:
		typedef  ::lime::app::Application_obj super;
		typedef Application_obj OBJ_;
		Application_obj();

	public:
		enum { _hx_ClassId = 0x169c11fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Application")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Application"); }
		static ::hx::ObjectPtr< Application_obj > __new();
		static ::hx::ObjectPtr< Application_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Application",30,43,71,0e); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::lime::ui::Window createWindow( ::Dynamic attributes);

		int exec();

		void _hx___checkForAllWindowsClosed();

		void _hx___onModuleExit(int code);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Application */ 

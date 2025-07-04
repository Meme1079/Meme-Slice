// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#define INCLUDED_lime__internal_backend_native_NativeWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,_hx_system,DisplayMode)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeWindow_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeWindow_obj OBJ_;
		NativeWindow_obj();

	public:
		enum { _hx_ClassId = 0x01d779fb };

		void __construct( ::lime::ui::Window parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.NativeWindow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.NativeWindow"); }
		static ::hx::ObjectPtr< NativeWindow_obj > __new( ::lime::ui::Window parent);
		static ::hx::ObjectPtr< NativeWindow_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::ui::Window parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeWindow",07,e9,b5,cf); }

		 ::Dynamic handle;
		bool closing;
		 ::lime::ui::MouseCursor cursor;
		 ::lime::_hx_system::DisplayMode displayMode;
		Float frameRate;
		bool mouseLock;
		 ::lime::ui::Window parent;
		bool useHardware;
		 ::Dynamic cacheLock;
		 ::lime::graphics::cairo::Cairo cairo;
		 ::Dynamic primarySurface;
		void alert(::String message,::String title);
		::Dynamic alert_dyn();

		void close();
		::Dynamic close_dyn();

		void contextFlip();
		::Dynamic contextFlip_dyn();

		void focus();
		::Dynamic focus_dyn();

		 ::lime::ui::MouseCursor getCursor();
		::Dynamic getCursor_dyn();

		 ::lime::_hx_system::Display getDisplay();
		::Dynamic getDisplay_dyn();

		 ::lime::_hx_system::DisplayMode getDisplayMode();
		::Dynamic getDisplayMode_dyn();

		Float getFrameRate();
		::Dynamic getFrameRate_dyn();

		bool getMouseLock();
		::Dynamic getMouseLock_dyn();

		Float getOpacity();
		::Dynamic getOpacity_dyn();

		bool getTextInputEnabled();
		::Dynamic getTextInputEnabled_dyn();

		void move(int x,int y);
		::Dynamic move_dyn();

		 ::lime::graphics::Image readPixels( ::lime::math::Rectangle rect);
		::Dynamic readPixels_dyn();

		void render();
		::Dynamic render_dyn();

		void resize(int width,int height);
		::Dynamic resize_dyn();

		void setMinSize(int width,int height);
		::Dynamic setMinSize_dyn();

		void setMaxSize(int width,int height);
		::Dynamic setMaxSize_dyn();

		bool setBorderless(bool value);
		::Dynamic setBorderless_dyn();

		 ::lime::ui::MouseCursor setCursor( ::lime::ui::MouseCursor value);
		::Dynamic setCursor_dyn();

		 ::lime::_hx_system::DisplayMode setDisplayMode( ::lime::_hx_system::DisplayMode value);
		::Dynamic setDisplayMode_dyn();

		bool setMouseLock(bool value);
		::Dynamic setMouseLock_dyn();

		bool setTextInputEnabled(bool value);
		::Dynamic setTextInputEnabled_dyn();

		 ::lime::math::Rectangle setTextInputRect( ::lime::math::Rectangle value);
		::Dynamic setTextInputRect_dyn();

		Float setFrameRate(Float value);
		::Dynamic setFrameRate_dyn();

		bool setFullscreen(bool value);
		::Dynamic setFullscreen_dyn();

		void setIcon( ::lime::graphics::Image image);
		::Dynamic setIcon_dyn();

		bool setMaximized(bool value);
		::Dynamic setMaximized_dyn();

		bool setMinimized(bool value);
		::Dynamic setMinimized_dyn();

		void setOpacity(Float value);
		::Dynamic setOpacity_dyn();

		bool setResizable(bool value);
		::Dynamic setResizable_dyn();

		::String setTitle(::String value);
		::Dynamic setTitle_dyn();

		bool setVisible(bool value);
		::Dynamic setVisible_dyn();

		void warpMouse(int x,int y);
		::Dynamic warpMouse_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeWindow */ 

// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_net_URLRequestDefaults
#define INCLUDED_openfl_net_URLRequestDefaults

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,URLRequestDefaults)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES URLRequestDefaults_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef URLRequestDefaults_obj OBJ_;
		URLRequestDefaults_obj();

	public:
		enum { _hx_ClassId = 0x52b8a8ff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.net.URLRequestDefaults")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.net.URLRequestDefaults"); }

		inline static ::hx::ObjectPtr< URLRequestDefaults_obj > __new() {
			::hx::ObjectPtr< URLRequestDefaults_obj > __this = new URLRequestDefaults_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< URLRequestDefaults_obj > __alloc(::hx::Ctx *_hx_ctx) {
			URLRequestDefaults_obj *__this = (URLRequestDefaults_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(URLRequestDefaults_obj), false, "openfl.net.URLRequestDefaults"));
			*(void **)__this = URLRequestDefaults_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~URLRequestDefaults_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("URLRequestDefaults",72,a4,e6,e4); }

		static void __boot();
		static bool followRedirects;
		static Float idleTimeout;
		static bool manageCookies;
		static ::String userAgent;
};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLRequestDefaults */ 

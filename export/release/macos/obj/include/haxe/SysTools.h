// Generated by Haxe 4.3.7
#ifndef INCLUDED_haxe_SysTools
#define INCLUDED_haxe_SysTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,SysTools)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES SysTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SysTools_obj OBJ_;
		SysTools_obj();

	public:
		enum { _hx_ClassId = 0x40b83714 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.SysTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.SysTools"); }

		inline static ::hx::ObjectPtr< SysTools_obj > __new() {
			::hx::ObjectPtr< SysTools_obj > __this = new SysTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SysTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SysTools_obj *__this = (SysTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SysTools_obj), false, "haxe.SysTools"));
			*(void **)__this = SysTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SysTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SysTools",ee,a1,66,d5); }

		static void __boot();
		static ::Array< int > winMetaCharacters;
		static ::String quoteUnixArg(::String argument);
		static ::Dynamic quoteUnixArg_dyn();

		static ::String quoteWinArg(::String argument,bool escapeMetaCharacters);
		static ::Dynamic quoteWinArg_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_SysTools */ 

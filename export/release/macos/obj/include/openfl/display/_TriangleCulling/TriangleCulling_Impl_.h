// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_
#define INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_TriangleCulling,TriangleCulling_Impl_)

namespace openfl{
namespace display{
namespace _TriangleCulling{


class HXCPP_CLASS_ATTRIBUTES TriangleCulling_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TriangleCulling_Impl__obj OBJ_;
		TriangleCulling_Impl__obj();

	public:
		enum { _hx_ClassId = 0x74070d15 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._TriangleCulling.TriangleCulling_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._TriangleCulling.TriangleCulling_Impl_"); }

		inline static ::hx::ObjectPtr< TriangleCulling_Impl__obj > __new() {
			::hx::ObjectPtr< TriangleCulling_Impl__obj > __this = new TriangleCulling_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TriangleCulling_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TriangleCulling_Impl__obj *__this = (TriangleCulling_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TriangleCulling_Impl__obj), false, "openfl.display._TriangleCulling.TriangleCulling_Impl_"));
			*(void **)__this = TriangleCulling_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TriangleCulling_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TriangleCulling_Impl_",08,b7,72,ec); }

		static void __boot();
		static  ::Dynamic NEGATIVE;
		static  ::Dynamic NONE;
		static  ::Dynamic POSITIVE;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _TriangleCulling

#endif /* INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_ */ 

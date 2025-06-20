// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#define INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_hx_system,_CFFIPointer,CFFIPointer_Impl_)

namespace lime{
namespace _hx_system{
namespace _CFFIPointer{


class HXCPP_CLASS_ATTRIBUTES CFFIPointer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CFFIPointer_Impl__obj OBJ_;
		CFFIPointer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x095ae2e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system._CFFIPointer.CFFIPointer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system._CFFIPointer.CFFIPointer_Impl_"); }

		inline static ::hx::ObjectPtr< CFFIPointer_Impl__obj > __new() {
			::hx::ObjectPtr< CFFIPointer_Impl__obj > __this = new CFFIPointer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CFFIPointer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CFFIPointer_Impl__obj *__this = (CFFIPointer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CFFIPointer_Impl__obj), false, "lime.system._CFFIPointer.CFFIPointer_Impl_"));
			*(void **)__this = CFFIPointer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CFFIPointer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CFFIPointer_Impl_",97,a2,f9,bd); }

		static  ::Dynamic _new( ::Dynamic handle);
		static ::Dynamic _new_dyn();

		static Float get( ::Dynamic this1);
		static ::Dynamic get_dyn();

		static bool equals( ::Dynamic a,int b);
		static ::Dynamic equals_dyn();

		static bool equalsPointer( ::Dynamic a, ::Dynamic b);
		static ::Dynamic equalsPointer_dyn();

		static bool greaterThan( ::Dynamic a,int b);
		static ::Dynamic greaterThan_dyn();

		static bool greaterThanPointer( ::Dynamic a, ::Dynamic b);
		static ::Dynamic greaterThanPointer_dyn();

		static bool greaterThanOrEqual( ::Dynamic a,int b);
		static ::Dynamic greaterThanOrEqual_dyn();

		static bool greaterThanOrEqualPointer( ::Dynamic a, ::Dynamic b);
		static ::Dynamic greaterThanOrEqualPointer_dyn();

		static bool lessThan( ::Dynamic a,int b);
		static ::Dynamic lessThan_dyn();

		static bool lessThanPointer( ::Dynamic a, ::Dynamic b);
		static ::Dynamic lessThanPointer_dyn();

		static bool lessThanOrEqual( ::Dynamic a,int b);
		static ::Dynamic lessThanOrEqual_dyn();

		static bool lessThanOrEqualPointer( ::Dynamic a, ::Dynamic b);
		static ::Dynamic lessThanOrEqualPointer_dyn();

		static bool notEquals( ::Dynamic a,int b);
		static ::Dynamic notEquals_dyn();

		static bool notEqualsPointer( ::Dynamic a, ::Dynamic b);
		static ::Dynamic notEqualsPointer_dyn();

};

} // end namespace lime
} // end namespace system
} // end namespace _CFFIPointer

#endif /* INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_ */ 

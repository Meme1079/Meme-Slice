// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_errors_RangeError
#define INCLUDED_openfl_errors_RangeError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,RangeError)

namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES RangeError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef RangeError_obj OBJ_;
		RangeError_obj();

	public:
		enum { _hx_ClassId = 0x5467b8e6 };

		void __construct(::String __o_message);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.errors.RangeError")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.errors.RangeError"); }
		static ::hx::ObjectPtr< RangeError_obj > __new(::String __o_message);
		static ::hx::ObjectPtr< RangeError_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RangeError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RangeError",eb,ac,85,3c); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_RangeError */ 

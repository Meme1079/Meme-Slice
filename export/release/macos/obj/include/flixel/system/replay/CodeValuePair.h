// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#define INCLUDED_flixel_system_replay_CodeValuePair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0db6d6d8b03f35eb_11_new)
HX_DECLARE_CLASS3(flixel,_hx_system,replay,CodeValuePair)

namespace flixel{
namespace _hx_system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES CodeValuePair_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CodeValuePair_obj OBJ_;
		CodeValuePair_obj();

	public:
		enum { _hx_ClassId = 0x3927caec };

		void __construct(int code,int value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.replay.CodeValuePair")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.replay.CodeValuePair"); }

		inline static ::hx::ObjectPtr< CodeValuePair_obj > __new(int code,int value) {
			::hx::ObjectPtr< CodeValuePair_obj > __this = new CodeValuePair_obj();
			__this->__construct(code,value);
			return __this;
		}

		inline static ::hx::ObjectPtr< CodeValuePair_obj > __alloc(::hx::Ctx *_hx_ctx,int code,int value) {
			CodeValuePair_obj *__this = (CodeValuePair_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CodeValuePair_obj), false, "flixel.system.replay.CodeValuePair"));
			*(void **)__this = CodeValuePair_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0db6d6d8b03f35eb_11_new)
HXLINE(  12)		( ( ::flixel::_hx_system::replay::CodeValuePair)(__this) )->code = code;
HXLINE(  13)		( ( ::flixel::_hx_system::replay::CodeValuePair)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CodeValuePair_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CodeValuePair",1e,05,4e,30); }

		int code;
		int value;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_CodeValuePair */ 

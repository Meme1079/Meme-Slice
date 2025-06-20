// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime__internal_backend_native_MouseEventInfo
#define INCLUDED_lime__internal_backend_native_MouseEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3eb566585b06ea2e_797_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,MouseEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES MouseEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MouseEventInfo_obj OBJ_;
		MouseEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x41ab0347 };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_button,::hx::Null< Float >  __o_movementX,::hx::Null< Float >  __o_movementY,::hx::Null< int >  __o_clickCount);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.MouseEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.MouseEventInfo"); }

		inline static ::hx::ObjectPtr< MouseEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_button,::hx::Null< Float >  __o_movementX,::hx::Null< Float >  __o_movementY,::hx::Null< int >  __o_clickCount) {
			::hx::ObjectPtr< MouseEventInfo_obj > __this = new MouseEventInfo_obj();
			__this->__construct(type,__o_windowID,__o_x,__o_y,__o_button,__o_movementX,__o_movementY,__o_clickCount);
			return __this;
		}

		inline static ::hx::ObjectPtr< MouseEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_button,::hx::Null< Float >  __o_movementX,::hx::Null< Float >  __o_movementY,::hx::Null< int >  __o_clickCount) {
			MouseEventInfo_obj *__this = (MouseEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MouseEventInfo_obj), false, "lime._internal.backend.native.MouseEventInfo"));
			*(void **)__this = MouseEventInfo_obj::_hx_vtable;
{
            		int windowID = __o_windowID.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		int button = __o_button.Default(0);
            		Float movementX = __o_movementX.Default(0);
            		Float movementY = __o_movementY.Default(0);
            		int clickCount = __o_clickCount.Default(0);
            	HX_STACKFRAME(&_hx_pos_3eb566585b06ea2e_797_new)
HXLINE( 798)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 799)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->windowID = 0;
HXLINE( 800)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->x = x;
HXLINE( 801)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->y = y;
HXLINE( 802)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->button = button;
HXLINE( 803)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->movementX = movementX;
HXLINE( 804)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->movementY = movementY;
HXLINE( 805)		( ( ::lime::_internal::backend::native::MouseEventInfo)(__this) )->clickCount = clickCount;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MouseEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MouseEventInfo",e3,32,fc,30); }

		int button;
		Float movementX;
		Float movementY;
		int type;
		int windowID;
		Float x;
		Float y;
		int clickCount;
		 ::lime::_internal::backend::native::MouseEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_MouseEventInfo */ 

// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_events_Event
#define INCLUDED_openfl_events_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,events,Event)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES Event_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();

	public:
		enum { _hx_ClassId = 0x08ec4c31 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.Event")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.Event"); }
		static ::hx::ObjectPtr< Event_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< Event_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Event",fa,37,f2,08); }

		static void __boot();
		static ::String ACTIVATE;
		static ::String ADDED;
		static ::String ADDED_TO_STAGE;
		static ::String CANCEL;
		static ::String CHANGE;
		static ::String CLEAR;
		static ::String CLOSING;
		static ::String CLOSE;
		static ::String COMPLETE;
		static ::String CONNECT;
		static ::String CONTEXT3D_CREATE;
		static ::String COPY;
		static ::String CUT;
		static ::String DEACTIVATE;
		static ::String ENTER_FRAME;
		static ::String EXIT_FRAME;
		static ::String EXITING;
		static ::String FRAME_CONSTRUCTED;
		static ::String FRAME_LABEL;
		static ::String FULLSCREEN;
		static ::String ID3;
		static ::String INIT;
		static ::String MOUSE_LEAVE;
		static ::String OPEN;
		static ::String PASTE;
		static ::String REMOVED;
		static ::String REMOVED_FROM_STAGE;
		static ::String RENDER;
		static ::String RESIZE;
		static ::String SCROLL;
		static ::String SELECT;
		static ::String SELECT_ALL;
		static ::String SOUND_COMPLETE;
		static ::String TAB_CHILDREN_CHANGE;
		static ::String TAB_ENABLED_CHANGE;
		static ::String TAB_INDEX_CHANGE;
		static ::String TEXTURE_READY;
		static ::String UNLOAD;
		bool bubbles;
		bool cancelable;
		 ::Dynamic currentTarget;
		int eventPhase;
		 ::Dynamic target;
		::String type;
		bool _hx___isCanceled;
		bool _hx___isCanceledNow;
		bool _hx___preventDefault;
		virtual  ::openfl::events::Event clone();
		::Dynamic clone_dyn();

		::String formatToString(::String className,::String p1,::String p2,::String p3,::String p4,::String p5);
		::Dynamic formatToString_dyn();

		bool isDefaultPrevented();
		::Dynamic isDefaultPrevented_dyn();

		void preventDefault();
		::Dynamic preventDefault_dyn();

		void stopImmediatePropagation();
		::Dynamic stopImmediatePropagation_dyn();

		void stopPropagation();
		::Dynamic stopPropagation_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::String _hx___formatToString(::String className,::Array< ::String > parameters);
		::Dynamic _hx___formatToString_dyn();

		virtual void _hx___init();
		::Dynamic _hx___init_dyn();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_Event */ 

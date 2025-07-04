// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#define INCLUDED_openfl_events__EventDispatcher_DispatchIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,events,_EventDispatcher,DispatchIterator)
HX_DECLARE_CLASS3(openfl,events,_EventDispatcher,Listener)

namespace openfl{
namespace events{
namespace _EventDispatcher{


class HXCPP_CLASS_ATTRIBUTES DispatchIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DispatchIterator_obj OBJ_;
		DispatchIterator_obj();

	public:
		enum { _hx_ClassId = 0x35df4253 };

		void __construct(::Array< ::Dynamic> list);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events._EventDispatcher.DispatchIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events._EventDispatcher.DispatchIterator"); }
		static ::hx::ObjectPtr< DispatchIterator_obj > __new(::Array< ::Dynamic> list);
		static ::hx::ObjectPtr< DispatchIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> list);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DispatchIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DispatchIterator",e8,fa,8e,c6); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool active;
		int index;
		bool isCopy;
		::Array< ::Dynamic> list;
		void copy();
		::Dynamic copy_dyn();

		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::openfl::events::_EventDispatcher::Listener next();
		::Dynamic next_dyn();

		void remove( ::openfl::events::_EventDispatcher::Listener listener,int listIndex);
		::Dynamic remove_dyn();

		void reset(::Array< ::Dynamic> list);
		::Dynamic reset_dyn();

		void start();
		::Dynamic start_dyn();

		void stop();
		::Dynamic stop_dyn();

};

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher

#endif /* INCLUDED_openfl_events__EventDispatcher_DispatchIterator */ 

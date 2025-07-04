// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_util_IFlxSignal
#define INCLUDED_flixel_util_IFlxSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES IFlxSignal_obj {
	public:
		typedef  ::flixel::util::IFlxDestroyable_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxSignal_obj *>(_hx_.mPtr->_hx_getInterface(0x540588cf)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_add)( ::Dynamic listener); 
		static inline void add( ::Dynamic _hx_, ::Dynamic listener) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxSignal_obj *>(_hx_.mPtr->_hx_getInterface(0x540588cf)))->_hx_add)(listener);
		}
		void (::hx::Object :: *_hx_addOnce)( ::Dynamic listener); 
		static inline void addOnce( ::Dynamic _hx_, ::Dynamic listener) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxSignal_obj *>(_hx_.mPtr->_hx_getInterface(0x540588cf)))->_hx_addOnce)(listener);
		}
		void (::hx::Object :: *_hx_remove)( ::Dynamic listener); 
		static inline void remove( ::Dynamic _hx_, ::Dynamic listener) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxSignal_obj *>(_hx_.mPtr->_hx_getInterface(0x540588cf)))->_hx_remove)(listener);
		}
		void (::hx::Object :: *_hx_removeAll)(); 
		static inline void removeAll( ::Dynamic _hx_) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxSignal_obj *>(_hx_.mPtr->_hx_getInterface(0x540588cf)))->_hx_removeAll)();
		}
		bool (::hx::Object :: *_hx_has)( ::Dynamic listener); 
		static inline bool has( ::Dynamic _hx_, ::Dynamic listener) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxSignal_obj *>(_hx_.mPtr->_hx_getInterface(0x540588cf)))->_hx_has)(listener);
		}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxSignal */ 

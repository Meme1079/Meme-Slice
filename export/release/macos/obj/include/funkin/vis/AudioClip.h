// Generated by Haxe 4.3.7
#ifndef INCLUDED_funkin_vis_AudioClip
#define INCLUDED_funkin_vis_AudioClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(funkin,vis,AudioBuffer)
HX_DECLARE_CLASS2(funkin,vis,AudioClip)

namespace funkin{
namespace vis{


class HXCPP_CLASS_ATTRIBUTES AudioClip_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_currentFrame)(); 
		static inline int get_currentFrame( ::Dynamic _hx_) {
			#ifdef HXCPP_CHECK_POINTER
			if (::hx::IsNull(_hx_)) ::hx::NullReference("Object", false);
			#ifdef HXCPP_GC_CHECK_POINTER
				GCCheckPointer(_hx_.mPtr);
			#endif
			#endif
			return (_hx_.mPtr->*( ::hx::interface_cast< ::funkin::vis::AudioClip_obj *>(_hx_.mPtr->_hx_getInterface(0x5f4f18f7)))->_hx_get_currentFrame)();
		}
};

} // end namespace funkin
} // end namespace vis

#endif /* INCLUDED_funkin_vis_AudioClip */ 

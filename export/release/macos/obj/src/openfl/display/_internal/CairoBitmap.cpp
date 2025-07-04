// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoBitmap
#include <openfl/display/_internal/CairoBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_20658289bbbda224_23_render,"openfl.display._internal.CairoBitmap","render",0x201c5649,"openfl.display._internal.CairoBitmap.render","openfl/display/_internal/CairoBitmap.hx",23,0xbd8e8f46)
HX_LOCAL_STACK_FRAME(_hx_pos_20658289bbbda224_68_renderDrawable,"openfl.display._internal.CairoBitmap","renderDrawable",0x1fe3ef07,"openfl.display._internal.CairoBitmap.renderDrawable","openfl/display/_internal/CairoBitmap.hx",68,0xbd8e8f46)
HX_LOCAL_STACK_FRAME(_hx_pos_20658289bbbda224_96_renderDrawableMask,"openfl.display._internal.CairoBitmap","renderDrawableMask",0x4d04eb93,"openfl.display._internal.CairoBitmap.renderDrawableMask","openfl/display/_internal/CairoBitmap.hx",96,0xbd8e8f46)
HX_LOCAL_STACK_FRAME(_hx_pos_20658289bbbda224_20_boot,"openfl.display._internal.CairoBitmap","boot",0xe1e9bc65,"openfl.display._internal.CairoBitmap.boot","openfl/display/_internal/CairoBitmap.hx",20,0xbd8e8f46)
namespace openfl{
namespace display{
namespace _internal{

void CairoBitmap_obj::__construct() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return new CairoBitmap_obj; }

void *CairoBitmap_obj::_hx_vtable = 0;

Dynamic CairoBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoBitmap_obj > _hx_result = new CairoBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19587f8d;
}

void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_20658289bbbda224_23_render)
HXLINE(  25)		if (!(bitmap->_hx___renderable)) {
HXLINE(  25)			return;
            		}
HXLINE(  27)		Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		bool _hx_tmp1;
HXDLIN(  31)		if ((alpha > 0)) {
HXLINE(  31)			_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            		}
            		else {
HXLINE(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXLINE(  31)			_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  31)			_hx_tmp = false;
            		}
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  33)			 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  35)			renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  36)			renderer->_hx___pushMaskObject(bitmap,null());
HXLINE(  38)			renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXLINE(  40)			 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXLINE(  42)			if (::hx::IsNotNull( surface )) {
HXLINE(  44)				 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXLINE(  45)				int _hx_tmp2;
HXDLIN(  45)				bool _hx_tmp3;
HXDLIN(  45)				if (renderer->_hx___allowSmoothing) {
HXLINE(  45)					_hx_tmp3 = bitmap->smoothing;
            				}
            				else {
HXLINE(  45)					_hx_tmp3 = false;
            				}
HXDLIN(  45)				if (_hx_tmp3) {
HXLINE(  45)					_hx_tmp2 = 1;
            				}
            				else {
HXLINE(  45)					_hx_tmp2 = 3;
            				}
HXDLIN(  45)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp2);
HXLINE(  47)				cairo->set_source(pattern);
HXLINE(  49)				if ((alpha == 1)) {
HXLINE(  51)					cairo->paint();
            				}
            				else {
HXLINE(  55)					cairo->paintWithAlpha(alpha);
            				}
            			}
HXLINE(  59)			renderer->_hx___popMaskObject(bitmap,null());
HXLINE(  62)			renderer->_hx___setBlendMode(10);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))

void CairoBitmap_obj::renderDrawable( ::openfl::display::Bitmap bitmap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_20658289bbbda224_68_renderDrawable)
HXLINE(  70)		renderer->_hx___updateCacheBitmap(bitmap,false);
HXLINE(  72)		 ::openfl::display::BitmapData _hx___bitmapData = bitmap->_hx___bitmapData;
HXLINE(  73)		 ::openfl::display::Bitmap _hx___cacheBitmap = bitmap->_hx___cacheBitmap;
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if (::hx::IsNotNull( _hx___bitmapData )) {
HXLINE(  75)			_hx_tmp = ::hx::IsNotNull( _hx___bitmapData->image );
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  77)			bitmap->_hx___imageVersion = _hx___bitmapData->image->version;
            		}
HXLINE(  80)		bool _hx_tmp1;
HXDLIN(  80)		if (::hx::IsNotNull( _hx___cacheBitmap )) {
HXLINE(  80)			_hx_tmp1 = !(bitmap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  80)			_hx_tmp1 = false;
            		}
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  82)			if (_hx___cacheBitmap->_hx___renderable) {
HXLINE(  82)				Float alpha = renderer->_hx___getAlpha(_hx___cacheBitmap->_hx___worldAlpha);
HXDLIN(  82)				bool _hx_tmp2;
HXDLIN(  82)				bool _hx_tmp3;
HXDLIN(  82)				if ((alpha > 0)) {
HXLINE(  82)					_hx_tmp3 = ::hx::IsNotNull( _hx___cacheBitmap->_hx___bitmapData );
            				}
            				else {
HXLINE(  82)					_hx_tmp3 = false;
            				}
HXDLIN(  82)				if (_hx_tmp3) {
HXLINE(  82)					_hx_tmp2 = _hx___cacheBitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE(  82)					_hx_tmp2 = false;
            				}
HXDLIN(  82)				if (_hx_tmp2) {
HXLINE(  82)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN(  82)					renderer->_hx___setBlendMode(_hx___cacheBitmap->_hx___worldBlendMode);
HXDLIN(  82)					renderer->_hx___pushMaskObject(_hx___cacheBitmap,null());
HXDLIN(  82)					renderer->applyMatrix(_hx___cacheBitmap->_hx___renderTransform,cairo);
HXDLIN(  82)					 ::Dynamic surface = _hx___cacheBitmap->_hx___bitmapData->getSurface();
HXDLIN(  82)					if (::hx::IsNotNull( surface )) {
HXLINE(  82)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN(  82)						int _hx_tmp4;
HXDLIN(  82)						bool _hx_tmp5;
HXDLIN(  82)						if (renderer->_hx___allowSmoothing) {
HXLINE(  82)							_hx_tmp5 = _hx___cacheBitmap->smoothing;
            						}
            						else {
HXLINE(  82)							_hx_tmp5 = false;
            						}
HXDLIN(  82)						if (_hx_tmp5) {
HXLINE(  82)							_hx_tmp4 = 1;
            						}
            						else {
HXLINE(  82)							_hx_tmp4 = 3;
            						}
HXDLIN(  82)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp4);
HXDLIN(  82)						cairo->set_source(pattern);
HXDLIN(  82)						if ((alpha == 1)) {
HXLINE(  82)							cairo->paint();
            						}
            						else {
HXLINE(  82)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN(  82)					renderer->_hx___popMaskObject(_hx___cacheBitmap,null());
HXDLIN(  82)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE(  86)			::openfl::display::_internal::CairoDisplayObject_obj::render(bitmap,renderer);
HXLINE(  87)			if (bitmap->_hx___renderable) {
HXLINE(  87)				Float alpha1 = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN(  87)				bool _hx_tmp6;
HXDLIN(  87)				bool _hx_tmp7;
HXDLIN(  87)				if ((alpha1 > 0)) {
HXLINE(  87)					_hx_tmp7 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE(  87)					_hx_tmp7 = false;
            				}
HXDLIN(  87)				if (_hx_tmp7) {
HXLINE(  87)					_hx_tmp6 = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE(  87)					_hx_tmp6 = false;
            				}
HXDLIN(  87)				if (_hx_tmp6) {
HXLINE(  87)					 ::lime::graphics::cairo::Cairo cairo1 = renderer->cairo;
HXDLIN(  87)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN(  87)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN(  87)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo1);
HXDLIN(  87)					 ::Dynamic surface1 = bitmap->_hx___bitmapData->getSurface();
HXDLIN(  87)					if (::hx::IsNotNull( surface1 )) {
HXLINE(  87)						 ::Dynamic pattern1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface1);
HXDLIN(  87)						int _hx_tmp8;
HXDLIN(  87)						bool _hx_tmp9;
HXDLIN(  87)						if (renderer->_hx___allowSmoothing) {
HXLINE(  87)							_hx_tmp9 = bitmap->smoothing;
            						}
            						else {
HXLINE(  87)							_hx_tmp9 = false;
            						}
HXDLIN(  87)						if (_hx_tmp9) {
HXLINE(  87)							_hx_tmp8 = 1;
            						}
            						else {
HXLINE(  87)							_hx_tmp8 = 3;
            						}
HXDLIN(  87)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern1,_hx_tmp8);
HXDLIN(  87)						cairo1->set_source(pattern1);
HXDLIN(  87)						if ((alpha1 == 1)) {
HXLINE(  87)							cairo1->paint();
            						}
            						else {
HXLINE(  87)							cairo1->paintWithAlpha(alpha1);
            						}
            					}
HXDLIN(  87)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN(  87)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
HXLINE(  90)		renderer->_hx___renderEvent(bitmap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,renderDrawable,(void))

void CairoBitmap_obj::renderDrawableMask( ::openfl::display::Bitmap bitmap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_20658289bbbda224_96_renderDrawableMask)
HXDLIN(  96)		 ::lime::graphics::cairo::Cairo renderer1 = renderer->cairo;
HXDLIN(  96)		Float _hx_tmp = bitmap->get_width();
HXDLIN(  96)		renderer1->rectangle(( (Float)(0) ),( (Float)(0) ),_hx_tmp,bitmap->get_height());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,renderDrawableMask,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoBitmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoBitmap_obj::__mClass;

static ::String CairoBitmap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoBitmap_obj::__register()
{
	CairoBitmap_obj _hx_dummy;
	CairoBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoBitmap",1b,15,77,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoBitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoBitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_20658289bbbda224_20_boot)
HXDLIN(  20)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal

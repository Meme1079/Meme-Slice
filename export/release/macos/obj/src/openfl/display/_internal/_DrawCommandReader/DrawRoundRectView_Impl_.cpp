// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawRoundRectView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/DrawRoundRectView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_687__new,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","_new",0xe01c0383,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",687,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_696_get_x,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","get_x",0xcdb414ed,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_.get_x","openfl/display/_internal/DrawCommandReader.hx",696,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_703_get_y,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","get_y",0xcdb414ee,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_.get_y","openfl/display/_internal/DrawCommandReader.hx",703,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_710_get_width,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","get_width",0xe392a8fb,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_.get_width","openfl/display/_internal/DrawCommandReader.hx",710,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_717_get_height,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","get_height",0xf310ab52,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_.get_height","openfl/display/_internal/DrawCommandReader.hx",717,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_724_get_ellipseWidth,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","get_ellipseWidth",0xce7585f3,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_.get_ellipseWidth","openfl/display/_internal/DrawCommandReader.hx",724,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_be4aee84cbb90eeb_731_get_ellipseHeight,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_","get_ellipseHeight",0x8eaf275a,"openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_.get_ellipseHeight","openfl/display/_internal/DrawCommandReader.hx",731,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void DrawRoundRectView_Impl__obj::__construct() { }

Dynamic DrawRoundRectView_Impl__obj::__CreateEmpty() { return new DrawRoundRectView_Impl__obj; }

void *DrawRoundRectView_Impl__obj::_hx_vtable = 0;

Dynamic DrawRoundRectView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawRoundRectView_Impl__obj > _hx_result = new DrawRoundRectView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawRoundRectView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b798876;
}

 ::openfl::display::_internal::DrawCommandReader DrawRoundRectView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_687__new)
HXDLIN( 687)		return d;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,_new,return )

Float DrawRoundRectView_Impl__obj::get_x( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_696_get_x)
HXDLIN( 696)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_x,return )

Float DrawRoundRectView_Impl__obj::get_y( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_703_get_y)
HXDLIN( 703)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_y,return )

Float DrawRoundRectView_Impl__obj::get_width( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_710_get_width)
HXDLIN( 710)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_width,return )

Float DrawRoundRectView_Impl__obj::get_height( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_717_get_height)
HXDLIN( 717)		return this1->buffer->f->__get((this1->fPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_height,return )

Float DrawRoundRectView_Impl__obj::get_ellipseWidth( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_724_get_ellipseWidth)
HXDLIN( 724)		return this1->buffer->f->__get((this1->fPos + 4));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_ellipseWidth,return )

 ::Dynamic DrawRoundRectView_Impl__obj::get_ellipseHeight( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_be4aee84cbb90eeb_731_get_ellipseHeight)
HXDLIN( 731)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_ellipseHeight,return )


DrawRoundRectView_Impl__obj::DrawRoundRectView_Impl__obj()
{
}

bool DrawRoundRectView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ellipseWidth") ) { outValue = get_ellipseWidth_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_ellipseHeight") ) { outValue = get_ellipseHeight_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DrawRoundRectView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DrawRoundRectView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DrawRoundRectView_Impl__obj::__mClass;

static ::String DrawRoundRectView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_ellipseWidth",d1,ec,3a,6b),
	HX_("get_ellipseHeight",bc,c2,a3,1e),
	::String(null())
};

void DrawRoundRectView_Impl__obj::__register()
{
	DrawRoundRectView_Impl__obj _hx_dummy;
	DrawRoundRectView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.DrawRoundRectView_Impl_",8c,25,82,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawRoundRectView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawRoundRectView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DrawRoundRectView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawRoundRectView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawRoundRectView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

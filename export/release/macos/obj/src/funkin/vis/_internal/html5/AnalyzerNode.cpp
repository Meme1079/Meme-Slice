// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_funkin_vis_AudioClip
#include <funkin/vis/AudioClip.h>
#endif
#ifndef INCLUDED_funkin_vis__internal_html5_AnalyzerNode
#include <funkin/vis/_internal/html5/AnalyzerNode.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4efaa9b083bc17d2_25_new,"funkin.vis._internal.html5.AnalyzerNode","new",0x0b27e39b,"funkin.vis._internal.html5.AnalyzerNode.new","funkin/vis/_internal/html5/AnalyzerNode.hx",25,0xcc5ee571)
HX_LOCAL_STACK_FRAME(_hx_pos_4efaa9b083bc17d2_49_getFloatFrequencyData,"funkin.vis._internal.html5.AnalyzerNode","getFloatFrequencyData",0xc3e6bbdb,"funkin.vis._internal.html5.AnalyzerNode.getFloatFrequencyData","funkin/vis/_internal/html5/AnalyzerNode.hx",49,0xcc5ee571)
namespace funkin{
namespace vis{
namespace _internal{
namespace html5{

void AnalyzerNode_obj::__construct(::Dynamic audioClip){
            	HX_STACKFRAME(&_hx_pos_4efaa9b083bc17d2_25_new)
HXDLIN(  25)		::haxe::Log_obj::trace(HX_("Loading audioClip",02,34,c9,dd),::hx::SourceInfo(HX_("funkin/vis/_internal/html5/AnalyzerNode.hx",71,e5,5e,cc),25,HX_("funkin.vis._internal.html5.AnalyzerNode",29,7a,b9,9d),HX_("new",60,d0,53,00)));
            	}

Dynamic AnalyzerNode_obj::__CreateEmpty() { return new AnalyzerNode_obj; }

void *AnalyzerNode_obj::_hx_vtable = 0;

Dynamic AnalyzerNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnalyzerNode_obj > _hx_result = new AnalyzerNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnalyzerNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fa8da05;
}

::Array< Float > AnalyzerNode_obj::getFloatFrequencyData(){
            	HX_STACKFRAME(&_hx_pos_4efaa9b083bc17d2_49_getFloatFrequencyData)
HXDLIN(  49)		return ::Array_obj< Float >::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnalyzerNode_obj,getFloatFrequencyData,return )


::hx::ObjectPtr< AnalyzerNode_obj > AnalyzerNode_obj::__new(::Dynamic audioClip) {
	::hx::ObjectPtr< AnalyzerNode_obj > __this = new AnalyzerNode_obj();
	__this->__construct(audioClip);
	return __this;
}

::hx::ObjectPtr< AnalyzerNode_obj > AnalyzerNode_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic audioClip) {
	AnalyzerNode_obj *__this = (AnalyzerNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnalyzerNode_obj), false, "funkin.vis._internal.html5.AnalyzerNode"));
	*(void **)__this = AnalyzerNode_obj::_hx_vtable;
	__this->__construct(audioClip);
	return __this;
}

AnalyzerNode_obj::AnalyzerNode_obj()
{
}

::hx::Val AnalyzerNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"getFloatFrequencyData") ) { return ::hx::Val( getFloatFrequencyData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AnalyzerNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AnalyzerNode_obj_sStaticStorageInfo = 0;
#endif

static ::String AnalyzerNode_obj_sMemberFields[] = {
	HX_("getFloatFrequencyData",e0,3d,8e,51),
	::String(null()) };

::hx::Class AnalyzerNode_obj::__mClass;

void AnalyzerNode_obj::__register()
{
	AnalyzerNode_obj _hx_dummy;
	AnalyzerNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("funkin.vis._internal.html5.AnalyzerNode",29,7a,b9,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnalyzerNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnalyzerNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnalyzerNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnalyzerNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace funkin
} // end namespace vis
} // end namespace _internal
} // end namespace html5

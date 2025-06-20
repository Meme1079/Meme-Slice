// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeHTTPRequest
#include <lime/_internal/backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequestErrorResponse
#include <lime/net/_HTTPRequestErrorResponse.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf7dae7cab1a2f06_133_new,"lime.net._HTTPRequest_String","new",0x883ccdf0,"lime.net._HTTPRequest_String.new","lime/net/HTTPRequest.hx",133,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_cf7dae7cab1a2f06_148_load,"lime.net._HTTPRequest_String","load",0xabac7a96,"lime.net._HTTPRequest_String.load","lime/net/HTTPRequest.hx",148,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_cf7dae7cab1a2f06_154_load,"lime.net._HTTPRequest_String","load",0xabac7a96,"lime.net._HTTPRequest_String.load","lime/net/HTTPRequest.hx",154,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_cf7dae7cab1a2f06_137_load,"lime.net._HTTPRequest_String","load",0xabac7a96,"lime.net._HTTPRequest_String.load","lime/net/HTTPRequest.hx",137,0x339db723)
namespace lime{
namespace net{

void _HTTPRequest_String_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_cf7dae7cab1a2f06_133_new)
HXDLIN( 133)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_String_obj::__CreateEmpty() { return new _HTTPRequest_String_obj; }

void *_HTTPRequest_String_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_String_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _HTTPRequest_String_obj > _hx_result = new _HTTPRequest_String_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_String_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x099a0d80) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x099a0d80;
	} else {
		return inClassId==(int)0x09b24b15;
	}
}

 ::lime::app::Future _HTTPRequest_String_obj::load(::String uri){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::net::_HTTPRequest_String,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::lime::net::_HTTPRequestErrorResponse errorResponse){
            			HX_GC_STACKFRAME(&_hx_pos_cf7dae7cab1a2f06_148_load)
HXLINE( 149)			_gthis->responseData = errorResponse->responseData;
HXLINE( 150)			promise->error(errorResponse->error);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::net::_HTTPRequest_String,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run(::String text){
            			HX_GC_STACKFRAME(&_hx_pos_cf7dae7cab1a2f06_154_load)
HXLINE( 155)			_gthis->responseData = text;
HXLINE( 156)			promise->complete(_gthis->responseData);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_cf7dae7cab1a2f06_137_load)
HXDLIN( 137)		 ::lime::net::_HTTPRequest_String _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 138)		if (::hx::IsNotNull( uri )) {
HXLINE( 140)			this->uri = uri;
            		}
HXLINE( 143)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 144)		 ::lime::app::Future future = this->_hx___backend->loadText(this->uri);
HXLINE( 146)		future->onProgress(promise->progress_dyn());
HXLINE( 147)		future->onError( ::Dynamic(new _hx_Closure_0(_gthis,promise)));
HXLINE( 153)		future->onComplete( ::Dynamic(new _hx_Closure_1(_gthis,promise)));
HXLINE( 159)		return promise->future;
            	}



::hx::ObjectPtr< _HTTPRequest_String_obj > _HTTPRequest_String_obj::__new(::String uri) {
	::hx::ObjectPtr< _HTTPRequest_String_obj > __this = new _HTTPRequest_String_obj();
	__this->__construct(uri);
	return __this;
}

::hx::ObjectPtr< _HTTPRequest_String_obj > _HTTPRequest_String_obj::__alloc(::hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_String_obj *__this = (_HTTPRequest_String_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_String_obj), true, "lime.net._HTTPRequest_String"));
	*(void **)__this = _HTTPRequest_String_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_String_obj::_HTTPRequest_String_obj()
{
}

::hx::Val _HTTPRequest_String_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *_HTTPRequest_String_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *_HTTPRequest_String_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_String_obj_sMemberFields[] = {
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class _HTTPRequest_String_obj::__mClass;

void _HTTPRequest_String_obj::__register()
{
	_HTTPRequest_String_obj _hx_dummy;
	_HTTPRequest_String_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequest_String",fe,55,eb,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_HTTPRequest_String_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _HTTPRequest_String_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_String_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_String_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net

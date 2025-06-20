// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__OpenGLES2RenderContext_OpenGLES2RenderContext_Impl_
#include <lime/graphics/_OpenGLES2RenderContext/OpenGLES2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_11e6e6e4d8d36b5a_87_fromGL,"lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_","fromGL",0xe3cfdd24,"lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_.fromGL","lime/graphics/OpenGLES2RenderContext.hx",87,0x049dd890)
HX_LOCAL_STACK_FRAME(_hx_pos_11e6e6e4d8d36b5a_92_fromRenderContext,"lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_","fromRenderContext",0xa13cac7a,"lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_.fromRenderContext","lime/graphics/OpenGLES2RenderContext.hx",92,0x049dd890)
namespace lime{
namespace graphics{
namespace _OpenGLES2RenderContext{

void OpenGLES2RenderContext_Impl__obj::__construct() { }

Dynamic OpenGLES2RenderContext_Impl__obj::__CreateEmpty() { return new OpenGLES2RenderContext_Impl__obj; }

void *OpenGLES2RenderContext_Impl__obj::_hx_vtable = 0;

Dynamic OpenGLES2RenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenGLES2RenderContext_Impl__obj > _hx_result = new OpenGLES2RenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenGLES2RenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78073927;
}

 ::lime::_internal::backend::native::NativeOpenGLRenderContext OpenGLES2RenderContext_Impl__obj::fromGL(::hx::Class gl){
            	HX_STACKFRAME(&_hx_pos_11e6e6e4d8d36b5a_87_fromGL)
HXDLIN(  87)		return ::lime::graphics::opengl::GL_obj::context;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenGLES2RenderContext_Impl__obj,fromGL,return )

 ::lime::_internal::backend::native::NativeOpenGLRenderContext OpenGLES2RenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_11e6e6e4d8d36b5a_92_fromRenderContext)
HXDLIN(  92)		return context->gles2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenGLES2RenderContext_Impl__obj,fromRenderContext,return )


OpenGLES2RenderContext_Impl__obj::OpenGLES2RenderContext_Impl__obj()
{
}

bool OpenGLES2RenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fromGL") ) { outValue = fromGL_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OpenGLES2RenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OpenGLES2RenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OpenGLES2RenderContext_Impl__obj::__mClass;

static ::String OpenGLES2RenderContext_Impl__obj_sStaticFields[] = {
	HX_("fromGL",0f,92,c6,b5),
	HX_("fromRenderContext",6f,19,d4,ba),
	::String(null())
};

void OpenGLES2RenderContext_Impl__obj::__register()
{
	OpenGLES2RenderContext_Impl__obj _hx_dummy;
	OpenGLES2RenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_",b9,04,ef,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenGLES2RenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OpenGLES2RenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OpenGLES2RenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenGLES2RenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenGLES2RenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _OpenGLES2RenderContext

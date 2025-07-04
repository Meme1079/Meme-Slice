// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#define INCLUDED_openfl_display__internal_Context3DBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DBuffer)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DElementType)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DBuffer_obj OBJ_;
		Context3DBuffer_obj();

	public:
		enum { _hx_ClassId = 0x668f7d76 };

		void __construct( ::openfl::display3D::Context3D context3D, ::openfl::display::_internal::Context3DElementType elementType,int elementCount,int dataPerVertex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._internal.Context3DBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display._internal.Context3DBuffer"); }
		static ::hx::ObjectPtr< Context3DBuffer_obj > __new( ::openfl::display3D::Context3D context3D, ::openfl::display::_internal::Context3DElementType elementType,int elementCount,int dataPerVertex);
		static ::hx::ObjectPtr< Context3DBuffer_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D, ::openfl::display::_internal::Context3DElementType elementType,int elementCount,int dataPerVertex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DBuffer",60,1d,6b,30); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int MAX_INDEX_BUFFER_LENGTH;
		static int MAX_QUADS_PER_INDEX_BUFFER;
		static int MAX_QUAD_INDEX_BUFFER_LENGTH;
		int dataPerVertex;
		int elementCount;
		 ::openfl::display::_internal::Context3DElementType elementType;
		::Array< ::Dynamic> indexBufferData;
		::Array< ::Dynamic> indexBuffers;
		int indexCount;
		 ::openfl::display3D::VertexBuffer3D vertexBuffer;
		 ::lime::utils::ArrayBufferView vertexBufferData;
		int vertexCount;
		 ::openfl::display3D::Context3D context3D;
		void drawElements(int start,::hx::Null< int >  length);
		::Dynamic drawElements_dyn();

		void flushVertexBufferData();
		::Dynamic flushVertexBufferData_dyn();

		void resize(int elementCount,::hx::Null< int >  dataPerVertex);
		::Dynamic resize_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DBuffer */ 

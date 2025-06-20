// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display_DisplayObject
#define INCLUDED_openfl_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,RenderEvent)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObject_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();

	public:
		enum { _hx_ClassId = 0x6b353933 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.DisplayObject"); }
		static ::hx::ObjectPtr< DisplayObject_obj > __new();
		static ::hx::ObjectPtr< DisplayObject_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DisplayObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DisplayObject",81,8a,92,1e); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::haxe::ds::StringMap _hx___broadcastEvents;
		static  ::openfl::display::Stage _hx___initStage;
		static int _hx___instanceCount;
		static bool _hx___supportDOM;
		static  ::lime::utils::ObjectPool _hx___tempStack;
		static void _hx___calculateAbsoluteTransform( ::openfl::geom::Matrix local, ::openfl::geom::Matrix parentTransform, ::openfl::geom::Matrix target);
		static ::Dynamic _hx___calculateAbsoluteTransform_dyn();

		 ::Dynamic opaqueBackground;
		 ::openfl::display::DisplayObjectContainer parent;
		 ::openfl::display::Stage stage;
		Float _hx___alpha;
		 ::Dynamic _hx___blendMode;
		bool _hx___cacheAsBitmap;
		 ::openfl::geom::Matrix _hx___cacheAsBitmapMatrix;
		 ::openfl::display::Bitmap _hx___cacheBitmap;
		 ::Dynamic _hx___cacheBitmapBackground;
		 ::openfl::geom::ColorTransform _hx___cacheBitmapColorTransform;
		 ::openfl::display::BitmapData _hx___cacheBitmapData;
		 ::openfl::display::BitmapData _hx___cacheBitmapData2;
		 ::openfl::display::BitmapData _hx___cacheBitmapData3;
		 ::openfl::geom::Matrix _hx___cacheBitmapMatrix;
		 ::openfl::display::DisplayObjectRenderer _hx___cacheBitmapRenderer;
		 ::lime::graphics::cairo::Cairo _hx___cairo;
		::Array< ::Dynamic> _hx___children;
		bool _hx___customRenderClear;
		 ::openfl::events::RenderEvent _hx___customRenderEvent;
		int _hx___drawableType;
		::Array< ::Dynamic> _hx___filters;
		 ::openfl::display::Graphics _hx___graphics;
		bool _hx___interactive;
		bool _hx___isCacheBitmapRender;
		bool _hx___isMask;
		 ::openfl::display::LoaderInfo _hx___loaderInfo;
		 ::openfl::display::DisplayObject _hx___mask;
		 ::openfl::display::DisplayObject _hx___maskTarget;
		::String _hx___name;
		 ::openfl::geom::Transform _hx___objectTransform;
		bool _hx___renderable;
		bool _hx___renderDirty;
		 ::openfl::display::DisplayObject _hx___renderParent;
		 ::openfl::geom::Matrix _hx___renderTransform;
		 ::openfl::geom::Matrix _hx___renderTransformCache;
		bool _hx___renderTransformChanged;
		Float _hx___rotation;
		Float _hx___rotationCosine;
		Float _hx___rotationSine;
		 ::openfl::geom::Rectangle _hx___scale9Grid;
		Float _hx___scaleX;
		Float _hx___scaleY;
		 ::openfl::geom::Rectangle _hx___scrollRect;
		 ::openfl::display::Shader _hx___shader;
		 ::openfl::geom::Point _hx___tempPoint;
		 ::openfl::geom::Matrix _hx___transform;
		bool _hx___transformDirty;
		bool _hx___visible;
		Float _hx___worldAlpha;
		bool _hx___worldAlphaChanged;
		 ::Dynamic _hx___worldBlendMode;
		 ::openfl::geom::Rectangle _hx___worldClip;
		bool _hx___worldClipChanged;
		 ::openfl::geom::ColorTransform _hx___worldColorTransform;
		 ::openfl::display::Shader _hx___worldShader;
		 ::openfl::geom::Rectangle _hx___worldScale9Grid;
		 ::openfl::geom::Matrix _hx___worldTransform;
		bool _hx___worldVisible;
		bool _hx___worldVisibleChanged;
		bool _hx___worldTransformInvalid;
		int _hx___worldZ;
		void addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		bool dispatchEvent( ::openfl::events::Event event);

		 ::openfl::geom::Rectangle getBounds( ::openfl::display::DisplayObject targetCoordinateSpace);
		::Dynamic getBounds_dyn();

		 ::openfl::geom::Rectangle getRect( ::openfl::display::DisplayObject targetCoordinateSpace);
		::Dynamic getRect_dyn();

		 ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);
		::Dynamic globalToLocal_dyn();

		bool hitTestObject( ::openfl::display::DisplayObject obj);
		::Dynamic hitTestObject_dyn();

		bool hitTestPoint(Float x,Float y,::hx::Null< bool >  shapeFlag);
		::Dynamic hitTestPoint_dyn();

		virtual void invalidate();
		::Dynamic invalidate_dyn();

		virtual  ::openfl::geom::Point localToGlobal( ::openfl::geom::Point point);
		::Dynamic localToGlobal_dyn();

		void removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture);

		virtual void _hx___cleanup();
		::Dynamic _hx___cleanup_dyn();

		virtual bool _hx___dispatch( ::openfl::events::Event event);
		::Dynamic _hx___dispatch_dyn();

		virtual void _hx___dispatchChildren( ::openfl::events::Event event);
		::Dynamic _hx___dispatchChildren_dyn();

		virtual bool _hx___dispatchEvent( ::openfl::events::Event event);

		bool _hx___dispatchWithCapture( ::openfl::events::Event event);
		::Dynamic _hx___dispatchWithCapture_dyn();

		virtual void _hx___enterFrame(int deltaTime);
		::Dynamic _hx___enterFrame_dyn();

		virtual void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getBounds_dyn();

		virtual ::String _hx___getCursor();
		::Dynamic _hx___getCursor_dyn();

		virtual void _hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getFilterBounds_dyn();

		virtual bool _hx___getInteractive(::Array< ::Dynamic> stack);
		::Dynamic _hx___getInteractive_dyn();

		void _hx___getLocalBounds( ::openfl::geom::Rectangle rect);
		::Dynamic _hx___getLocalBounds_dyn();

		virtual void _hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getRenderBounds_dyn();

		 ::openfl::geom::Matrix _hx___getRenderTransform();
		::Dynamic _hx___getRenderTransform_dyn();

		 ::openfl::geom::Matrix _hx___getWorldTransform();
		::Dynamic _hx___getWorldTransform_dyn();

		virtual  ::openfl::geom::Point _hx___globalToLocal( ::openfl::geom::Point global, ::openfl::geom::Point local);
		::Dynamic _hx___globalToLocal_dyn();

		virtual bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);
		::Dynamic _hx___hitTest_dyn();

		virtual bool _hx___hitTestMask(Float x,Float y);
		::Dynamic _hx___hitTestMask_dyn();

		virtual void _hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse);
		::Dynamic _hx___readGraphicsData_dyn();

		void _hx___setParentRenderDirty();
		::Dynamic _hx___setParentRenderDirty_dyn();

		void _hx___setRenderDirty();
		::Dynamic _hx___setRenderDirty_dyn();

		virtual void _hx___setStageReference( ::openfl::display::Stage stage);
		::Dynamic _hx___setStageReference_dyn();

		virtual void _hx___setTransformDirty();
		::Dynamic _hx___setTransformDirty_dyn();

		virtual void _hx___setWorldTransformInvalid();
		::Dynamic _hx___setWorldTransformInvalid_dyn();

		virtual void _hx___stopAllMovieClips();
		::Dynamic _hx___stopAllMovieClips_dyn();

		virtual void _hx___update(bool transformOnly,bool updateChildren);
		::Dynamic _hx___update_dyn();

		virtual void _hx___updateTransforms( ::openfl::geom::Matrix overrideTransform);
		::Dynamic _hx___updateTransforms_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		 ::Dynamic get_blendMode();
		::Dynamic get_blendMode_dyn();

		 ::Dynamic set_blendMode( ::Dynamic value);
		::Dynamic set_blendMode_dyn();

		bool get_cacheAsBitmap();
		::Dynamic get_cacheAsBitmap_dyn();

		bool set_cacheAsBitmap(bool value);
		::Dynamic set_cacheAsBitmap_dyn();

		 ::openfl::geom::Matrix get_cacheAsBitmapMatrix();
		::Dynamic get_cacheAsBitmapMatrix_dyn();

		 ::openfl::geom::Matrix set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value);
		::Dynamic set_cacheAsBitmapMatrix_dyn();

		::Array< ::Dynamic> get_filters();
		::Dynamic get_filters_dyn();

		::Array< ::Dynamic> set_filters(::Array< ::Dynamic> value);
		::Dynamic set_filters_dyn();

		virtual Float get_height();
		::Dynamic get_height_dyn();

		virtual Float set_height(Float value);
		::Dynamic set_height_dyn();

		 ::openfl::display::LoaderInfo get_loaderInfo();
		::Dynamic get_loaderInfo_dyn();

		 ::openfl::display::DisplayObject get_mask();
		::Dynamic get_mask_dyn();

		 ::openfl::display::DisplayObject set_mask( ::openfl::display::DisplayObject value);
		::Dynamic set_mask_dyn();

		virtual Float get_mouseX();
		::Dynamic get_mouseX_dyn();

		virtual Float get_mouseY();
		::Dynamic get_mouseY_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		::String set_name(::String value);
		::Dynamic set_name_dyn();

		 ::openfl::display::DisplayObject get_root();
		::Dynamic get_root_dyn();

		Float get_rotation();
		::Dynamic get_rotation_dyn();

		virtual Float set_rotation(Float value);
		::Dynamic set_rotation_dyn();

		 ::openfl::geom::Rectangle get_scale9Grid();
		::Dynamic get_scale9Grid_dyn();

		 ::openfl::geom::Rectangle set_scale9Grid( ::openfl::geom::Rectangle value);
		::Dynamic set_scale9Grid_dyn();

		Float get_scaleX();
		::Dynamic get_scaleX_dyn();

		virtual Float set_scaleX(Float value);
		::Dynamic set_scaleX_dyn();

		Float get_scaleY();
		::Dynamic get_scaleY_dyn();

		virtual Float set_scaleY(Float value);
		::Dynamic set_scaleY_dyn();

		 ::openfl::geom::Rectangle get_scrollRect();
		::Dynamic get_scrollRect_dyn();

		 ::openfl::geom::Rectangle set_scrollRect( ::openfl::geom::Rectangle value);
		::Dynamic set_scrollRect_dyn();

		 ::openfl::display::Shader get_shader();
		::Dynamic get_shader_dyn();

		 ::openfl::display::Shader set_shader( ::openfl::display::Shader value);
		::Dynamic set_shader_dyn();

		 ::openfl::geom::Transform get_transform();
		::Dynamic get_transform_dyn();

		virtual  ::openfl::geom::Transform set_transform( ::openfl::geom::Transform value);
		::Dynamic set_transform_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		virtual Float get_width();
		::Dynamic get_width_dyn();

		virtual Float set_width(Float value);
		::Dynamic set_width_dyn();

		virtual Float get_x();
		::Dynamic get_x_dyn();

		virtual Float set_x(Float value);
		::Dynamic set_x_dyn();

		virtual Float get_y();
		::Dynamic get_y_dyn();

		virtual Float set_y(Float value);
		::Dynamic set_y_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObject */ 

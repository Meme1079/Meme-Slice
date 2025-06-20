// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_ui_FlxBar
#define INCLUDED_flixel_ui_FlxBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxBarFillDirection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxBar_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxBar_obj OBJ_;
		FlxBar_obj();

	public:
		enum { _hx_ClassId = 0x0a9ceb91 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.ui.FlxBar"); }
		static ::hx::ObjectPtr< FlxBar_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder);
		static ::hx::ObjectPtr< FlxBar_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBar",a1,ec,c5,7b); }

		bool fixedPosition;
		Float pxPerPercent;
		 ::flixel::math::FlxBasePoint positionOffset;
		bool killOnEmpty;
		Float value;
		Float min;
		Float max;
		Float range;
		Float pct;
		int numDivisions;
		 ::Dynamic emptyCallback;
		Dynamic emptyCallback_dyn() { return emptyCallback;}
		 ::Dynamic filledCallback;
		Dynamic filledCallback_dyn() { return filledCallback;}
		 ::Dynamic parent;
		::String parentVariable;
		int barWidth;
		int barHeight;
		 ::flixel::graphics::frames::FlxImageFrame frontFrames;
		 ::flixel::ui::FlxBarFillDirection fillDirection;
		bool _fillHorizontal;
		 ::flixel::graphics::frames::FlxFrame _frontFrame;
		 ::flixel::math::FlxRect _filledFlxRect;
		 ::openfl::display::BitmapData _emptyBar;
		 ::openfl::geom::Rectangle _emptyBarRect;
		 ::openfl::display::BitmapData _filledBar;
		 ::openfl::geom::Point _zeroOffset;
		 ::openfl::geom::Rectangle _filledBarRect;
		 ::openfl::geom::Point _filledBarPoint;
		int _maxPercent;
		void destroy();

		void trackParent(int offsetX,int offsetY);
		::Dynamic trackParent_dyn();

		void setParent( ::Dynamic parentRef,::String variable,::hx::Null< bool >  track,::hx::Null< int >  offsetX,::hx::Null< int >  offsetY);
		::Dynamic setParent_dyn();

		void stopTrackingParent(int posX,int posY);
		::Dynamic stopTrackingParent_dyn();

		void setCallbacks( ::Dynamic onEmpty, ::Dynamic onFilled,::hx::Null< bool >  killOnEmpty);
		::Dynamic setCallbacks_dyn();

		void setRange(Float min,Float max);
		::Dynamic setRange_dyn();

		 ::flixel::ui::FlxBar createFilledBar(int empty,int fill,::hx::Null< bool >  showBorder,::hx::Null< int >  border,::hx::Null< int >  borderSize);
		::Dynamic createFilledBar_dyn();

		 ::flixel::ui::FlxBar createColoredEmptyBar(int empty,::hx::Null< bool >  showBorder,::hx::Null< int >  border,::hx::Null< int >  borderSize);
		::Dynamic createColoredEmptyBar_dyn();

		 ::flixel::ui::FlxBar createColoredFilledBar(int fill,::hx::Null< bool >  showBorder,::hx::Null< int >  border,::hx::Null< int >  borderSize);
		::Dynamic createColoredFilledBar_dyn();

		 ::flixel::ui::FlxBar createGradientBar(::Array< int > empty,::Array< int > fill,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  showBorder,::hx::Null< int >  border,::hx::Null< int >  borderSize);
		::Dynamic createGradientBar_dyn();

		 ::flixel::ui::FlxBar createGradientEmptyBar(::Array< int > empty,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  showBorder,::hx::Null< int >  border,::hx::Null< int >  borderSize);
		::Dynamic createGradientEmptyBar_dyn();

		 ::flixel::ui::FlxBar createGradientFilledBar(::Array< int > fill,::hx::Null< int >  chunkSize,::hx::Null< int >  rotation,::hx::Null< bool >  showBorder,::hx::Null< int >  border,::hx::Null< int >  borderSize);
		::Dynamic createGradientFilledBar_dyn();

		 ::flixel::ui::FlxBar createImageBar( ::Dynamic empty, ::Dynamic fill,::hx::Null< int >  emptyBackground,::hx::Null< int >  fillBackground);
		::Dynamic createImageBar_dyn();

		 ::flixel::ui::FlxBar createImageEmptyBar( ::Dynamic empty,::hx::Null< int >  emptyBackground);
		::Dynamic createImageEmptyBar_dyn();

		 ::flixel::ui::FlxBar createImageFilledBar( ::Dynamic fill,::hx::Null< int >  fillBackground);
		::Dynamic createImageFilledBar_dyn();

		 ::flixel::ui::FlxBarFillDirection set_fillDirection( ::flixel::ui::FlxBarFillDirection direction);
		::Dynamic set_fillDirection_dyn();

		void updateValueFromParent();
		::Dynamic updateValueFromParent_dyn();

		void updateBar();
		::Dynamic updateBar_dyn();

		void updateEmptyBar();
		::Dynamic updateEmptyBar_dyn();

		void updateFilledBar();
		::Dynamic updateFilledBar_dyn();

		void update(Float elapsed);

		void draw();

		 ::openfl::display::BitmapData set_pixels( ::openfl::display::BitmapData pixels);

		virtual ::String toString();

		Float get_percent();
		::Dynamic get_percent_dyn();

		Float set_percent(Float newPct);
		::Dynamic set_percent_dyn();

		Float set_value(Float newValue);
		::Dynamic set_value_dyn();

		Float get_value();
		::Dynamic get_value_dyn();

		int set_numDivisions(int newValue);
		::Dynamic set_numDivisions_dyn();

		 ::flixel::graphics::frames::FlxImageFrame get_frontFrames();
		::Dynamic get_frontFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame set_frontFrames( ::flixel::graphics::frames::FlxImageFrame value);
		::Dynamic set_frontFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame get_backFrames();
		::Dynamic get_backFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame set_backFrames( ::flixel::graphics::frames::FlxImageFrame value);
		::Dynamic set_backFrames_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxBar */ 

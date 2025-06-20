// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_geom_Rectangle
#define INCLUDED_openfl_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Rectangle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();

	public:
		enum { _hx_ClassId = 0x2e421103 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.geom.Rectangle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.geom.Rectangle"); }
		static ::hx::ObjectPtr< Rectangle_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static ::hx::ObjectPtr< Rectangle_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Rectangle",0f,b4,4f,bb); }

		static void __boot();
		static  ::lime::math::Rectangle _hx___limeRectangle;
		static  ::lime::utils::ObjectPool _hx___pool;
		Float height;
		Float width;
		Float x;
		Float y;
		 ::openfl::geom::Rectangle clone();
		::Dynamic clone_dyn();

		bool contains(Float x,Float y);
		::Dynamic contains_dyn();

		bool containsPoint( ::openfl::geom::Point point);
		::Dynamic containsPoint_dyn();

		bool containsRect( ::openfl::geom::Rectangle rect);
		::Dynamic containsRect_dyn();

		void copyFrom( ::openfl::geom::Rectangle sourceRect);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::geom::Rectangle toCompare);
		::Dynamic equals_dyn();

		void inflate(Float dx,Float dy);
		::Dynamic inflate_dyn();

		void inflatePoint( ::openfl::geom::Point point);
		::Dynamic inflatePoint_dyn();

		 ::openfl::geom::Rectangle intersection( ::openfl::geom::Rectangle toIntersect);
		::Dynamic intersection_dyn();

		 ::openfl::geom::Rectangle intersectionToOutput( ::openfl::geom::Rectangle toIntersect, ::openfl::geom::Rectangle output);
		::Dynamic intersectionToOutput_dyn();

		bool intersects( ::openfl::geom::Rectangle toIntersect);
		::Dynamic intersects_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		void offsetPoint( ::openfl::geom::Point point);
		::Dynamic offsetPoint_dyn();

		void setEmpty();
		::Dynamic setEmpty_dyn();

		void setTo(Float xa,Float ya,Float widtha,Float heighta);
		::Dynamic setTo_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::openfl::geom::Rectangle _hx_union( ::openfl::geom::Rectangle toUnion);
		::Dynamic _hx_union_dyn();

		 ::openfl::geom::Rectangle unionToOutput( ::openfl::geom::Rectangle toUnion, ::openfl::geom::Rectangle output);
		::Dynamic unionToOutput_dyn();

		void _hx___contract(Float x,Float y,Float width,Float height);
		::Dynamic _hx___contract_dyn();

		void _hx___expand(Float x,Float y,Float width,Float height);
		::Dynamic _hx___expand_dyn();

		 ::lime::math::Rectangle _hx___toLimeRectangle();
		::Dynamic _hx___toLimeRectangle_dyn();

		void _hx___transform( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix m);
		::Dynamic _hx___transform_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float b);
		::Dynamic set_bottom_dyn();

		 ::openfl::geom::Point get_bottomRight();
		::Dynamic get_bottomRight_dyn();

		 ::openfl::geom::Point set_bottomRight( ::openfl::geom::Point p);
		::Dynamic set_bottomRight_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float l);
		::Dynamic set_left_dyn();

		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float r);
		::Dynamic set_right_dyn();

		 ::openfl::geom::Point get_size();
		::Dynamic get_size_dyn();

		 ::openfl::geom::Point set_size( ::openfl::geom::Point p);
		::Dynamic set_size_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float t);
		::Dynamic set_top_dyn();

		 ::openfl::geom::Point get_topLeft();
		::Dynamic get_topLeft_dyn();

		 ::openfl::geom::Point set_topLeft( ::openfl::geom::Point p);
		::Dynamic set_topLeft_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Rectangle */ 

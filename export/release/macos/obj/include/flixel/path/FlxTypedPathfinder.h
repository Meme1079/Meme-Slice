// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_path_FlxTypedPathfinder
#define INCLUDED_flixel_path_FlxTypedPathfinder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,path,FlxPathSimplifier)
HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinder)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace path{


class HXCPP_CLASS_ATTRIBUTES FlxTypedPathfinder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTypedPathfinder_obj OBJ_;
		FlxTypedPathfinder_obj();

	public:
		enum { _hx_ClassId = 0x2f6c6248 };

		void __construct( ::Dynamic factory);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.path.FlxTypedPathfinder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.path.FlxTypedPathfinder"); }
		static ::hx::ObjectPtr< FlxTypedPathfinder_obj > __new( ::Dynamic factory);
		static ::hx::ObjectPtr< FlxTypedPathfinder_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic factory);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedPathfinder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedPathfinder",23,ad,ac,b1); }

		 ::Dynamic createData;
		Dynamic createData_dyn() { return createData;}
		::Array< ::Dynamic> findPath( ::Dynamic map, ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::path::FlxPathSimplifier simplify);
		::Dynamic findPath_dyn();

		::Array< int > findPathIndices( ::Dynamic map,int startIndex,int endIndex);
		::Dynamic findPathIndices_dyn();

		::Array< int > findPathIndicesHelper( ::Dynamic data);
		::Dynamic findPathIndicesHelper_dyn();

		::Array< ::Dynamic> getPathPointsFromIndices( ::Dynamic data,::Array< int > indices);
		::Dynamic getPathPointsFromIndices_dyn();

		::Array< ::Dynamic> simplifyPath( ::Dynamic data,::Array< ::Dynamic> points, ::flixel::path::FlxPathSimplifier simplify);
		::Dynamic simplifyPath_dyn();

		void simplifyLine( ::Dynamic data,::Array< ::Dynamic> points);
		::Dynamic simplifyLine_dyn();

		void simplifyRay( ::Dynamic data,::Array< ::Dynamic> points);
		::Dynamic simplifyRay_dyn();

		void simplifyRayBox( ::Dynamic data,::Array< ::Dynamic> points,Float width,Float height);
		::Dynamic simplifyRayBox_dyn();

		void simplifyRayStep( ::Dynamic data,::Array< ::Dynamic> points,Float resolution);
		::Dynamic simplifyRayStep_dyn();

		 ::Dynamic computePathData( ::Dynamic map,int startIndex,int endIndex,::hx::Null< bool >  stopOnEnd);
		::Dynamic computePathData_dyn();

		 ::Dynamic compute( ::Dynamic data,::hx::Null< bool >  stopOnEnd);
		::Dynamic compute_dyn();

		virtual ::Array< int > getNeighbors( ::Dynamic data,int from);
		::Dynamic getNeighbors_dyn();

		virtual int getDistance( ::Dynamic data,int from,int to);
		::Dynamic getDistance_dyn();

		bool isComplete( ::Dynamic data);
		::Dynamic isComplete_dyn();

		bool isTileSolved( ::Dynamic data,int tile);
		::Dynamic isTileSolved_dyn();

		bool hasValidInitialData( ::Dynamic data);
		::Dynamic hasValidInitialData_dyn();

};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxTypedPathfinder */ 

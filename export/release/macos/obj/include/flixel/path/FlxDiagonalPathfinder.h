// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_path_FlxDiagonalPathfinder
#define INCLUDED_flixel_path_FlxDiagonalPathfinder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_path_FlxTypedPathfinder
#include <flixel/path/FlxTypedPathfinder.h>
#endif
HX_DECLARE_CLASS2(flixel,path,FlxDiagonalPathfinder)
HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinder)
HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinderData)

namespace flixel{
namespace path{


class HXCPP_CLASS_ATTRIBUTES FlxDiagonalPathfinder_obj : public  ::flixel::path::FlxTypedPathfinder_obj
{
	public:
		typedef  ::flixel::path::FlxTypedPathfinder_obj super;
		typedef FlxDiagonalPathfinder_obj OBJ_;
		FlxDiagonalPathfinder_obj();

	public:
		enum { _hx_ClassId = 0x4c3b328d };

		void __construct(::hx::Null< int >  __o_diagonalPolicy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.path.FlxDiagonalPathfinder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.path.FlxDiagonalPathfinder"); }
		static ::hx::ObjectPtr< FlxDiagonalPathfinder_obj > __new(::hx::Null< int >  __o_diagonalPolicy);
		static ::hx::ObjectPtr< FlxDiagonalPathfinder_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_diagonalPolicy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxDiagonalPathfinder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxDiagonalPathfinder",92,e2,86,2c); }

		int diagonalPolicy;
		::Array< int > getNeighbors( ::Dynamic _tmp_data,int from);

		int getInBoundDirections( ::flixel::path::FlxTypedPathfinderData data,int from);
		::Dynamic getInBoundDirections_dyn();

		bool canGo( ::flixel::path::FlxTypedPathfinderData data,int to,::hx::Null< int >  dir);
		::Dynamic canGo_dyn();

		int getDistance( ::Dynamic _tmp_data,int from,int to);

};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxDiagonalPathfinder */ 

// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_path_FlxTypedBasePath
#define INCLUDED_flixel_path_FlxTypedBasePath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,path,FlxTypedBasePath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)

namespace flixel{
namespace path{


class HXCPP_CLASS_ATTRIBUTES FlxTypedBasePath_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxTypedBasePath_obj OBJ_;
		FlxTypedBasePath_obj();

	public:
		enum { _hx_ClassId = 0x7f944777 };

		void __construct(::Array< ::Dynamic> nodes, ::Dynamic target,::hx::Null< bool >  __o_direction);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.path.FlxTypedBasePath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.path.FlxTypedBasePath"); }
		static ::hx::ObjectPtr< FlxTypedBasePath_obj > __new(::Array< ::Dynamic> nodes, ::Dynamic target,::hx::Null< bool >  __o_direction);
		static ::hx::ObjectPtr< FlxTypedBasePath_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> nodes, ::Dynamic target,::hx::Null< bool >  __o_direction);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedBasePath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTypedBasePath",2e,85,84,06); }

		::Array< ::Dynamic> nodes;
		 ::Dynamic target;
		int loopType;
		bool direction;
		 ::flixel::util::_FlxSignal::FlxSignal1 onEndReached;
		 ::flixel::util::_FlxSignal::FlxSignal1 onNodeReached;
		 ::flixel::util::_FlxSignal::FlxSignal1 onFinish;
		int currentIndex;
		int nextIndex;
		void destroy();

		virtual  ::flixel::path::FlxTypedBasePath restart();
		::Dynamic restart_dyn();

		int getStartingNode();
		::Dynamic getStartingNode_dyn();

		void nodeReached();
		::Dynamic nodeReached_dyn();

		virtual void advance();
		::Dynamic advance_dyn();

		void setNextIndex();
		::Dynamic setNextIndex_dyn();

		 ::flixel::path::FlxTypedBasePath startAt(int index);
		::Dynamic startAt_dyn();

		void update(Float elapsed);

		virtual bool isTargetAtNext(Float elapsed);
		::Dynamic isTargetAtNext_dyn();

		virtual void updateTarget(Float elapsed);
		::Dynamic updateTarget_dyn();

		int get_totalNodes();
		::Dynamic get_totalNodes_dyn();

		bool get_finished();
		::Dynamic get_finished_dyn();

		 ::flixel::math::FlxBasePoint get_current();
		::Dynamic get_current_dyn();

		 ::flixel::math::FlxBasePoint get_next();
		::Dynamic get_next_dyn();

		::Array< ::Dynamic> getCameras();

};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxTypedBasePath */ 

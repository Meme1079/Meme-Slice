// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_utils_AssetCache
#define INCLUDED_openfl_utils_AssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,utils,AssetCache)
HX_DECLARE_CLASS2(openfl,utils,IAssetCache)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AssetCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetCache_obj OBJ_;
		AssetCache_obj();

	public:
		enum { _hx_ClassId = 0x0d7331b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils.AssetCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils.AssetCache"); }
		static ::hx::ObjectPtr< AssetCache_obj > __new();
		static ::hx::ObjectPtr< AssetCache_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AssetCache",52,9e,a3,e4); }

		 ::haxe::ds::StringMap bitmapData;
		 ::haxe::ds::StringMap font;
		 ::haxe::ds::StringMap sound;
		bool _hx___enabled;
		void clear(::String prefix);
		::Dynamic clear_dyn();

		 ::openfl::display::BitmapData getBitmapData(::String id);
		::Dynamic getBitmapData_dyn();

		 ::openfl::text::Font getFont(::String id);
		::Dynamic getFont_dyn();

		 ::openfl::media::Sound getSound(::String id);
		::Dynamic getSound_dyn();

		bool hasBitmapData(::String id);
		::Dynamic hasBitmapData_dyn();

		bool hasFont(::String id);
		::Dynamic hasFont_dyn();

		bool hasSound(::String id);
		::Dynamic hasSound_dyn();

		bool removeBitmapData(::String id);
		::Dynamic removeBitmapData_dyn();

		bool removeFont(::String id);
		::Dynamic removeFont_dyn();

		bool removeSound(::String id);
		::Dynamic removeSound_dyn();

		void setBitmapData(::String id, ::openfl::display::BitmapData bitmapData);
		::Dynamic setBitmapData_dyn();

		void setFont(::String id, ::openfl::text::Font font);
		::Dynamic setFont_dyn();

		void setSound(::String id, ::openfl::media::Sound sound);
		::Dynamic setSound_dyn();

		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_AssetCache */ 

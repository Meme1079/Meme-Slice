// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_137a9380b585812a_18_createTextField,"flixel.system.debug.DebuggerUtil","createTextField",0x34b9b52e,"flixel.system.debug.DebuggerUtil.createTextField","flixel/system/debug/DebuggerUtil.hx",18,0x13434d32)
HX_LOCAL_STACK_FRAME(_hx_pos_137a9380b585812a_22_initTextField,"flixel.system.debug.DebuggerUtil","initTextField",0x9a50155a,"flixel.system.debug.DebuggerUtil.initTextField","flixel/system/debug/DebuggerUtil.hx",22,0x13434d32)
HX_LOCAL_STACK_FRAME(_hx_pos_137a9380b585812a_47_fixSize,"flixel.system.debug.DebuggerUtil","fixSize",0xaffeaf33,"flixel.system.debug.DebuggerUtil.fixSize","flixel/system/debug/DebuggerUtil.hx",47,0x13434d32)
namespace flixel{
namespace _hx_system{
namespace debug{

void DebuggerUtil_obj::__construct() { }

Dynamic DebuggerUtil_obj::__CreateEmpty() { return new DebuggerUtil_obj; }

void *DebuggerUtil_obj::_hx_vtable = 0;

Dynamic DebuggerUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DebuggerUtil_obj > _hx_result = new DebuggerUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DebuggerUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x603b72e7;
}

 ::openfl::text::TextField DebuggerUtil_obj::createTextField(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Size){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Color = __o_Color.Default(-1);
            		int Size = __o_Size.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_137a9380b585812a_18_createTextField)
HXDLIN(  18)		return ( ( ::openfl::text::TextField)(::flixel::_hx_system::debug::DebuggerUtil_obj::initTextField( ::openfl::text::TextField_obj::__alloc( HX_CTX ),X,Y,Color,Size)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DebuggerUtil_obj,createTextField,return )

 ::Dynamic DebuggerUtil_obj::initTextField( ::Dynamic tf,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Size){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Color = __o_Color.Default(-1);
            		int Size = __o_Size.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_137a9380b585812a_22_initTextField)
HXLINE(  23)		( ( ::openfl::text::TextField)(tf) )->set_x(X);
HXLINE(  24)		( ( ::openfl::text::TextField)(tf) )->set_y(Y);
HXLINE(  25)		( ( ::openfl::text::TextField)(tf) )->set_multiline(false);
HXLINE(  26)		( ( ::openfl::text::TextField)(tf) )->set_wordWrap(false);
HXLINE(  27)		( ( ::openfl::text::TextField)(tf) )->set_embedFonts(true);
HXLINE(  28)		( ( ::openfl::text::TextField)(tf) )->set_selectable(false);
HXLINE(  33)		( ( ::openfl::text::TextField)(tf) )->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,Size,(Color & 16777215),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  34)		( ( ::openfl::display::DisplayObject)(tf) )->set_alpha((( (Float)(((Color >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE(  35)		( ( ::openfl::text::TextField)(tf) )->set_autoSize(1);
HXLINE(  36)		return tf;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DebuggerUtil_obj,initTextField,return )

 ::openfl::display::BitmapData DebuggerUtil_obj::fixSize( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_137a9380b585812a_47_fixSize)
HXDLIN(  47)		return bitmapData;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DebuggerUtil_obj,fixSize,return )


DebuggerUtil_obj::DebuggerUtil_obj()
{
}

bool DebuggerUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fixSize") ) { outValue = fixSize_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initTextField") ) { outValue = initTextField_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DebuggerUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DebuggerUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DebuggerUtil_obj::__mClass;

static ::String DebuggerUtil_obj_sStaticFields[] = {
	HX_("createTextField",31,de,75,3a),
	HX_("initTextField",9d,e7,80,14),
	HX_("fixSize",36,9d,48,dc),
	::String(null())
};

void DebuggerUtil_obj::__register()
{
	DebuggerUtil_obj _hx_dummy;
	DebuggerUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.DebuggerUtil",6b,ad,c9,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DebuggerUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DebuggerUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DebuggerUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DebuggerUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DebuggerUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug

// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_ui_Keyboard
#define INCLUDED_openfl_ui_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,ui,Keyboard)

namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Keyboard_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();

	public:
		enum { _hx_ClassId = 0x0c5957a7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.ui.Keyboard")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.ui.Keyboard"); }

		inline static ::hx::ObjectPtr< Keyboard_obj > __new() {
			::hx::ObjectPtr< Keyboard_obj > __this = new Keyboard_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Keyboard_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Keyboard_obj *__this = (Keyboard_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Keyboard_obj), false, "openfl.ui.Keyboard"));
			*(void **)__this = Keyboard_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Keyboard",c7,78,db,41); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int NUMBER_0;
		static int NUMBER_1;
		static int NUMBER_2;
		static int NUMBER_3;
		static int NUMBER_4;
		static int NUMBER_5;
		static int NUMBER_6;
		static int NUMBER_7;
		static int NUMBER_8;
		static int NUMBER_9;
		static int A;
		static int B;
		static int C;
		static int D;
		static int E;
		static int F;
		static int G;
		static int H;
		static int I;
		static int J;
		static int K;
		static int L;
		static int M;
		static int N;
		static int O;
		static int P;
		static int Q;
		static int R;
		static int S;
		static int T;
		static int U;
		static int V;
		static int W;
		static int X;
		static int Y;
		static int Z;
		static int NUMPAD_0;
		static int NUMPAD_1;
		static int NUMPAD_2;
		static int NUMPAD_3;
		static int NUMPAD_4;
		static int NUMPAD_5;
		static int NUMPAD_6;
		static int NUMPAD_7;
		static int NUMPAD_8;
		static int NUMPAD_9;
		static int NUMPAD_MULTIPLY;
		static int NUMPAD_ADD;
		static int NUMPAD_ENTER;
		static int NUMPAD_SUBTRACT;
		static int NUMPAD_DECIMAL;
		static int NUMPAD_DIVIDE;
		static int F1;
		static int F2;
		static int F3;
		static int F4;
		static int F5;
		static int F6;
		static int F7;
		static int F8;
		static int F9;
		static int F10;
		static int F11;
		static int F12;
		static int F13;
		static int F14;
		static int F15;
		static int BACKSPACE;
		static int TAB;
		static int ALTERNATE;
		static int ENTER;
		static int COMMAND;
		static int SHIFT;
		static int CONTROL;
		static int BREAK;
		static int CAPS_LOCK;
		static int NUMPAD;
		static int ESCAPE;
		static int SPACE;
		static int PAGE_UP;
		static int PAGE_DOWN;
		static int END;
		static int HOME;
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int INSERT;
		static int DELETE;
		static int NUMLOCK;
		static int SEMICOLON;
		static int EQUAL;
		static int COMMA;
		static int MINUS;
		static int PERIOD;
		static int SLASH;
		static int BACKQUOTE;
		static int LEFTBRACKET;
		static int BACKSLASH;
		static int RIGHTBRACKET;
		static int QUOTE;
		static bool capsLock;
		static bool numLock;
		static bool isAccessible();
		static ::Dynamic isAccessible_dyn();

		static int _hx___convertKeyCode(int key);
		static ::Dynamic _hx___convertKeyCode_dyn();

		static int _hx___getCharCode(int key,::hx::Null< bool >  shift);
		static ::Dynamic _hx___getCharCode_dyn();

		static int _hx___getKeyLocation(int key);
		static ::Dynamic _hx___getKeyLocation_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_Keyboard */ 

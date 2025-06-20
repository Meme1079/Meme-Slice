// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#define INCLUDED_openfl__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,FunctionVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,_Vector,Vector_Impl_)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES Vector_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7fea3445 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._Vector.Vector_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._Vector.Vector_Impl_"); }

		inline static ::hx::ObjectPtr< Vector_Impl__obj > __new() {
			::hx::ObjectPtr< Vector_Impl__obj > __this = new Vector_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Vector_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Vector_Impl__obj *__this = (Vector_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vector_Impl__obj), false, "openfl._Vector.Vector_Impl_"));
			*(void **)__this = Vector_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector_Impl_",c3,ad,36,7e); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::_Vector::ObjectVector concat(::Dynamic this1, ::openfl::_Vector::ObjectVector vec);
		static ::Dynamic concat_dyn();

		static  ::openfl::_Vector::ObjectVector copy(::Dynamic this1);
		static ::Dynamic copy_dyn();

		static bool every(::Dynamic this1, ::Dynamic callback, ::Dynamic thisObject);
		static ::Dynamic every_dyn();

		static  ::openfl::_Vector::ObjectVector filter(::Dynamic this1, ::Dynamic callback);
		static ::Dynamic filter_dyn();

		static  ::Dynamic get(::Dynamic this1,int index);
		static ::Dynamic get_dyn();

		static int indexOf(::Dynamic this1, ::Dynamic searchElement,::hx::Null< int >  fromIndex);
		static ::Dynamic indexOf_dyn();

		static void insertAt(::Dynamic this1,int index, ::Dynamic element);
		static ::Dynamic insertAt_dyn();

		static  ::Dynamic iterator(::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static ::String join(::Dynamic this1,::String sep);
		static ::Dynamic join_dyn();

		static int lastIndexOf(::Dynamic this1, ::Dynamic searchElement, ::Dynamic fromIndex);
		static ::Dynamic lastIndexOf_dyn();

		static  ::Dynamic pop(::Dynamic this1);
		static ::Dynamic pop_dyn();

		static int push(::Dynamic this1, ::Dynamic value);
		static ::Dynamic push_dyn();

		static  ::Dynamic removeAt(::Dynamic this1,int index);
		static ::Dynamic removeAt_dyn();

		static  ::openfl::_Vector::ObjectVector reverse(::Dynamic this1);
		static ::Dynamic reverse_dyn();

		static  ::Dynamic set(::Dynamic this1,int index, ::Dynamic value);
		static ::Dynamic set_dyn();

		static  ::Dynamic shift(::Dynamic this1);
		static ::Dynamic shift_dyn();

		static  ::openfl::_Vector::ObjectVector slice(::Dynamic this1,::hx::Null< int >  startIndex, ::Dynamic endIndex);
		static ::Dynamic slice_dyn();

		static bool some(::Dynamic this1, ::Dynamic callback, ::Dynamic thisObject);
		static ::Dynamic some_dyn();

		static void sort(::Dynamic this1, ::Dynamic sortBehavior);
		static ::Dynamic sort_dyn();

		static  ::openfl::_Vector::ObjectVector splice(::Dynamic this1,int startIndex,int deleteCount,::cpp::VirtualArray items);
		static ::Dynamic splice_dyn();

		static ::String toString(::Dynamic this1);
		static ::Dynamic toString_dyn();

		static void unshift(::Dynamic this1, ::Dynamic value);
		static ::Dynamic unshift_dyn();

		static ::Dynamic convert(::Dynamic vec);
		static ::Dynamic convert_dyn();

		static  ::openfl::_Vector::BoolVector toBoolVector(::Dynamic t,int length,bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toBoolVector_dyn();

		static  ::openfl::_Vector::IntVector toIntVector(::Dynamic t,int length,bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toIntVector_dyn();

		static  ::openfl::_Vector::FloatVector toFloatVector(::Dynamic t,int length,bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toFloatVector_dyn();

		static  ::openfl::_Vector::FunctionVector toFunctionVector(::Dynamic t,int length,bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toFunctionVector_dyn();

		static  ::openfl::_Vector::ObjectVector toObjectVector(::Dynamic t,int length,bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toObjectVector_dyn();

		static  ::openfl::_Vector::ObjectVector toNullVector(::Dynamic t,int length,bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toNullVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromBoolVector( ::openfl::_Vector::BoolVector vector);
		static ::Dynamic fromBoolVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromIntVector( ::openfl::_Vector::IntVector vector);
		static ::Dynamic fromIntVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromFloatVector( ::openfl::_Vector::FloatVector vector);
		static ::Dynamic fromFloatVector_dyn();

		static  ::openfl::_Vector::FunctionVector fromFunctionVector( ::openfl::_Vector::FunctionVector vector);
		static ::Dynamic fromFunctionVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromObjectVector( ::openfl::_Vector::ObjectVector vector);
		static ::Dynamic fromObjectVector_dyn();

		static bool get_fixed(::Dynamic this1);
		static ::Dynamic get_fixed_dyn();

		static bool set_fixed(::Dynamic this1,bool value);
		static ::Dynamic set_fixed_dyn();

		static int get_length(::Dynamic this1);
		static ::Dynamic get_length_dyn();

		static int set_length(::Dynamic this1,int value);
		static ::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_Vector_Impl_ */ 

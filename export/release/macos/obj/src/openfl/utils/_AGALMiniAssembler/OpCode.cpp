// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_OpCode
#include <openfl/utils/_AGALMiniAssembler/OpCode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6bb58d9c0266c23_804_new,"openfl.utils._AGALMiniAssembler.OpCode","new",0x29e72c3a,"openfl.utils._AGALMiniAssembler.OpCode.new","openfl/utils/AGALMiniAssembler.hx",804,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_b6bb58d9c0266c23_813_toString,"openfl.utils._AGALMiniAssembler.OpCode","toString",0x1d9e3e92,"openfl.utils._AGALMiniAssembler.OpCode.toString","openfl/utils/AGALMiniAssembler.hx",813,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_b6bb58d9c0266c23_796_boot,"openfl.utils._AGALMiniAssembler.OpCode","boot",0x78788718,"openfl.utils._AGALMiniAssembler.OpCode.boot","openfl/utils/AGALMiniAssembler.hx",796,0x125eff83)
namespace openfl{
namespace utils{
namespace _AGALMiniAssembler{

void OpCode_obj::__construct(::String name,int numRegister,int emitCode,int flags){
            	HX_STACKFRAME(&_hx_pos_b6bb58d9c0266c23_804_new)
HXLINE( 805)		this->name = name;
HXLINE( 806)		this->numRegister = numRegister;
HXLINE( 807)		this->emitCode = emitCode;
HXLINE( 808)		this->flags = flags;
            	}

Dynamic OpCode_obj::__CreateEmpty() { return new OpCode_obj; }

void *OpCode_obj::_hx_vtable = 0;

Dynamic OpCode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpCode_obj > _hx_result = new OpCode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool OpCode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60536c68;
}

::String OpCode_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b6bb58d9c0266c23_813_toString)
HXDLIN( 813)		return ((((((((HX_("[OpCode name=\"",e7,51,9f,df) + this->name) + HX_("\", numRegister=",6a,35,c7,59)) + this->numRegister) + HX_(", emitCode=",29,c6,79,10)) + this->emitCode) + HX_(", flags=",8a,28,74,3f)) + this->flags) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpCode_obj,toString,return )


OpCode_obj::OpCode_obj()
{
}

void OpCode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpCode);
	HX_MARK_MEMBER_NAME(emitCode,"emitCode");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numRegister,"numRegister");
	HX_MARK_END_CLASS();
}

void OpCode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(emitCode,"emitCode");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numRegister,"numRegister");
}

::hx::Val OpCode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitCode") ) { return ::hx::Val( emitCode ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numRegister") ) { return ::hx::Val( numRegister ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OpCode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitCode") ) { emitCode=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numRegister") ) { numRegister=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpCode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("emitCode",20,a1,1c,38));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("numRegister",c9,f6,b5,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OpCode_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OpCode_obj,emitCode),HX_("emitCode",20,a1,1c,38)},
	{::hx::fsInt,(int)offsetof(OpCode_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsString,(int)offsetof(OpCode_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(OpCode_obj,numRegister),HX_("numRegister",c9,f6,b5,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OpCode_obj_sStaticStorageInfo = 0;
#endif

static ::String OpCode_obj_sMemberFields[] = {
	HX_("emitCode",20,a1,1c,38),
	HX_("flags",47,2b,8c,02),
	HX_("name",4b,72,ff,48),
	HX_("numRegister",c9,f6,b5,bc),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class OpCode_obj::__mClass;

void OpCode_obj::__register()
{
	OpCode_obj _hx_dummy;
	OpCode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._AGALMiniAssembler.OpCode",48,47,22,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OpCode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OpCode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpCode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpCode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OpCode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b6bb58d9c0266c23_796_boot)
HXDLIN( 796)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _AGALMiniAssembler

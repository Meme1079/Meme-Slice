// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JobData
#include <lime/system/JobData.h>
#endif
#ifndef INCLUDED_lime_system_WorkOutput
#include <lime/system/WorkOutput.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread_Tls
#include <sys/thread/Tls.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28b205a2b79bd506_38_new,"lime.system.WorkOutput","new",0xe6f69c4a,"lime.system.WorkOutput.new","lime/system/WorkOutput.hx",38,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_103_sendComplete,"lime.system.WorkOutput","sendComplete",0xc6c238f7,"lime.system.WorkOutput.sendComplete","lime/system/WorkOutput.hx",103,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_127_sendError,"lime.system.WorkOutput","sendError",0x478520ca,"lime.system.WorkOutput.sendError","lime/system/WorkOutput.hx",127,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_151_sendProgress,"lime.system.WorkOutput","sendProgress",0xcd252feb,"lime.system.WorkOutput.sendProgress","lime/system/WorkOutput.hx",151,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_165_resetJobProgress,"lime.system.WorkOutput","resetJobProgress",0x7ec86511,"lime.system.WorkOutput.resetJobProgress","lime/system/WorkOutput.hx",165,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_172_createThread,"lime.system.WorkOutput","createThread",0xb74c21bc,"lime.system.WorkOutput.createThread","lime/system/WorkOutput.hx",172,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_191_get_mode,"lime.system.WorkOutput","get_mode",0x97fb52c2,"lime.system.WorkOutput.get_mode","lime/system/WorkOutput.hx",191,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_199_get_activeJob,"lime.system.WorkOutput","get_activeJob",0x44518e18,"lime.system.WorkOutput.get_activeJob","lime/system/WorkOutput.hx",199,0x5941b446)
HX_LOCAL_STACK_FRAME(_hx_pos_28b205a2b79bd506_204_set_activeJob,"lime.system.WorkOutput","set_activeJob",0x89577024,"lime.system.WorkOutput.set_activeJob","lime/system/WorkOutput.hx",204,0x5941b446)
namespace lime{
namespace _hx_system{

void WorkOutput_obj::__construct( ::Dynamic mode){
            	HX_GC_STACKFRAME(&_hx_pos_28b205a2b79bd506_38_new)
HXLINE(  82)		this->_hx___activeJob =  ::sys::thread::Tls_obj::__alloc( HX_CTX );
HXLINE(  73)		this->_hx___jobComplete =  ::sys::thread::Tls_obj::__alloc( HX_CTX );
HXLINE(  67)		this->_hx___jobOutput =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
HXLINE(  49)		this->workIterations =  ::sys::thread::Tls_obj::__alloc( HX_CTX );
HXLINE(  86)		this->workIterations->set_value(0);
HXLINE(  87)		this->_hx___jobComplete->set_value(false);
HXLINE(  90)		bool _hx_tmp;
HXDLIN(  90)		if (::hx::IsNotNull( mode )) {
HXLINE(  90)			_hx_tmp = ( (bool)(mode) );
            		}
            		else {
HXLINE(  90)			_hx_tmp = true;
            		}
HXDLIN(  90)		this->_hx___mode = _hx_tmp;
            	}

Dynamic WorkOutput_obj::__CreateEmpty() { return new WorkOutput_obj; }

void *WorkOutput_obj::_hx_vtable = 0;

Dynamic WorkOutput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WorkOutput_obj > _hx_result = new WorkOutput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WorkOutput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c127516;
}

void WorkOutput_obj::sendComplete( ::Dynamic message,::cpp::VirtualArray transferList){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_103_sendComplete)
HXDLIN( 103)		if (!(( (bool)(this->_hx___jobComplete->get_value()) ))) {
HXLINE( 105)			this->_hx___jobComplete->set_value(true);
HXLINE( 114)			 ::sys::thread::Deque _hx_tmp = this->_hx___jobOutput;
HXDLIN( 114)			_hx_tmp->add( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("message",c7,35,11,9a),message)
            				->setFixed(1,HX_("jobID",18,c9,22,52),this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id)
            				->setFixed(2,HX_("event",1a,c8,c4,75),HX_("COMPLETE",b9,90,4d,d9))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(WorkOutput_obj,sendComplete,(void))

void WorkOutput_obj::sendError( ::Dynamic message,::cpp::VirtualArray transferList){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_127_sendError)
HXDLIN( 127)		if (!(( (bool)(this->_hx___jobComplete->get_value()) ))) {
HXLINE( 129)			this->_hx___jobComplete->set_value(true);
HXLINE( 138)			 ::sys::thread::Deque _hx_tmp = this->_hx___jobOutput;
HXDLIN( 138)			_hx_tmp->add( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("message",c7,35,11,9a),message)
            				->setFixed(1,HX_("jobID",18,c9,22,52),this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id)
            				->setFixed(2,HX_("event",1a,c8,c4,75),HX_("ERROR",a8,03,18,f1))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(WorkOutput_obj,sendError,(void))

void WorkOutput_obj::sendProgress( ::Dynamic message,::cpp::VirtualArray transferList){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_151_sendProgress)
HXDLIN( 151)		if (!(( (bool)(this->_hx___jobComplete->get_value()) ))) {
HXLINE( 160)			 ::sys::thread::Deque _hx_tmp = this->_hx___jobOutput;
HXDLIN( 160)			_hx_tmp->add( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("message",c7,35,11,9a),message)
            				->setFixed(1,HX_("jobID",18,c9,22,52),this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >()->id)
            				->setFixed(2,HX_("event",1a,c8,c4,75),HX_("PROGRESS",ad,87,b0,df))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(WorkOutput_obj,sendProgress,(void))

void WorkOutput_obj::resetJobProgress(){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_165_resetJobProgress)
HXLINE( 166)		this->_hx___jobComplete->set_value(false);
HXLINE( 167)		this->workIterations->set_value(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WorkOutput_obj,resetJobProgress,(void))

 ::sys::thread::_Thread::HaxeThread WorkOutput_obj::createThread( ::Dynamic executeThread){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_172_createThread)
HXLINE( 173)		 ::sys::thread::_Thread::HaxeThread thread = ::sys::thread::_Thread::HaxeThread_obj::create(executeThread,false);
HXLINE( 182)		return thread;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WorkOutput_obj,createThread,return )

bool WorkOutput_obj::get_mode(){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_191_get_mode)
HXDLIN( 191)		return this->_hx___mode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WorkOutput_obj,get_mode,return )

 ::lime::_hx_system::JobData WorkOutput_obj::get_activeJob(){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_199_get_activeJob)
HXDLIN( 199)		return this->_hx___activeJob->get_value().StaticCast<  ::lime::_hx_system::JobData >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WorkOutput_obj,get_activeJob,return )

 ::lime::_hx_system::JobData WorkOutput_obj::set_activeJob( ::lime::_hx_system::JobData value){
            	HX_STACKFRAME(&_hx_pos_28b205a2b79bd506_204_set_activeJob)
HXDLIN( 204)		return this->_hx___activeJob->set_value(value).StaticCast<  ::lime::_hx_system::JobData >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WorkOutput_obj,set_activeJob,return )


::hx::ObjectPtr< WorkOutput_obj > WorkOutput_obj::__new( ::Dynamic mode) {
	::hx::ObjectPtr< WorkOutput_obj > __this = new WorkOutput_obj();
	__this->__construct(mode);
	return __this;
}

::hx::ObjectPtr< WorkOutput_obj > WorkOutput_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic mode) {
	WorkOutput_obj *__this = (WorkOutput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WorkOutput_obj), true, "lime.system.WorkOutput"));
	*(void **)__this = WorkOutput_obj::_hx_vtable;
	__this->__construct(mode);
	return __this;
}

WorkOutput_obj::WorkOutput_obj()
{
}

void WorkOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WorkOutput);
	HX_MARK_MEMBER_NAME(workIterations,"workIterations");
	HX_MARK_MEMBER_NAME(_hx___mode,"__mode");
	HX_MARK_MEMBER_NAME(_hx___jobOutput,"__jobOutput");
	HX_MARK_MEMBER_NAME(_hx___jobComplete,"__jobComplete");
	HX_MARK_MEMBER_NAME(_hx___activeJob,"__activeJob");
	HX_MARK_END_CLASS();
}

void WorkOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(workIterations,"workIterations");
	HX_VISIT_MEMBER_NAME(_hx___mode,"__mode");
	HX_VISIT_MEMBER_NAME(_hx___jobOutput,"__jobOutput");
	HX_VISIT_MEMBER_NAME(_hx___jobComplete,"__jobComplete");
	HX_VISIT_MEMBER_NAME(_hx___activeJob,"__activeJob");
}

::hx::Val WorkOutput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mode() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__mode") ) { return ::hx::Val( _hx___mode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_mode") ) { return ::hx::Val( get_mode_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"activeJob") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeJob() ); }
		if (HX_FIELD_EQ(inName,"sendError") ) { return ::hx::Val( sendError_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__jobOutput") ) { return ::hx::Val( _hx___jobOutput ); }
		if (HX_FIELD_EQ(inName,"__activeJob") ) { return ::hx::Val( _hx___activeJob ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sendComplete") ) { return ::hx::Val( sendComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"sendProgress") ) { return ::hx::Val( sendProgress_dyn() ); }
		if (HX_FIELD_EQ(inName,"createThread") ) { return ::hx::Val( createThread_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__jobComplete") ) { return ::hx::Val( _hx___jobComplete ); }
		if (HX_FIELD_EQ(inName,"get_activeJob") ) { return ::hx::Val( get_activeJob_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_activeJob") ) { return ::hx::Val( set_activeJob_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"workIterations") ) { return ::hx::Val( workIterations ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resetJobProgress") ) { return ::hx::Val( resetJobProgress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WorkOutput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__mode") ) { _hx___mode=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"activeJob") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_activeJob(inValue.Cast<  ::lime::_hx_system::JobData >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__jobOutput") ) { _hx___jobOutput=inValue.Cast<  ::sys::thread::Deque >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__activeJob") ) { _hx___activeJob=inValue.Cast<  ::sys::thread::Tls >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__jobComplete") ) { _hx___jobComplete=inValue.Cast<  ::sys::thread::Tls >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"workIterations") ) { workIterations=inValue.Cast<  ::sys::thread::Tls >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WorkOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("workIterations",67,c8,28,3a));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("__mode",83,36,59,f7));
	outFields->push(HX_("__jobOutput",be,37,4e,7f));
	outFields->push(HX_("__jobComplete",b6,92,be,1e));
	outFields->push(HX_("activeJob",d7,25,71,13));
	outFields->push(HX_("__activeJob",b7,6e,9d,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WorkOutput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Tls */ ,(int)offsetof(WorkOutput_obj,workIterations),HX_("workIterations",67,c8,28,3a)},
	{::hx::fsBool,(int)offsetof(WorkOutput_obj,_hx___mode),HX_("__mode",83,36,59,f7)},
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(int)offsetof(WorkOutput_obj,_hx___jobOutput),HX_("__jobOutput",be,37,4e,7f)},
	{::hx::fsObject /*  ::sys::thread::Tls */ ,(int)offsetof(WorkOutput_obj,_hx___jobComplete),HX_("__jobComplete",b6,92,be,1e)},
	{::hx::fsObject /*  ::sys::thread::Tls */ ,(int)offsetof(WorkOutput_obj,_hx___activeJob),HX_("__activeJob",b7,6e,9d,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WorkOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String WorkOutput_obj_sMemberFields[] = {
	HX_("workIterations",67,c8,28,3a),
	HX_("__mode",83,36,59,f7),
	HX_("__jobOutput",be,37,4e,7f),
	HX_("__jobComplete",b6,92,be,1e),
	HX_("__activeJob",b7,6e,9d,41),
	HX_("sendComplete",21,d2,84,c0),
	HX_("sendError",60,89,99,33),
	HX_("sendProgress",15,c9,e7,c6),
	HX_("resetJobProgress",3b,db,1f,ff),
	HX_("createThread",e6,ba,0e,b1),
	HX_("get_mode",ec,8e,1b,c8),
	HX_("get_activeJob",ae,f9,d4,d4),
	HX_("set_activeJob",ba,db,da,19),
	::String(null()) };

::hx::Class WorkOutput_obj::__mClass;

void WorkOutput_obj::__register()
{
	WorkOutput_obj _hx_dummy;
	WorkOutput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.WorkOutput",58,6f,94,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WorkOutput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WorkOutput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WorkOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WorkOutput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system

// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_Preloader
#include <lime/utils/Preloader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_32_new,"lime.utils.Preloader","new",0x2d829572,"lime.utils.Preloader.new","lime/utils/Preloader.hx",32,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_111_addLibrary,"lime.utils.Preloader","addLibrary",0x72ea3408,"lime.utils.Preloader.addLibrary","lime/utils/Preloader.hx",111,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_116_addLibraryName,"lime.utils.Preloader","addLibraryName",0xd5217673,"lime.utils.Preloader.addLibraryName","lime/utils/Preloader.hx",116,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_123_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",123,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_138_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",138,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_156_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",156,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_170_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",170,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_187_loadedAssetLibrary,"lime.utils.Preloader","loadedAssetLibrary",0x526bc9be,"lime.utils.Preloader.loadedAssetLibrary","lime/utils/Preloader.hx",187,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_208_start,"lime.utils.Preloader","start",0x6e4321f4,"lime.utils.Preloader.start","lime/utils/Preloader.hx",208,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_223_update,"lime.utils.Preloader","update",0x8d85b837,"lime.utils.Preloader.update","lime/utils/Preloader.hx",223,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_226_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",226,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_244_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",244,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_272_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",272,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_293_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",293,0xe721f000)
namespace lime{
namespace utils{

void Preloader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_32_new)
HXLINE(  42)		this->bytesTotalCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->bytesLoadedCache2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->bytesLoadedCache =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  36)		this->onProgress =  ::lime::app::_Event_Int_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  35)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  60)		this->bytesLoaded = 0;
HXLINE(  61)		this->bytesTotal = 0;
HXLINE(  63)		this->libraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  64)		this->libraryNames = ::Array_obj< ::String >::__new();
HXLINE(  66)		this->onProgress->add(this->update_dyn(),null(),null());
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x773c4d3e;
}

void Preloader_obj::addLibrary( ::lime::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_111_addLibrary)
HXDLIN( 111)		this->libraries->push(library);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibrary,(void))

void Preloader_obj::addLibraryName(::String name){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_116_addLibraryName)
HXDLIN( 116)		if ((this->libraryNames->indexOf(name,null()) == -1)) {
HXLINE( 118)			this->libraryNames->push(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibraryName,(void))

void Preloader_obj::load(){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_123_load)
HXDLIN( 123)		 ::lime::utils::Preloader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			::Array< ::Dynamic> _g1 = this->libraries;
HXDLIN( 124)			while((_g < _g1->length)){
HXLINE( 124)				 ::lime::utils::AssetLibrary library = _g1->__get(_g).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 124)				_g = (_g + 1);
HXLINE( 126)				 ::lime::utils::Preloader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 126)				_hx_tmp->bytesTotal = (_hx_tmp->bytesTotal + library->bytesTotal);
            			}
            		}
HXLINE( 129)		this->loadedLibraries = -1;
HXLINE( 130)		this->preloadStarted = false;
HXLINE( 132)		{
HXLINE( 132)			int _g2 = 0;
HXDLIN( 132)			::Array< ::Dynamic> _g3 = this->libraries;
HXDLIN( 132)			while((_g2 < _g3->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::utils::Preloader,_gthis, ::lime::utils::AssetLibrary,library1) HXARGC(2)
            				void _hx_run(int loaded,int total){
            					HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_138_load)
HXLINE( 139)					if (!(_gthis->bytesLoadedCache->exists(library1))) {
HXLINE( 141)						 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 141)						_gthis1->bytesLoaded = (_gthis1->bytesLoaded + loaded);
            					}
            					else {
HXLINE( 145)						 ::lime::utils::Preloader _gthis2 = _gthis;
HXDLIN( 145)						int _gthis3 = _gthis2->bytesLoaded;
HXDLIN( 145)						_gthis2->bytesLoaded = (_gthis3 + (loaded - _gthis->bytesLoadedCache->get_int(library1)));
            					}
HXLINE( 148)					_gthis->bytesLoadedCache->set(library1,loaded);
HXLINE( 150)					if (!(_gthis->simulateProgress)) {
HXLINE( 152)						_gthis->onProgress->dispatch(_gthis->bytesLoaded,_gthis->bytesTotal);
            					}
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::utils::Preloader,_gthis, ::lime::utils::AssetLibrary,library1) HXARGC(1)
            				void _hx_run( ::lime::utils::AssetLibrary _){
            					HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_156_load)
HXLINE( 157)					if (!(_gthis->bytesLoadedCache->exists(library1))) {
HXLINE( 159)						 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 159)						_gthis1->bytesLoaded = (_gthis1->bytesLoaded + library1->bytesTotal);
            					}
            					else {
HXLINE( 163)						 ::lime::utils::Preloader _gthis2 = _gthis;
HXDLIN( 163)						int _gthis3 = _gthis2->bytesLoaded;
HXDLIN( 163)						int _hx_tmp = ::Std_obj::_hx_int(( (Float)(library1->bytesTotal) ));
HXDLIN( 163)						_gthis2->bytesLoaded = (_gthis3 + (_hx_tmp - _gthis->bytesLoadedCache->get_int(library1)));
            					}
HXLINE( 166)					_gthis->loadedAssetLibrary(null());
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run( ::Dynamic e){
            					HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_170_load)
HXLINE( 170)					::lime::utils::Log_obj::error(e,::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),170,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("load",26,9a,b7,47)));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 132)				 ::lime::utils::AssetLibrary library1 = _g3->__get(_g2).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 132)				_g2 = (_g2 + 1);
HXLINE( 134)				::lime::utils::Log_obj::verbose(HX_("Preloading asset library",44,27,6d,96),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),134,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("load",26,9a,b7,47)));
HXLINE( 136)				library1->load()->onProgress( ::Dynamic(new _hx_Closure_0(_gthis,library1)))->onComplete( ::Dynamic(new _hx_Closure_1(_gthis,library1)))->onError( ::Dynamic(new _hx_Closure_2()));
            			}
            		}
HXLINE( 176)		{
HXLINE( 176)			int _g4 = 0;
HXDLIN( 176)			::Array< ::String > _g5 = this->libraryNames;
HXDLIN( 176)			while((_g4 < _g5->length)){
HXLINE( 176)				::String name = _g5->__get(_g4);
HXDLIN( 176)				_g4 = (_g4 + 1);
HXLINE( 178)				 ::lime::utils::Preloader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)				_hx_tmp1->bytesTotal = (_hx_tmp1->bytesTotal + 200);
            			}
            		}
HXLINE( 181)		this->loadedLibraries++;
HXLINE( 182)		this->preloadStarted = true;
HXLINE( 183)		this->updateProgress();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,load,(void))

void Preloader_obj::loadedAssetLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_187_loadedAssetLibrary)
HXLINE( 188)		this->loadedLibraries++;
HXLINE( 190)		int current = this->loadedLibraries;
HXLINE( 191)		if (!(this->preloadStarted)) {
HXLINE( 191)			current = (current + 1);
            		}
HXLINE( 193)		int totalLibraries = (this->libraries->length + this->libraryNames->length);
HXLINE( 195)		if (::hx::IsNotNull( name )) {
HXLINE( 197)			::lime::utils::Log_obj::verbose(((((((HX_("Loaded asset library: ",36,ba,cc,98) + name) + HX_(" [",3b,1c,00,00)) + current) + HX_("/",2f,00,00,00)) + totalLibraries) + HX_("]",5d,00,00,00)),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),197,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("loadedAssetLibrary",90,0a,d2,6a)));
            		}
            		else {
HXLINE( 201)			::lime::utils::Log_obj::verbose(((((HX_("Loaded asset library [",cb,a3,cc,98) + current) + HX_("/",2f,00,00,00)) + totalLibraries) + HX_("]",5d,00,00,00)),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),201,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("loadedAssetLibrary",90,0a,d2,6a)));
            		}
HXLINE( 204)		this->updateProgress();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,loadedAssetLibrary,(void))

void Preloader_obj::start(){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_208_start)
HXLINE( 209)		bool _hx_tmp;
HXDLIN( 209)		bool _hx_tmp1;
HXDLIN( 209)		if (!(this->complete)) {
HXLINE( 209)			_hx_tmp1 = this->simulateProgress;
            		}
            		else {
HXLINE( 209)			_hx_tmp1 = true;
            		}
HXDLIN( 209)		if (!(_hx_tmp1)) {
HXLINE( 209)			_hx_tmp = !(this->preloadComplete);
            		}
            		else {
HXLINE( 209)			_hx_tmp = true;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 209)			return;
            		}
HXLINE( 211)		this->complete = true;
HXLINE( 220)		this->onComplete->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

void Preloader_obj::update(int loaded,int total){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_223_update)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))

void Preloader_obj::updateProgress(){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_226_updateProgress)
HXDLIN( 226)		 ::lime::utils::Preloader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 227)		if (!(this->simulateProgress)) {
HXLINE( 229)			this->onProgress->dispatch(this->bytesLoaded,this->bytesTotal);
            		}
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		if ((this->loadedLibraries == this->libraries->length)) {
HXLINE( 233)			_hx_tmp = !(this->initLibraryNames);
            		}
            		else {
HXLINE( 233)			_hx_tmp = false;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 235)			this->initLibraryNames = true;
HXLINE( 237)			{
HXLINE( 237)				int _g = 0;
HXDLIN( 237)				::Array< ::String > _g1 = this->libraryNames;
HXDLIN( 237)				while((_g < _g1->length)){
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,name, ::lime::utils::Preloader,_gthis) HXARGC(2)
            					void _hx_run(int loaded,int total){
            						HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_244_updateProgress)
HXLINE( 244)						if ((total > 0)) {
HXLINE( 246)							if (!(_gthis->bytesTotalCache->exists(name))) {
HXLINE( 248)								_gthis->bytesTotalCache->set(name,total);
HXLINE( 249)								 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 249)								_gthis1->bytesTotal = (_gthis1->bytesTotal + (total - 200));
            							}
HXLINE( 252)							if ((loaded > total)) {
HXLINE( 252)								loaded = total;
            							}
HXLINE( 254)							if (!(_gthis->bytesLoadedCache2->exists(name))) {
HXLINE( 256)								 ::lime::utils::Preloader _gthis2 = _gthis;
HXDLIN( 256)								_gthis2->bytesLoaded = (_gthis2->bytesLoaded + loaded);
            							}
            							else {
HXLINE( 260)								 ::lime::utils::Preloader _gthis3 = _gthis;
HXDLIN( 260)								int _gthis4 = _gthis3->bytesLoaded;
HXDLIN( 260)								_gthis3->bytesLoaded = (_gthis4 + (loaded - _gthis->bytesLoadedCache2->get_int(name)));
            							}
HXLINE( 263)							_gthis->bytesLoadedCache2->set(name,loaded);
HXLINE( 265)							if (!(_gthis->simulateProgress)) {
HXLINE( 267)								_gthis->onProgress->dispatch(_gthis->bytesLoaded,_gthis->bytesTotal);
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC2((void))

            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,name, ::lime::utils::Preloader,_gthis) HXARGC(1)
            					void _hx_run( ::lime::utils::AssetLibrary library){
            						HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_272_updateProgress)
HXLINE( 273)						int total = 200;
HXLINE( 275)						if (_gthis->bytesTotalCache->exists(name)) {
HXLINE( 277)							total = _gthis->bytesTotalCache->get_int(name);
            						}
HXLINE( 280)						if (!(_gthis->bytesLoadedCache2->exists(name))) {
HXLINE( 282)							 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 282)							_gthis1->bytesLoaded = (_gthis1->bytesLoaded + total);
            						}
            						else {
HXLINE( 286)							 ::lime::utils::Preloader _gthis2 = _gthis;
HXDLIN( 286)							int _gthis3 = _gthis2->bytesLoaded;
HXDLIN( 286)							_gthis2->bytesLoaded = (_gthis3 + (total - _gthis->bytesLoadedCache2->get_int(name)));
            						}
HXLINE( 289)						_gthis->loadedAssetLibrary(name);
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            					void _hx_run( ::Dynamic e){
            						HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_293_updateProgress)
HXLINE( 293)						::lime::utils::Log_obj::error(e,::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),293,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("updateProgress",d6,ea,54,bb)));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 237)					::String name = _g1->__get(_g);
HXDLIN( 237)					_g = (_g + 1);
HXLINE( 239)					::lime::utils::Log_obj::verbose((HX_("Preloading asset library: ",ea,b2,78,e9) + name),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),239,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("updateProgress",d6,ea,54,bb)));
HXLINE( 241)					::lime::utils::Assets_obj::loadLibrary(name)->onProgress( ::Dynamic(new _hx_Closure_0(name,_gthis)))->onComplete( ::Dynamic(new _hx_Closure_1(name,_gthis)))->onError( ::Dynamic(new _hx_Closure_2()));
            				}
            			}
            		}
HXLINE( 299)		bool _hx_tmp1;
HXDLIN( 299)		if (!(this->simulateProgress)) {
HXLINE( 299)			_hx_tmp1 = (this->loadedLibraries == (this->libraries->length + this->libraryNames->length));
            		}
            		else {
HXLINE( 299)			_hx_tmp1 = false;
            		}
HXDLIN( 299)		if (_hx_tmp1) {
HXLINE( 302)			if (!(this->preloadComplete)) {
HXLINE( 304)				this->preloadComplete = true;
HXLINE( 306)				::lime::utils::Log_obj::verbose(HX_("Preload complete",10,f4,03,24),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),306,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("updateProgress",d6,ea,54,bb)));
            			}
HXLINE( 309)			this->start();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,updateProgress,(void))


::hx::ObjectPtr< Preloader_obj > Preloader_obj::__new() {
	::hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Preloader_obj *__this = (Preloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "lime.utils.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_MARK_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_MARK_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_MARK_MEMBER_NAME(libraries,"libraries");
	HX_MARK_MEMBER_NAME(libraryNames,"libraryNames");
	HX_MARK_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_MARK_MEMBER_NAME(loadedStage,"loadedStage");
	HX_MARK_MEMBER_NAME(preloadComplete,"preloadComplete");
	HX_MARK_MEMBER_NAME(preloadStarted,"preloadStarted");
	HX_MARK_MEMBER_NAME(simulateProgress,"simulateProgress");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_VISIT_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_VISIT_MEMBER_NAME(libraries,"libraries");
	HX_VISIT_MEMBER_NAME(libraryNames,"libraryNames");
	HX_VISIT_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_VISIT_MEMBER_NAME(loadedStage,"loadedStage");
	HX_VISIT_MEMBER_NAME(preloadComplete,"preloadComplete");
	HX_VISIT_MEMBER_NAME(preloadStarted,"preloadStarted");
	HX_VISIT_MEMBER_NAME(simulateProgress,"simulateProgress");
}

::hx::Val Preloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return ::hx::Val( libraries ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress ); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"addLibrary") ) { return ::hx::Val( addLibrary_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { return ::hx::Val( loadedStage ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { return ::hx::Val( libraryNames ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloadStarted") ) { return ::hx::Val( preloadStarted ); }
		if (HX_FIELD_EQ(inName,"addLibraryName") ) { return ::hx::Val( addLibraryName_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateProgress") ) { return ::hx::Val( updateProgress_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { return ::hx::Val( bytesTotalCache ); }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { return ::hx::Val( loadedLibraries ); }
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { return ::hx::Val( preloadComplete ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { return ::hx::Val( bytesLoadedCache ); }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { return ::hx::Val( initLibraryNames ); }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { return ::hx::Val( simulateProgress ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { return ::hx::Val( bytesLoadedCache2 ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadedAssetLibrary") ) { return ::hx::Val( loadedAssetLibrary_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Preloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::lime::app::_Event_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { loadedStage=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { libraryNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloadStarted") ) { preloadStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { bytesTotalCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { loadedLibraries=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { preloadComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { bytesLoadedCache=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { initLibraryNames=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { simulateProgress=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { bytesLoadedCache2=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("complete",b9,00,c8,7f));
	outFields->push(HX_("onComplete",f8,d4,7e,5d));
	outFields->push(HX_("onProgress",ec,cb,e1,63));
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesLoadedCache",52,f1,40,0f));
	outFields->push(HX_("bytesLoadedCache2",a0,36,92,49));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("bytesTotalCache",29,70,4f,ba));
	outFields->push(HX_("initLibraryNames",fd,89,cd,d2));
	outFields->push(HX_("libraries",19,50,f8,18));
	outFields->push(HX_("libraryNames",cd,aa,8b,df));
	outFields->push(HX_("loadedLibraries",54,3f,a7,0f));
	outFields->push(HX_("loadedStage",79,60,2d,7e));
	outFields->push(HX_("preloadComplete",a2,75,67,9d));
	outFields->push(HX_("preloadStarted",78,84,cb,31));
	outFields->push(HX_("simulateProgress",71,2f,7f,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_("complete",b9,00,c8,7f)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Preloader_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Int_Void */ ,(int)offsetof(Preloader_obj,onProgress),HX_("onProgress",ec,cb,e1,63)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Preloader_obj,bytesLoadedCache),HX_("bytesLoadedCache",52,f1,40,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Preloader_obj,bytesLoadedCache2),HX_("bytesLoadedCache2",a0,36,92,49)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Preloader_obj,bytesTotalCache),HX_("bytesTotalCache",29,70,4f,ba)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,initLibraryNames),HX_("initLibraryNames",fd,89,cd,d2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Preloader_obj,libraries),HX_("libraries",19,50,f8,18)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Preloader_obj,libraryNames),HX_("libraryNames",cd,aa,8b,df)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,loadedLibraries),HX_("loadedLibraries",54,3f,a7,0f)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,loadedStage),HX_("loadedStage",79,60,2d,7e)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,preloadComplete),HX_("preloadComplete",a2,75,67,9d)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,preloadStarted),HX_("preloadStarted",78,84,cb,31)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,simulateProgress),HX_("simulateProgress",71,2f,7f,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_("complete",b9,00,c8,7f),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onProgress",ec,cb,e1,63),
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesLoadedCache",52,f1,40,0f),
	HX_("bytesLoadedCache2",a0,36,92,49),
	HX_("bytesTotal",59,57,da,45),
	HX_("bytesTotalCache",29,70,4f,ba),
	HX_("initLibraryNames",fd,89,cd,d2),
	HX_("libraries",19,50,f8,18),
	HX_("libraryNames",cd,aa,8b,df),
	HX_("loadedLibraries",54,3f,a7,0f),
	HX_("loadedStage",79,60,2d,7e),
	HX_("preloadComplete",a2,75,67,9d),
	HX_("preloadStarted",78,84,cb,31),
	HX_("simulateProgress",71,2f,7f,a6),
	HX_("addLibrary",da,52,fa,a6),
	HX_("addLibraryName",45,66,be,40),
	HX_("load",26,9a,b7,47),
	HX_("loadedAssetLibrary",90,0a,d2,6a),
	HX_("start",62,74,0b,84),
	HX_("update",09,86,05,87),
	HX_("updateProgress",d6,ea,54,bb),
	::String(null()) };

::hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	Preloader_obj _hx_dummy;
	Preloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.Preloader",80,b4,12,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils

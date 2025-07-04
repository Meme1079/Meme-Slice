#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(DISCORD_DISABLE_IO_THREAD) && !defined(NO_DISCORD_DISABLE_IO_THREAD)
#define DISCORD_DISABLE_IO_THREAD 
#endif

#if !defined(HX_MACOS) && !defined(NO_HX_MACOS)
#define HX_MACOS 
#endif

#if !defined(HXCPP_M64) && !defined(NO_HXCPP_M64)
#define HXCPP_M64 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HXCPP_CHECK_POINTER) && !defined(NO_HXCPP_CHECK_POINTER)
#define HXCPP_CHECK_POINTER 
#endif

#if !defined(HXCPP_STACK_TRACE) && !defined(NO_HXCPP_STACK_TRACE)
#define HXCPP_STACK_TRACE 
#endif

#if !defined(HXCPP_STACK_LINE) && !defined(NO_HXCPP_STACK_LINE)
#define HXCPP_STACK_LINE 
#endif

#if !defined(HX_SMART_STRINGS) && !defined(NO_HX_SMART_STRINGS)
#define HX_SMART_STRINGS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 430
#endif

#include <hxcpp.h>

#endif

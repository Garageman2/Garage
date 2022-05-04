#pragma once

#ifdef GR_PLATFORM_WINDOWS
	#ifdef GR_BUILD_DLL
		#define GARAGE_API __declspec(dllexport)
	#else 
		#define GARAGE_API __declspec(dllimport)
	#endif
#else 
	#error Garage only supports Windows!
#endif
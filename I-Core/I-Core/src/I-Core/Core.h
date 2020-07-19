#pragma once

#ifdef IC_PLATFORM_WINDOWS
	#ifdef IC_BUILD_DLL
		#define ICore_API __declspec(dllexport)
	#else
		#define ICore_API __declspec(dllimport)
	#endif
#else
	#error ICore only supports windows!
#endif

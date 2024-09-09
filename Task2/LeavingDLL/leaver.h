#pragma once

//#define LEAVING_DLL_EXPORTS
#ifdef LEAVINGDLL_EXPORTS
#define LEAVING_API __declspec(dllexport)
#else
#define LEAVING_API __declspec(dllimport)
#endif // LEAVING_DLL_EXPORTS

#include <iostream>

namespace leavings
{
	class LEAVING_API Leaver 
	{
	public:
		std::string leave(std::string name);
	};
}



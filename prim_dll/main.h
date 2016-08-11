#pragma once

#include <windows.h>
#include <iostream>
#include <vector>
#include <map>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

void DLL_EXPORT prim (std::map <std::string, std::vector <int>> nodes, std::map <std::pair <std::string, std::string>, std::pair <int, std::string>> edges);
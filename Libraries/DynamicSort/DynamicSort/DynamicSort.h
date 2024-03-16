#pragma once

#ifdef DynamicSort_EXPORTS
#define DynamicSort_API _declspec(dllexport)
#else
#define DynamicSort_API _declspec(dllimport)
#endif

extern "C" DynamicSort_API int DynamicSort(int a, int* arr);
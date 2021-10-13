#ifndef BACKEND_H
#define BACKEND_H
#define DLL_EXPORT __declspec(dllexport)
#endif

extern "C"
{
	int DLL_EXPORT foobar();
}
#ifdef _WIN32
#ifdef WIN_EXPORT
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif
#else
#define DLL_EXPORT
#endif

extern "C"
{
	int DLL_EXPORT SignTransaction();
}
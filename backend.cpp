#include "backend.h"

extern "C"
{
	int DLL_EXPORT foobar()
	{
		return 32;
	}
}
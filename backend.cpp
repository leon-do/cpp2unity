#include "backend.h"

extern "C"
{
	int EXPORTED foobar()
	{
		return 32;
	}
}
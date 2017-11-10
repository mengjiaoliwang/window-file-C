#include "mydll.h"

__declspec(dllexport) int mymlt(int a, int b)
{
	return a*b;
}
__declspec(dllexport) int mydiv(int a, int b)
{
	return a / b;
}
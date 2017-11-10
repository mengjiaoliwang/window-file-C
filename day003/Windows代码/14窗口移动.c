#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <Windows.h>

int main()
{
	int x, y=200;
	for (x = 0; x < 1000; x++)
	{
		SetWindowPos((HWND)0x00060ADC, NULL, x, y, 300, 200, 0);
		Sleep(100);
	}


	return EXIT_SUCCESS;
}
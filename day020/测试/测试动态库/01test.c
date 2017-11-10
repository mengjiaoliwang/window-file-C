#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<Windows.h>
#include"mydll.h"

//#pragma comment(lib,"./¶¯Ì¬¿â.lib")
typedef int(*opt)(int, int);

int main()
{
	HANDLE mydll;
	mydll = LoadLibrary("../Debug/¶¯Ì¬¿â.dll");
	opt o = (opt)GetProcAddress(mydll, "mymlt");
	int val = o(10, 20);

	printf("%d\n", val);
	//int val = mymlt(10, 20);
	//printf("%d\n", val);
	//val = mydiv(20, 10);
	//printf("%d\n", val);
	return EXIT_SUCCESS;
}
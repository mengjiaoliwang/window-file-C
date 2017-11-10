#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define AAA 10

//°²È«µÄ
const int bbb = 10;
int main07()
{
	const int aaa = 10;
	int * p = &bbb;

	*p = 1000;
	printf("%d\n", bbb);


	system("pause");
	return EXIT_SUCCESS;
}
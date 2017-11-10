#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{

	//
	//for (int a = 0; a < 10; a++)
	//{
	//	printf("%d\n", a);
	//}
	//int a = 0;
	//for (; ; )
	//{	
	//	if (a >= 10)
	//	{
	//		break;
	//	}
	//	printf("%d\n", a);
	//	a++;
	//}
	//for (;;)
	//{
	//	printf("a");
	//}
	for (int a = 0, b = 0; a < 10; a++, b += 2)
	{
		printf("%d\n", a);
		printf("%d\n", b);
	}
	return EXIT_SUCCESS;
}
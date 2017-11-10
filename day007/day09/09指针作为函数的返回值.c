#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

char * fun01(char * buf)
{
	gets(buf);
	return buf;
}

int main901()
{
	char buf[100];
	//char * p = fun01(buf);
	printf("%s\n", fun01(buf));


	return EXIT_SUCCESS;
}

/*
指针作为函数返回值时，要避免野指针出现

*/
int * fun02()
{
	int arr[] = { 1,2,3,4,5,6,7};
	printf("%p\n", arr);
	getchar();
	return arr;
}
int main09(void)
{
	//野指针
	int *p = fun02();
	for (int i = 0; i < 7; i++)
		printf("%d\n", p[i]);

	return 0;
}
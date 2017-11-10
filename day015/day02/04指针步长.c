#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main04()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int *p = arr;//0xff00 0xff04

	p=&p[5];//相当于加sizeof(int);
	*p = 20;
	p = 20;
	p--;
	//printf("%p\n", p);
	p = &arr[0];
	p += 5;
	//p = &p[-2];//(p-2)
	p = p - 2;
	*p = 10;

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	//printf("%p\n", arr);
	//printf("%p\n", p);
	//
	//int val = p - arr;
	//printf("%d\n", val);

	return EXIT_SUCCESS;
}
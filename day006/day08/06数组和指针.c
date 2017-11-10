#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main601()
{
	/*
	指针可以指向一个数组的首地址，同时可以代替数组表示其中任意元素
	指针可以进行加减
	*/
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr);
	//arr = 10;

	//int *p = arr;
	int *p = &arr[0];
	//*p = 100;
	//p[1] = 100;
	for (int i = 0; i < 10; i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", *p);
		printf("%p\n", p);
		p++;//地址+sizeof(int)
		//p += 4;//地址+sizeof(int)* 4
		/*
		p+1->下一个
		p+4->下一个
		*/
	}
	return EXIT_SUCCESS;
}
int main602(void)
{
	char arr[] = "hello world";

	char *p = arr;
	for (int i = 0; i < 11; i++)
	{
		//printf("%c\n", *p);
		printf("%p\n", p);
		p++;//地址+sizeof(char)
	}
}
int main603()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *p = arr;
	////p++;//&arr[1];
	//p = &arr[5];
	//printf("%d\n",p - arr);
	////p++;
	//p = &arr[5];
	//int val = p - arr;//(p-arr)/sizeof(int)
	//printf("%d\n", val);
	//int a = 10;
	//printf("%p\n", &a);
	//printf("%p\n", &a - 1);
	//printf("%p\n", &a + 1);
}
int main604()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int *p = arr;

	for (int i = 0; i < 10; i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", p[i]);
		printf("%d\n", *(p+i));
		//p++;
		/*
		通过指针打印数组元素，同时不能改变指针的指向
		*/
	}

	printf("%p\n", arr);
	printf("%p\n", p);
}
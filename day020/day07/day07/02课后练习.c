#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include "标头.h"


struct stu
{
	char name[21];
	int age;
};

void sort(void * arr, size_t count, size_t size, int (*opt)(void *, void *))
{
	char * arr1 = (char*) arr;
	char * temp = (char*)malloc(size);

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			char * first = arr1 + size*j;
			char * second = arr1 + size*(j + 1);
			if (opt(first, second))
			{
				memcpy(temp, first,size);
				memcpy(first, second, size);
				memcpy(second, temp, size);
			}
		}
	}


}

int array_int(void * val1, void *val2)
{
	int * v1 = (int*)val1;
	int * v2 = (int*)val2;
	return *v1 > *v2;
}


int array_struct(void * val1, void * val2)
{
	struct stu * v1 = (struct stu *)val1;
	struct stu * v2 = (struct stu *)val2;
	return v1->age > v2->age;

}

int main02()
{
#if 0
	int arr[] = { 5,7,2,9,3,8,6,4,1,10 };
	sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), array_int);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	//#else if 1
	int arr[] = { 5,7,2,9,3,8,6,4,1,10 };
	sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), array_int);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
#endif // 0



	struct stu ss[5] =
	{
		{ "张三",30 },
		{ "李四",18 },
		{ "王五",48 },
		{ "赵六",59 },
		{ "孙七",12 },
	};

	sort(ss, sizeof(ss) / sizeof(ss[0]), sizeof(ss[0]), array_struct);

	for (int i = 0; i < 5; i++)
	{
		printf("姓名：%s\t年龄：%d\n", ss[i].name, ss[i].age);
	}

	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0301()
{
	//空指针
	//int * p = NULL;
	int *p = malloc(10);
	//写
	//*p = 100;//err
	//读
	//printf("%d\n", *p);//err
	//同一内存地址释放多次会报错
	free(p);
	p = NULL;
	//p是野指针  指针指向了一个未知的内存空间
	//操作野指针对应的空间可能会报错
	//在堆空间使用完成释放之后需要将指针置为空
	//*p = 100;
	//printf("%d\n", *p);


	return EXIT_SUCCESS;
}

void fun01(void * a)
{
	for (int i = 0; i < 5; i++)
		printf("%d\n", ((int *)a)[i]);
}



int main0302(void)
{
	//万能指针
	int arr[] = { 1,2,3,4,5 };
	//void * p = arr;
	//char * p = arr;
	//long long * p = arr;
	//for (int i = 0; i < 5; i++)
	//	printf("%d\n", ((int *)p)[i]);
	fun01(arr);


}
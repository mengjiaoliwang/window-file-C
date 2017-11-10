#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main08()
{
	//int * p = (int *)malloc(sizeof(int));
	//*p = 100;

	//printf("%d\n", *p);

	//free(p);


	//int * p = (int *)malloc(sizeof(int) * 20);
	//memset(p, 0, 80);
	//calloc开辟堆空间开辟后自动将数据初始化为0
	//int *p = (int *)calloc(20, sizeof(int));
	////printf("%s\n", p);
	//for (int i = 0; i < 20; i++)
	//{
	//	printf("%d\n", p[i]);
	//}
	//free(p);

	int * p = (int *)malloc(sizeof(int) * 10);//40
	for (int i = 0; i < 10; i++)
		p[i] = i;
	//int *p1 = (int *)malloc(sizeof(int) * 10);
	int * p1 = (int *)realloc(p, 80);// 整体大小
	//for (int i = 10; i < 20; i++)
	//	p1[i] = i;


	for (int i = 0; i < 20; i++)
		printf("%d\n", p1[i]);



	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1001()
{

	//指向数组的指针
	//int arr[] = { 1,2,3 };
	//int * p = arr;
	//指针数组
	int a = 10;
	int b = 20;
	int c = 30;
	int * p[3] = { &a,&b,&c };
	//p[0] == &a;
	*p[0] = 100;
	*p[1] = 200;
	*p[2] = 200;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return EXIT_SUCCESS;
}

int main1002(void)
{
	int a[] = { 1,2,3 };
	int b[] = { 9,10,'j' };
	int c[] = { 'Q','K','A' };

	int *p[3] = { a,b,c };
	//数组下标+偏移量
	//*(p[0] + 1) = 100;
	//*(p[1] + 2) = 'Q';
	//二维数组
	//p[0][1] = 100;
	//p[1][2] = 'Q';
	//二级指针
	*(*(p + 1) + 2) = 'Q';
	//printf("%p\n", p[1]);
	//printf("%p\n", b);
	//printf("%p\n", *(p + 1));

	//printf("%d\n", a[0]);
	//printf("%d\n", a[1]);
	//printf("%d\n", a[2]);
	printf("%c\n", b[2]);

}
int main1003()
{
	int a[] = { 1,2,3 };
	int b[] = { 9,10,'j' };
	int c[] = { 'Q','K','A' };

	int *p[3] = { a,b,c };

	//数组下标+偏移量
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d ", *(p[i] + j));
	//	}
	//	printf("\n");
	//}
	//二维数组
	//可以将指针数组理解为二维数组，但是不能讲二维数组理解为指针数组，因为会丢失维度
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d ", p[i][j]);
	//	}
	//	printf("\n");
	//}

	//二级指针
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p + i) + j));
			printf("%d ", *(p[i] + j));
		}
		printf("\n");
	}
}

int main1004(void)
{
	int a[] = { 1,2,3 };
	int b[] = { 9,10,'j' };
	int c[] = { 'Q','K','A' };

	int *p[3] = { a,b,c };

	//printf("%p\n", p[1]);
	//printf("%p\n", *(p+1));

	//printf("%d\n", sizeof(p));
	//printf("元素个数：%d\n", sizeof(p) / sizeof(p[0]));
	//printf("元素个数：%d\n", sizeof(p) / sizeof(int*));
}
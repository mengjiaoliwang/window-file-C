#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*
1、堆空间多次释放
2、更改堆空间首地址
3、开辟野指针对应的空间
4、开辟空间和数据类型要对应
5、在函数中开辟堆空间需要使用地址传递
*/
int main1301()
{
	int *p = (int*)malloc(2);


	*p = 100;
	*(p + 5) = 1000;
	
	printf("%d\n", *p);
	//printf("%p\n", p);

	free(p);

	system("pause");
	return EXIT_SUCCESS;
}

void fun12(int ** p)
{
	*p = (int*)malloc(sizeof(int) * 10);
}
int main1302(void)
{
	int *p = NULL;
	//printf("%p\n", p);
	fun12(&p);
	//printf("%p\n", p);


	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);

	return 0;

}
void fun13(int **a)
{
	*a = 100;
}
int main1303(void)
{
	int *a = 10;
	fun13(&a);
	printf("%d\n", a);
}
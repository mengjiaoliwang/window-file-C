#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1101()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;//ok

	//pp->&p;
	//*pp->p->&a;
	//int *pp = &p;//err
	/*
	pp指向的是p的地址
	*pp指向的是p的值，a的地址
	**pp指向的是a的值
	加一颗星降一个维度
	*/
	**pp = 100;
	//a的值
	//printf("%d\n", **pp);
	//printf("%d\n", *p);
	//printf("%d\n", a);
	//a的地址
	//printf("%p\n", *pp);
	//printf("%p\n", p);
	//printf("%p\n", &a);
	//p的地址
	//printf("%p\n", pp);
	//printf("%p\n", &p);
	return EXIT_SUCCESS;
}

int main1102()
{
	int a = 10;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;
	//*ppp == pp == &p;
	//**ppp == *pp == p == &a;
	//***ppp == **pp == *p == a
	***ppp = 100;
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", **pp);
	printf("%d\n", ***ppp);

	//const int* const p 通过二级指针修改一级指针的值
}

int main(void)
{
	int a = 10;
	int *p = &a;
	int *p1;
	p1 = p;
}
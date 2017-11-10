#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//将开辟的空间作为函数的返回值
//char * allocateSpace(char *p)
//{
//	p = (int*)calloc(10, sizeof(int));
//	for (int i = 0; i < 10; i++)
//		p[i] = i;
//	return p;
//}
//函数参数传递二级指针 通过地址传递改变实参的值
void allocateSpace(char ** p)
{
	*p = (int*)calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		*((*p)+i) = i;
		//(*p)[i]
}

int main01()
{
	char * p = NULL;

	//p = allocateSpace(p);
	allocateSpace(&p);

	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	free(p);

	return EXIT_SUCCESS;
}
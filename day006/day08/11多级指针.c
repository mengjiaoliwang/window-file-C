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
	ppָ�����p�ĵ�ַ
	*ppָ�����p��ֵ��a�ĵ�ַ
	**ppָ�����a��ֵ
	��һ���ǽ�һ��ά��
	*/
	**pp = 100;
	//a��ֵ
	//printf("%d\n", **pp);
	//printf("%d\n", *p);
	//printf("%d\n", a);
	//a�ĵ�ַ
	//printf("%p\n", *pp);
	//printf("%p\n", p);
	//printf("%p\n", &a);
	//p�ĵ�ַ
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

	//const int* const p ͨ������ָ���޸�һ��ָ���ֵ
}

int main(void)
{
	int a = 10;
	int *p = &a;
	int *p1;
	p1 = p;
}
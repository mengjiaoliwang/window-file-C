#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//�����ٵĿռ���Ϊ�����ķ���ֵ
//char * allocateSpace(char *p)
//{
//	p = (int*)calloc(10, sizeof(int));
//	for (int i = 0; i < 10; i++)
//		p[i] = i;
//	return p;
//}
//�����������ݶ���ָ�� ͨ����ַ���ݸı�ʵ�ε�ֵ
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
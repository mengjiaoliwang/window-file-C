#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main301()
{
	/*
	�޸���һ��ָ�������Ӧ�ڴ��ֵ ������ָ�����ָ���ֵҲ�����ı�
	*/
	int a = 10;
	int *p1 = &a;
	int *p2 = &a;
	int *p3 = &a;

	*p3 = 100;


	printf("%d\n", a);
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	printf("%d\n", *p3);

	return EXIT_SUCCESS;
}

int main302(void)
{
	int a = 10;
	//char * p = &a;

	//*p = 123456;
	/*
	ֱ��ʹ��void�������ڴ��д洢����
	void * ���Ե�  ��Ϊ����ָ��
	ͨ��void*ȥ�޸ı�����ֵ ��Ҫ��ת�ɱ�����Ӧ������ *
	*/
	void * p = &a;

	//*(int*)p = 100;

	printf("%d\n", *(int*)p);
	//printf("%d\n", a);
	//printf("%d\n", sizeof(void *));

	return 0;
}

int main303(void)
{
	/*
	�κ����͵�ָ�붼��ͨ�õģ���Ҫǿ��ת���ɱ�����Ӧ��ָ������
	*/
	int a = 10;
	char *p = &a;

	*(int *)p = 123456;
	printf("%d\n", a);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main01()
{
	/*
	ָ��ָ������ĵ�ַ
	ָ�����Ҳ��һ������
	�ڴ��ַ��һ��unsigned int ʮ����������ʾ
	*/

	//int a = 10;
	////printf("%p\n",&a);
	//int* p;
	//p = &a;
	////printf("%p\n", p);
	////����ͨ����ַ�ı�����ĵ�ַ
	//*p = 100;
	//printf("%d\n", *p);
	//printf("%d\n", a);


	//char a = 'a';
	//char* p = &a;
	//*p = 99;
	//printf("%c\n", a);

	/*
	ָ�����ʹ�С��
	��32λ����ϵͳ�¶���4���ֽڴ�С
	��64λ����ϵͳ�¶���8���ֽڴ�С
	*/
	//int a = 10;
	//int* p = &a;
	printf("ָ���С��%d\n", sizeof(double*));
	printf("ָ���С��%d\n", sizeof(long*));
	printf("ָ���С��%d\n", sizeof(long long*));
	printf("ָ���С��%d\n", sizeof(short*));
	printf("ָ���С��%d\n", sizeof(char*));
	printf("ָ���С��%d\n", sizeof(int*));
	printf("ָ���С��%d\n", sizeof(int******));
	printf("ָ���С��%d\n", sizeof(int*************));


	return EXIT_SUCCESS;
}
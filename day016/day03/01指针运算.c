#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main01()
{
	int a = 10;

	//����ָ����ӡ���ˡ������ȡ��û������
	int *p = &a;
	int *p1 = &a;
	//int *p2 = &p;//err
	//*(*p2) = 100;

	//�ڲ��ı��ַ���ԭ����ȥ�����ַ���
	//char * p = "hello world";
	//char * p1 = "hello world";
	//char buf[] = "hello world";

	return EXIT_SUCCESS;
}
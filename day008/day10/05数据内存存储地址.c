#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int a1 = 10;
int a2;
static int a3 = 10;
static int a4;

const int b = 10;

int main05()
{
	int a5 = 10;
	static int a6 = 10;
	static int a7;
	const int a8 = 10;
	int *a9 = NULL;
	int arr[] = { 1,2,3 };
	char * p = "hello world";

	printf("��ʼ����ȫ�ֱ�����%p\n", &a1);
	printf("δ��ʼ����ȫ�ֱ�����%p\n", &a2);
	printf("��ʼ���ľ�̬ȫ�ֱ�����%p\n", &a3);
	printf("δ��ʼ���ľ�̬ȫ�ֱ�����%p\n", &a4);

	printf("�ֲ�������%p\n", &a5);
	printf("��ʼ���ľ�̬�ֲ�������%p\n", &a6);
	printf("δ��ʼ���ľ�̬�ֲ�������%p\n", &a7);
	printf("������%p\n", &a8);

	printf("ָ�룺%p\n", &a9);

	printf("���飺%p\n", arr);
	printf("�ַ���������%p\n", p);

	/*�����ڴ�洢�����Ϊ�����֣�
	1���ֲ����� ���� ָ�� ���� -��ջ������
	2����ʼ����ȫ�ֱ��� δ��ʼ����ȫ�ֱ��� ��ʼ���ľ�̬ȫ�ֱ���
	δ��ʼ���ľ�̬ȫ�ֱ��� ��ʼ���ľ�̬�ֲ����� δ��ʼ���ľ�̬�ֲ�����
	�ַ������� -��������   ����ʼ������������δ��ʼ�������������ַ�����������
	*/


	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//δ��ʼ����ȫ�ֱ���  Ĭ��ֵΪ0
int c;


//δ��ʼ���ľ�̬ȫ�ֱ��� Ĭ��ֵΪ0

static int d;
void fun06()
{
	//int c = 1000;
	//δ��ʼ���ľ�̬�ֲ����� Ĭ��ֵΪ0
	static int c;
	printf("%d\n", c);
}
int main04()
{

	//int c = 100;

	//printf("%d\n", c);

	///fun06();
	//�ֲ�����δ��ʼ��������ʹ��
	int e=10;
	printf("%d\n", e);
	//printf("%d\n", d);
	return EXIT_SUCCESS;
}
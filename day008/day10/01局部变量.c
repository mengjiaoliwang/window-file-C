#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun01()
{
	int a = 10;
	return;
}

int main01()
{
	/*
	�ں����ж���ı�����Ϊ�ֲ�����
	�ڶ���ֲ������ǻ����auto  һ�����ʡ�Բ�д
	auto int a=10;
	�����򣺴ӱ������嵽��������
	�������ڣ��ӱ������嵽��������
	
	*/
	//int a = 100;
	//for (a = 0; a < 10; a++)
	//{
	//	printf("a\n");
	//}

	int a = 10;
	{
		//�����ڲ��ࣨ����������
		int a = 100;
		printf("a=%d\n", a);
	}

	printf("a=%d\n", a);
	//a = a + 10;
	//fun01();
	fun07();
	return EXIT_SUCCESS;
}
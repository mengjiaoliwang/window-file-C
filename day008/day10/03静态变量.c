#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*
��̬�ֲ�������
static �������� ������
��̬����ֻ���ʼ��һ�Σ����Զ�μ���
�������ں����ڲ�����ʹ��
�������ڣ����������ڼ� �ڳ��򴴽�ʱ���徲̬�ֲ����� �ڳ������ʱ��̬�ֲ���������
*/

/*
��̬ȫ�ֱ�����
�����򣺶��徲̬ȫ�ֱ����ļ��п�ʹ�ã������ļ�������ʹ��
�������ڣ����������ڼ� ���򴴽���̬ȫ�ֱ������� ���������̬ȫ�ֱ�������

*/
static int b = 10;
void fun04()
{
	//��̬�ֲ�����
	//static int a = 0;
	//a++;
	printf("%d\n", b);
}

int main03()
{
	//for (int i = 0; i < 10; i++)
	//{
	//	fun04();
	//}
	//fun04();
	//fun05();
	//printf("%d\n", b);
	return EXIT_SUCCESS;
}
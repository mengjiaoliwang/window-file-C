#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef void(*opt)(int, int);
void fun10(int a, int b)
{
	printf("%d\n", a + b);
}
void fun11(int a, int b)
{
	printf("%d\n", a - b);
}
void fun12(int a, int b)
{
	printf("%d\n", a * b);
}
void fun13(int a, int b)
{
	printf("%d\n", a / b);
}
void fun14(int a, int b)
{

}
//optΪ����ָ�� oΪָ�����
//����ָ����Ϊ������������ͳһ�ӿ�
//Эͬ������ø���
//C++��̬������
/*
������󿪷� ��װ �̳�  ��̬
C����������̿���
C++������󿪷�  MVC
����ʱ�俪��
*/
void calc(int a, int b, opt o)
{
	o(a, b);
}
int main07()
{
	calc(10, 20, fun12);

	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

union Var
{
	char a;
	short b;
	int c[3];
	long d;
	double e;
};


//��Ϸ��������ֵ
//union stat
//{
//	int jingzhi;
//	int paobu;
//	double shanghai;
//};




int main09()
{
	//�������С��������������͵ı������
	//printf("%d\n", sizeof(union Var));
	//�����������г�Ա����һ���ڴ��ַ  �ڴ��ַ��ͬ
	//union Var var;
	//printf("%p\n", &var.a);
	//printf("%p\n", &var.b);
	//printf("%p\n", &var.c);
	//printf("%p\n", &var.d);
	//printf("%p\n", &var.e);

	//�������Ա��ֵ ֻ�����һ���ڸ�ֵ�ĳ�Ա������׼ȷ��

	union Var var;
	var.a = 'A';
	var.b = 1234;
	var.e = 1234.5678;
	printf("%d\n", var.a);
	printf("%d\n", var.b);
	printf("%f\n", var.e);

	return EXIT_SUCCESS;
}
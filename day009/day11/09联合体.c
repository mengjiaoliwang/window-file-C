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


//游戏人物属性值
//union stat
//{
//	int jingzhi;
//	int paobu;
//	double shanghai;
//};




int main09()
{
	//联合体大小根据最大数据类型的倍数相关
	//printf("%d\n", sizeof(union Var));
	//联合体中所有成员共用一块内存地址  内存地址相同
	//union Var var;
	//printf("%p\n", &var.a);
	//printf("%p\n", &var.b);
	//printf("%p\n", &var.c);
	//printf("%p\n", &var.d);
	//printf("%p\n", &var.e);

	//联合体成员赋值 只有最后一次内赋值的成员数据是准确的

	union Var var;
	var.a = 'A';
	var.b = 1234;
	var.e = 1234.5678;
	printf("%d\n", var.a);
	printf("%d\n", var.b);
	printf("%f\n", var.e);

	return EXIT_SUCCESS;
}
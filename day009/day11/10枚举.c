#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

enum color
{
	red,green,bule,yellow,black,white
}c;
//银行取款流程控制
//enum card
//{
//	1、插卡
//	2、读卡
//	3、输入密码
//	4、锁
//	5、查询
//	6、取钱
//	7、退卡
//	8、解锁
//};


int main10()
{
	enum  color c;
	//枚举变量可以赋值 如果超出了枚举列表的值 没有意义
	c = 100;
	//枚举列表中的数据时常量不能赋值
	//red = 100;

	printf("%d\n", c);
	//printf("请输入元色编号：\n");
	//int num;
	//scanf("%d", &num);
	//switch (num)
	//{
	//case red:
	//	printf("红色\n");
	//	break;
	//case green:
	//	printf("绿色\n");
	//	break;
	//case bule:
	//	printf("蓝色\n");
	//	break;
	//case yellow:
	//	printf("黄色\n");
	//	break;
	//case black:
	//	printf("黑色\n");
	//	break;
	//case white:
	//	printf("白色\n");
	//	break;
	//default:
	//	break;
	//}

	//printf("%d\n", c);


	return EXIT_SUCCESS;
}
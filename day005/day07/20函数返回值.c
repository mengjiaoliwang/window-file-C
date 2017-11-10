#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun03()
{

}

int fun04()
{
	return 100;
}
int main20()
{
	//如果函数定义为void类型 不能接收返回值
	//int val = fun03();err

	int val = fun04();
	printf("%d\n", val);
	system("pause");
	return EXIT_SUCCESS;
}
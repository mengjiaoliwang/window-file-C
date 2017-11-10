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
	在函数中定义的变量成为局部变量
	在定义局部变量是会加上auto  一般可以省略不写
	auto int a=10;
	作用域：从变量定义到函数结束
	生命周期：从变量定义到函数结束
	
	*/
	//int a = 100;
	//for (a = 0; a < 10; a++)
	//{
	//	printf("a\n");
	//}

	int a = 10;
	{
		//匿名内部类（匿名函数）
		int a = 100;
		printf("a=%d\n", a);
	}

	printf("a=%d\n", a);
	//a = a + 10;
	//fun01();
	fun07();
	return EXIT_SUCCESS;
}
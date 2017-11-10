#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*
静态局部变量：
static 数据类型 变量名
静态变量只会初始化一次，可以多次计算
作用域：在函数内部可以使用
生命周期：程序运行期间 在程序创建时定义静态局部变量 在程序结束时静态局部变量销毁
*/

/*
静态全局变量：
作用域：定义静态全局变量文件中可使用，其他文件不可以使用
生命周期：程序运行期间 程序创建静态全局变量创建 程序结束静态全局变量销毁

*/
static int b = 10;
void fun04()
{
	//静态局部变量
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
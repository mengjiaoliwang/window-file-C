#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*全局变量
作用域：整个程序中  如果在其他文件中使用需要加上声明
生命周期：程序运行期间 在程序创建时 定义全部变量在程序结束时全部变量销毁


*/
int a = 10;

void fun02()
{
	printf("%d\n", a);

}

int main02()
{
	//printf("%d\n", a);
	//fun02();

	fun03();
	return EXIT_SUCCESS;
}
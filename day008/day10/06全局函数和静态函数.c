#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//如果在函数定义时，没有任何修饰就成为全局函数
//作用域：整个项目中所有文件
//生命周期：程序运行期间
void fun07()
{
	return;
}
/*静态函数
作用域：当前文件中
生命周期：程序运行期间

*/
static int fun08()
{
	printf("hello world\n");
	return 1;
}

void fun09()
{
	int val = fun08();
	printf("%d\n", val);
}

int main06()
{
	//fun09();
	fun10();
	return EXIT_SUCCESS;
}
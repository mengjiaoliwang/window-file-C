#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//#define MAX 100+20//宏定义常量
//#define ADD(a,b) (a+b)//带参数的宏定义
#define CMP(a,b) strcmp(a,b)
#define SUB(a,b) ((a)-(b))

int main0301()
{
	//printf("%d\n", ADD(10, 20));
	//printf("%d\n", (10 + 20));
	//printf("%d", CMP("nihao", "nihao"));
	//printf("%d", strcmp("nihao", "nihao"));
	//printf("%d\n", SUB(10, 5) * 5);
	//printf("%d\n", 10 - 5 * 5);
	//system("pause");
	return EXIT_SUCCESS;
}
int main03(void)
{
	//printf("%s", __FILE__);//当前源文件.c
	//printf("%d\n", __LINE__);//当前行号
	//printf("%s\n", __DATE__);//编译日期
	//printf("%s\n", __TIME__);//编译时间
}
#include <stdio.h>

int main(void)
{
	//在C语言中不能在程序里表示一个二进制数
	//十进制数
	int a = 10;
	//八进制数
	int b = 010;//8
	//十六进制
	int c = 0X10;//16
	//%d将数据以10进制形式打印输出
	//%o将数据以8进制形式打印输出
	//%x将数据以16进制形式打印输出 输出的字母是小写的
	
	//%X将数据以16进制形式打印输出 输出的字母是大写的
	printf("a=%X\n",a);
	printf("b=%X\n",b);
	printf("c=%X\n",c);

}
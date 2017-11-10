#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main601()
{

	//char buf[100];
	//char arr[100];
	//int a;
	//int b;
	//int c;
	//1、scanf("%s", buf);通过键盘获取一个字符串 遇到空格或者换行就结束
	//2、gets(buf);通过键盘获取一个字符串 遇到文件结束标志或者换行就结束
	//gets(buf);
	//1、只接受换行作为结束
	//scanf("%[^\n]", buf);
	//2、加入具体数字表示接受个数
	//scanf("%11[^\n]%12[^\n]", buf,arr);
	//3、不需要接受的字符用*来操作
	//scanf("%*3c%d", &a);
	//4、规定数字大小根据个数去接收
	//scanf("%2d%3d%1d", &a, &b, &c);



	//printf("%s\n", buf);
	//printf("%s\n", arr);
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);
	return EXIT_SUCCESS;
}

int main602(void)
{
	//fgets是一种安全的操作  不会因为用户的输入导致程序报错
	//fgets接收数据的最大值是数组长度-1 末尾需要存放\0
	//fgets接收数据小于最大值，会将\n作为字符进行存储
	//char buf[10];
	//fgets(buf, sizeof(buf), stdin);


	//printf("%s", buf);
	//puts(buf);

	fputs("hello world", stdout);
	return 0;
}
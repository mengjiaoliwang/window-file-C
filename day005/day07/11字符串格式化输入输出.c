#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main11()
{
	char buf[100] = "hello1+2=3";
	//将格式化内容放到字符串中  你瞅啥1+2=3hello
	//sprintf(buf, "你瞅啥%d+%d=%d", 1, 2, 3);

	int a, b, c;
	char arr[100];
	sscanf(buf, "%5s%d+%d=%d", arr,&a, &b, &c);
	//printf(buf);


	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%s\n", arr);

	return EXIT_SUCCESS;
}
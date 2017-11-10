#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main10()
{

	char buf1[] = "hello world";
	char buf2[] = "hollo kitty";

	//使用字符串比较作为判断条件
	//int val = strcmp(buf1, buf2);
	//printf("%d\n", val);

	//if (!strcmp(buf1, buf2))
	//{
	//	printf("相同\n");
	//}
	//else
	//{
	//	printf("不相同\n");
	//}

	//字符串有限比较
	if(!strncmp(buf1, buf2, 5))
		printf("相同\n");
	return EXIT_SUCCESS;
}
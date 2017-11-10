#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int del_substr(char *str, const char * substr)
{
	if (!str || !substr)
		return -1;

	int len = 0;
	//1、求出substr字符串长度
	char * temp = substr;
	while (*temp++);
	len = temp - substr - 1;

	//2、找到substr在str中出现的位置（strstr）
	char * pos = NULL;
	temp = substr;
	while (*str)
	{
		while (*str == *temp && *temp != '\0')
		{
			temp++;
			str++;
		}
		if (*temp == '\0')
		{
			pos = str - len;
			break;
		}
		else
		{
			str = str - (temp - substr);
			temp = substr;
		}
		str++;
	}
	if (!pos)
		return -2;
	//3、移动字符串到删除位置
	while (*pos)
	{
		*pos = *(pos + len);
		pos++;
	}
	//pos = pos + len;
	return 0;
}
int main02()
{
	char buf[] = "hello world";
	char * p = "he";


	del_substr(buf, p);


	printf("%s\n", buf);
	return EXIT_SUCCESS;
}
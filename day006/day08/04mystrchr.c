#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


char * mystrchr(char arr[], char ch);

int main04()
{
	/*
	返回值字符指针类型strchr（字符串，字符）
	*/

	char arr[] = "hello world";
	char ch = 'm';

	char *p = mystrchr(arr, ch);
	printf("%s", p);

	return EXIT_SUCCESS;
}

char * mystrchr(char arr[], char ch)
{
	if (arr == NULL)
		return NULL;
	if (ch <= 0)
		return NULL;
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == ch)
		{
			return &arr[i];
		}
		i++;
	}
	return NULL;
}
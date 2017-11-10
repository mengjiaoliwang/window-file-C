#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

char * mystrcpy(char * dest, const char * src)
{
	if (!dest || !src)
		return NULL;
	char * temp = dest;
	//取src地址的值
	//while (*temp = *src)
	//{
	//	temp++;
	//	src++;
	//}
	while (*temp++ = *src++);
	return dest;
}

int main09()
{
	char arr[] = "hello world";
	char buf[100];

	char * p = mystrcpy(buf, arr);
	//printf("%s\n", p);
	printf("%s\n", buf);
	return EXIT_SUCCESS;
}
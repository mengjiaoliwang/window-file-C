#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void mysrtcat(char * dest, const char * src)
{
	//while (*dest != '\0')
	//{
	//	dest++;
	//}
	if (!dest || !src)
		return;
	while (*dest)dest++;
	while (*dest++ = *src++);
	//while (*dest = *src)
	//{
	//	dest++;
	//	src++;
	//}
}
int main07()
{

	char arr1[] = "hello";
	char arr2[100] = "world";

	//strcat(arr2, arr1);
	mysrtcat(arr2, arr1);
	printf(arr2);

	return EXIT_SUCCESS;
}
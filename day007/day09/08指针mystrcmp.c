#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int mystrcmp(const char* dest, const char* src)
{
	if (!dest || !src)
		return -110;
	while (*dest == *src)
	{
		if (*dest == '\0')
		{
			return 0;
		}
		dest++;
		src++;
	}
	return *dest > *src ? 1 : -1;
}
int main08()
{
	char arr1[] = "hello";
	char arr2[] = "hello world";

	int val = mystrcmp(arr1, NULL);
	printf("%d\n", val);


	return EXIT_SUCCESS;
}
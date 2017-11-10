#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

char * mystrstr(const char* dest, const char* src)
{
	while (*dest)
	{
		int i = 0;
		while (*dest == *src && *src)
		{
			dest++;
			src++;
			i++;
		}
		if (*src == '\0')
		{
			return dest - i;
		}
		dest -= i;
		src -= i;
		dest++;
	}
	return 0;
}

int main12()
{

	printf("%s\n", mystrstr("lloolloe worldllo", "llo"));

	return EXIT_SUCCESS;
}

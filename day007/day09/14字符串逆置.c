#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void swap01(char * buf)
{
	int len = strlen(buf) - 1;
	char * start = buf;
	char * end = buf + len;

	while (start < end)
	{
		char  temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main14()
{
	char buf[] = "hello world nichousha";

	swap01(buf);
	printf("%s\n", buf);

	return EXIT_SUCCESS;
}
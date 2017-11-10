#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main13()
{
	char buf1[] = "hello world";
	char buf2[] = "we";


	char * p = strstr(buf1, buf2);


	printf("%s\n",p);

	return EXIT_SUCCESS;
}
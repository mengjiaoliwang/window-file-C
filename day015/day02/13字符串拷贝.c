#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int mystrcpy(char * dest, const char * src)
{
	if (!dest || !src)
		return -1;
	while (*dest++ = *src++);
	//*src = 'h';
	return 0;

}

int main13()
{
	char * buf = "hello world";
	char dest[100];
	mystrcpy(dest, buf);
	printf("%s\n", dest);
	return EXIT_SUCCESS;
}
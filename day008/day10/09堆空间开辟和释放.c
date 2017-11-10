#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{
	//¿ª±Ù¶ÑÇø¿Õ¼ä
	char *p = (char *)malloc(sizeof(char) * 20);
	printf("%p\n", p);
	//scanf("%s", p);
	//p = "hello world";//err
	strcpy(p, "helloworld");
	printf("%p\n", p);


	printf("%s\n", p);


	free(p);
	p = NULL;

	return EXIT_SUCCESS;
}
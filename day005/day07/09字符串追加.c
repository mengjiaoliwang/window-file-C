#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{
	char buf[] = "hello";
	char dest[100] = "world";


	//×Ö·û´®×·¼Ó
	//strcat(dest, buf);


	//×Ö·û´®ÓÐÏÞ×·¼Ó
	strncat(dest, buf, 2);
	printf(dest);


	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//输入特性
void fun05(char * buf)
{
	strcpy(buf, "hello world");
}

//输出特性
char * fun06()
{
	char * buf = (char *)malloc(100);
	strcpy(buf, "hello world");
	return buf;
}
void fun07(char ** buf)
{
	*buf = (char *)malloc(100);
	strcpy(*buf, "hello world");
}


int main09(void)
{
	char * buf = NULL;
	//buf = fun06();
	fun07(&buf);
	printf("%s\n", buf);
	return 0;
}
int main0901()
{
	//char buf[100];
	char * buf = (char *)malloc(100);
	fun05(buf);
	printf("%s\n", buf);


	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main14()
{
	//char buf[] = "www.itcast.cn";

	char buf[] = "www.itcast.cn fdhgjkdfhj www.itheima.com,shdjfhj;www.itcast.cn";
	//��ȡ����ַ�����\0�滻����ȡ����
	char * s = strtok(buf, "@");
	//printf("%s", s);
	while (s != NULL)
	{	
		printf("%s\n", s);
		s = strtok(NULL, ".");
	}


	return EXIT_SUCCESS;
}
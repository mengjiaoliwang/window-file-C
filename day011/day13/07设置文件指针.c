#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{

	printf("hello world1\n");
	printf("hello world2\n");
	//�رձ�׼���
	fclose(stdout);
	fclose(stderr);
	perror("");
	printf("hello world3\n");
	printf("hello world4\n");

	//int a = 10;
	//////�رձ�׼����
	//fclose(stdin);
	//scanf("%d", &a);

	//printf("%d\n", a);
	return EXIT_SUCCESS;
}
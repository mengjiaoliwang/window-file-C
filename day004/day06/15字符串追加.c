#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main15()
{
	char arr1[20] = "hello";
	char arr2[] = "world";

	//1���ҵ�hello����λ��
	int i = 0;
	while (arr1[i] != '\0')
	{
		i++;
	}
	//2����world����hello����
	int j = 0;
	while (arr2[j] != '\0')
	{
		arr1[i + j] = arr2[j];
		j++;
	}
	//3����\0����helloworld����
	arr1[i + j] = '\0';


	printf("===%s===\n", arr1);
	return EXIT_SUCCESS;
}
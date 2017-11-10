#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main02()
{

	int *p[3];


	//1、数组下标+偏移量*(p[i]+j)
	//2、二维数组 p[i][j]
	//3、二级指针 *(*(p+i)+j);

	char *arr[3] = { "hello","world","nichousha" };

	for (int i = 0; i < 3; i++)
		printf("%c\n", arr[i][0]);


	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main02()
{

	int *p[3];


	//1�������±�+ƫ����*(p[i]+j)
	//2����ά���� p[i][j]
	//3������ָ�� *(*(p+i)+j);

	char *arr[3] = { "hello","world","nichousha" };

	for (int i = 0; i < 3; i++)
		printf("%c\n", arr[i][0]);


	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main11()
{

	//��������
	for (int i = 1; i <= 9; i++)
	{
		//�ڲ������
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
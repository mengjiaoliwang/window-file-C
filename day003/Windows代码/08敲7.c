#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main08()
{


	for (int i = 1; i <= 99; i++)
	{
		if (i % 7 == 0)
		{
			printf("������\n");

			//��������ѭ�������´�ѭ��
			continue;
		}
		else if (i % 10 == 7)
		{
			printf("������\n");
			continue;

		}
		else if(i/10==7)
		{
			printf("������\n");
			continue;

		}


		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}
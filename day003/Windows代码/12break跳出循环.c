#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main12()
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == 1)
			{
				//break;
				continue;
			}
			printf("%d\n", j);
		}
	}
	return EXIT_SUCCESS;
}
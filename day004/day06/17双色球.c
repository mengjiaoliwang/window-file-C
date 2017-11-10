#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{

	/*
	6+1   六个红球 1-33 不能重复
	一个蓝球 1-16
	*/

	srand((unsigned int)time(NULL));

	int ball[7] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		int temp = rand() % 33 + 1;
		for (int j = 0; j <= i; j++)
		{
			if (temp == ball[j])
			{
				i--;
				break;
			}
		}
		ball[i] = temp;
	}
	ball[6] = rand() % 16 + 1;

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", ball[i]);
	}

	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main10()
{
	int scores[3][3];


	//录入成绩
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &scores[i][j]);
		}
	}

	//打印成绩
	for (int i = 0; i < 3; i++)
	{
		printf("第%d名学生成绩：\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", scores[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			int sum1 = scores[j][0] + scores[j][1] + scores[j][2];
			int sum2 = scores[j + 1][0] + scores[j + 1][1] + scores[j + 1][2];
			if (sum1 > sum2)
			{
				//scores[j][0]<->scores[j+1][0]
				//scores[j][1]<->scores[j+1][1]
				//scores[j][2]<->scores[j+1][2]

				for (int k = 0; k < 3; k++)
				{
					int temp = scores[j][k];
					scores[j][k] = scores[j + 1][k];
					scores[j + 1][k] = temp;
				}
			}
		}
	}

	//打印成绩
	for (int i = 0; i < 3; i++)
	{
		printf("第%d名学生成绩：\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", scores[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
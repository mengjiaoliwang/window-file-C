#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1101()
{
	//int *p = malloc(sizeof(int) * 10);
	int**p = (int**)malloc(sizeof(int*) * 3);
	int a = 10;
	int b = 20;
	int c = 30;

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	//修改值

	*p[0] = 100;
	*p[1] = 200;
	*p[2] = 300;
	//打印值
	printf("%d\n", *p[0]);
	printf("%d\n", *p[1]);
	printf("%d\n", *p[2]);
	free(p);
	system("pause");
	return EXIT_SUCCESS;
}
int main1102(void)
{
	int **p = (int**)malloc(sizeof(int*) * 3);
	int *p1 = (int*)malloc(sizeof(int) * 3);
	int *p2 = (int*)malloc(sizeof(int) * 3);
	int *p3 = (int*)malloc(sizeof(int) * 3);

	p[0] = p1;
	p[1] = p2;
	p[2] = p3;

	//赋值
	for (int i = 0; i < 3; i++)
	{
		scanf("%d%d%d", &p[i][0], &p[i][1], &p[i][2]);
	}
	//打印
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}


	//释放

	free(p1);
	p1 = NULL;
	free(p2);
	p2 = NULL;
	free(p3);
	p3 = NULL;

	free(p);
	p = NULL;
}
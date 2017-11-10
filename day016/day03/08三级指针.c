#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0801()
{
	int a = 10;
	int *p = &a;
	int **p1 = &p;

	int ***p2 = &p1;
	//*p2==p1
	//**p2 == p == *p1 == &a
	//***p2 == **p1 == *p == a;


	return EXIT_SUCCESS;
}

void fun03(int *** p)
{
	*p = (int **)malloc(sizeof(int*) * 3);
	for (int i = 0; i < 3; i++)
	{
		(*p)[i] = (int *)malloc(sizeof(int) * 3);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			(*p)[i][j] = i + j;
			//*(*((*p) + i) + j) = i + j;
			//*((*p)[i] + j) = i + j;
		}
	}


}

int main09(void)
{
	int ** p = NULL;

	fun03(&p);

	//printf("%p\n", p);
	//printf("%p\n", p[0]);
	//printf("%p\n", p[1]);
	//printf("%p\n", p[2]);


	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		p[i][j] = i + j;
	//	}
	//}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < 3; i++)
		free(p[i]);
	free(p);


	return 0;
}
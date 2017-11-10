#include <stdio.h>
int star(int row)
{
	if (row <= 0)
	{
		return -1;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - i; j++)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
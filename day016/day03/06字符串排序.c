#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main06()
{
	char **p = (char **)malloc(sizeof(char*) * 3);
	for (int i = 0; i < 3; i++)
	{
		p[i] = (char*)malloc(sizeof(char) * 10);
		scanf("%s", p[i]);
	}

	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - 1 - i; j++)
		{
			if (p[j][0]>p[j + 1][0])
			{
				char * temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}


	for (int i = 0; i < 3; i++)
		printf("%s\n", p[i]);


	for (int i = 0; i < 3; i++)
		free(p[i]);
	free(p);


	return EXIT_SUCCESS;
}
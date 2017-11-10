#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int ChangeNum(char * p)
{
	int len = strlen(p) - 1;
	int i = 0;
	int sum = 0;
	while (len >= 0)
	{
		if (p[len] == '1')
		{
			sum += pow(2, i);
		}
		i++;
		len--;
	}

	return sum;
}



int main01()
{
	char *pbin = "00001111";

	int val = ChangeNum(pbin);
	printf("%d\n", val);

	return EXIT_SUCCESS;
}
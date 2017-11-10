#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main14()
{
	char arr[] = "helloworld";

	int j = 0;
	while (arr[j] != '\0')
	{
		j++;
	}
	//printf("%d\n", i);
	j--;//数组下标
	int i = 0;

	while (i < j)
	{
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	printf("%s\n", arr);
	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main05()
{
	char arr1[] = "abd";
	char arr2[] = "abcd";

	int i = 0;
	while(arr1[i]==arr2[i])
	{
		if (arr1[i] == '\0' && arr2[i] == '\0')
		{
			printf("相同\n");
			return 0;
		}
		i++;
	}
	printf("不相同\n");

	return EXIT_SUCCESS;
}
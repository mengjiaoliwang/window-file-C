#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	int j = 9;
	int temp;
	while (i < j)
	{
		//交换数据
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		//更改计数器
		i++;
		j--;
	}


	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}
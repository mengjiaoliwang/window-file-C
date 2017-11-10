#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main01()
{

	int arr[10] = { 4,8,1,3,7,9,6,10,5,2 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d\n", arr[i]);



	system("pause");
	return EXIT_SUCCESS;
}
int main02(void)
{
	//int arr[2][3];
	//行数=sizeof(arr)/sizeof(arr[0])
	//列数=sizeof(arr[0])/sizeof(arr[0][0]);


	//字符数组
	//char arr[] = { 'h','e','l' };
	//字符串
	//char arr[] = "hello";

	char buf[100] = { 'a','b','c' };
	printf("%s\n", buf);
}
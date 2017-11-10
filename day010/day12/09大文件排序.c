#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{
	FILE * fp = fopen("D:/大文件数据.txt", "r");
	FILE * fp1 = fopen("D:/大文件数据排序1.txt", "w");
	if (!fp || !fp1)
		return -1;

	int *arr = (int *)malloc(sizeof(int) * 1000);

	for (int i = 0; i < 1000; i++)
	{
		fscanf(fp, "%d\n", &arr[i]);
	}

	int arr1[256] = { 0 };
	for (int i = 0; i < 1000; i++)
	{
		arr1[arr[i] - 1]++;
	}

	//打印数据
	for (int i = 0; i < 256; i++)
	{
		//printf("%d\n", arr1[i]);
		for (int j = 0; j < arr1[i]; j++)
		{
			//printf("%d\n", i + 1);
			fprintf(fp1, "%d\n", i+1);
		}
	}

	free(arr);
	fclose(fp);
	fclose(fp1);

	return EXIT_SUCCESS;
}
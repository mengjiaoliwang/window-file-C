#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
int main0801()
{
	srand((unsigned int)time(NULL));

	FILE * fp = fopen("D:/���ļ�����.txt", "w");
	if (!fp)
		return -1;
	for (int i = 0; i < 1000; i++)
	{
		fprintf(fp, "%d\n", rand() % 256 + 1);
	}

	fclose(fp);

	return EXIT_SUCCESS;
}




void BubbleSort(int * src, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (src[j] > src[j + 1])
			{
				int temp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = temp;
			}
		}
	}
}

int main08(void)
{
	//���ļ�
	FILE * fp = fopen("D:/���ļ�����.txt", "r");
	FILE * fp1 = fopen("D:/���ļ���������.txt", "w");
	if (!fp || !fp1)
		return -1;
	//���ٶѿռ�
	int * arr = (int *)malloc(sizeof(int) * 1000);
	//������
	for (int i = 0; i < 1000; i++)
	{
		fscanf(fp, "%d\n", &arr[i]);
	}

	//����
	BubbleSort(arr, 1000);

	for (int i = 0; i < 1000; i++)
	{
		fprintf(fp1, "%d\n", arr[i]);
	}


	free(arr);
	arr = NULL;
	fclose(fp);
	fp = NULL;
	fclose(fp1);
	fp1 = NULL;
	return 0;
}
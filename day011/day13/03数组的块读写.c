#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0301()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	FILE * fp = fopen("../../d.txt", "w");
	if (!fp)
		return -1;

	for (int i = 0; i < 10; i++)
	{
		fwrite(&arr[i], sizeof(int), 1, fp);
	}

	fclose(fp);
	return EXIT_SUCCESS;
}

int main0302(void)
{
	int arr[10];

	FILE * fp = fopen("../../d.txt", "r");
	if (!fp)
		return -1;
	int i = 0;
	while (!feof(fp))
	{
		fread(&arr[i], sizeof(int), 1, fp);
		i++;
	}


	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);

	}

	fclose(fp);

	return 0;
}
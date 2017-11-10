#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0101()
{
	FILE * fp = fopen("../../a.txt", "w");
	if (!fp)
		return -1;

	short a = 5678;

	fwrite(&a, sizeof(a), 1, fp);


	fclose(fp);


	return EXIT_SUCCESS;
}
int main0102(void)
{
	FILE * fp = fopen("../../a.txt", "r");
	if (!fp)
		return -1;
	short a;
	fread(&a, sizeof(a), 1, fp);


	printf("%d\n", a);

	fclose(fp);
	return 0;
}
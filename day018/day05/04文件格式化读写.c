#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0401()
{

	FILE * fp = fopen("D:/e.txt", "w");
	if (!fp)
		return -1;

	fprintf(fp, "%d+%d=%d\n", 1, 2, 3);


	fclose(fp);

	return EXIT_SUCCESS;
}

int main0402(void)
{

	FILE * fp = fopen("D:/e.txt", "r");

	int a, b, c;

	fscanf(fp, "%d+%d=%d\n", &a, &b, &c);


	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	fclose(fp);
}
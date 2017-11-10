#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0701()
{
	FILE * fp = fopen("D:/e.txt", "w");
	if (!fp)
		return -1;

	fprintf(fp, "%d%c%d=\n", 10,'+',2);

	fclose(fp);

	return EXIT_SUCCESS;
}

int main0702(void)
{
	FILE * fp = fopen("D:/e.txt", "r");
	if (!fp)
		return -1;
	char buf[100];
	int a,b;
	char c;
	memset(buf, 0, 100);
	//fscanf(fp, "%[^0-9]%d", buf, &a);

	//printf("%s\n", buf);
	//fscanf(fp, "%010d", &a);
	//printf("%010d\n", a);
	fscanf(fp, "%d%c%d=\n", &a, &c, &b);


	printf("%d%c%d=\n", a, c, b);

	return 0;
}
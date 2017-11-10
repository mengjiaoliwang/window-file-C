#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0201()
{
	char buf[] = "≥Úƒ„’¶µÿ\n";


	FILE * fp = fopen("../../c.txt", "w");
	if (!fp)
		return -1;

	fwrite(buf, sizeof(char), 10, fp);

	fclose(fp);

	return EXIT_SUCCESS;
}

int main0202(void)
{

	FILE * fp = fopen("../../c.txt", "r");
	if (!fp)
		return -1;

	char buf[10];
	memset(buf, 0, 10);
	fread(buf, 10, 1, fp);


	printf("%s", buf);


	fclose(fp);
	return 0;
}
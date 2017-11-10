#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0301()
{
	FILE * fp = fopen("D:/c.txt", "w");
	if (!fp)
		return -1;

	//char p[] = "hello world\n";
	//fputs(p, fp);
	//strcpy(p, "hello kitty\n");
	//fputs(p, fp);

	char * p = (char *)malloc(sizeof(char) * 1024);
	if (!p)
		return -2;
	while (1)
	{
		memset(p, 0, 1024);
		scanf("%[^\n]", p);
		getchar();//\n
		//comm=exit
		if (!strcmp(p, "comm==exit"))
		{
			break;
		}

		fputs(p, fp);
		fputc('\n', fp);

	}

	free(p);
	fclose(fp);



	return EXIT_SUCCESS;
}

int main0302(void)
{
	FILE * fp = fopen("D:/c.txt", "r");
	if (!fp)
		return -1;

	char * p = (char *)malloc(sizeof(char) * 1024);
	while (!feof(fp))
	{
		memset(p, 0, 1024);
		fgets(p, 1024, fp);

		printf("%s", p);
	}


	free(p);
	fclose(fp);

}
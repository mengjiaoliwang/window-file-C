#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void readFile(char *** p, int * line)
{
	FILE *fp = fopen("D:/Ô´ÎÄ¼þ.txt", "r");
	if (!fp)
		return -1;

	*line = 0;

	char buf[1024];
	while (!feof(fp))
	{
		memset(buf, 0, 1024);

		fgets(buf, 1024, fp);
		*p = (char **)realloc(*p, (*line + 1)*sizeof(char*));
		(*p)[*line] = (char*)malloc(strlen(buf) + 1);
		strcpy((*p)[*line], buf);
		//*line = *line + 1;
		(*line)++;
	}
}

int main08()
{

	char ** p = NULL;
	int lines;

	readFile(&p, &lines);

	for (int i = 0; i < lines; i++)
	{
		printf("%s", p[i]);
	}


	for (int i = 0; i < lines; i++)
		free(p[i]);
	free(p);
	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{
	FILE *fp = fopen("D:/i.txt", "w");

	if (!fp)
		return -1;


	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == ':')
		{
			break;
		}

		fputc(ch, fp);

		//更新文件缓冲区
		fflush(fp);

	}

	fclose(fp);

	return EXIT_SUCCESS;
}
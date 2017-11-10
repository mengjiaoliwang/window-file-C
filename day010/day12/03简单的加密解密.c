#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//加密
int main301()
{
	FILE * fp1 = fopen("D:/a.txt", "r");
	FILE * fp2 = fopen("D:/b.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("打开文件失败\n");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//简单加密
		ch+=2;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return EXIT_SUCCESS;
}
//解密
int main302(void)
{
	FILE * fp1 = fopen("D:/b.txt", "r");
	FILE * fp2 = fopen("D:/c.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//解密
		ch-=2;
		printf("%c\n", ch);
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
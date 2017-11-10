#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include <time.h>

int main0501()
{
	srand((unsigned int)time(NULL));
	char ch = 108;
	//0110 1100
	short ch1 = (short)ch;
	//0000 0000 0110 1100
	ch1 = ch1 << 4;//1728

	ch1 = ch1 | 0x8000;
	//1000 0110 1100 0000  补码
	//1000 0110 1011 1111

	//0000 0110 1100 0000
	// |
	//1000 0000 0000 0000
	//混淆
	ch1 += rand() % 16;//0-15


	printf("%d\n", ch1);

	return EXIT_SUCCESS;
}

int main0502(void)
{
	//1000 0110 1011 1111
	short val = -31030;
	val = val >> 4;		//0000 1000 0110 1011
	val = val << 4;		//1000 0110 1011 0000  &
	val = val & 0x7fff;	//0111 1111 1111 1111 0x7fff
						//0000 0110 1011 0000

	val = val >> 4;
	char ch = (char)val;

	printf("%d\n", val);

	return -1;
}

//加密
int main0503(void)
{
	srand((unsigned int)time(NULL));

	FILE * fp1 = fopen("D:/源文件.txt", "r");
	FILE * fp2 = fopen("D:/加密文件.txt", "w");
	if (!fp1 || !fp2)
		return -1;

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		short ch1 = (short)ch;
		ch1 = ch1 << 4;
		ch1 = ch1 | 0x8000;
		ch1 = ch1 + rand() % 16;

		//printf("%d\n", ch1);

		fprintf(fp2, "%hd", ch1);
	}

	fclose(fp1);
	fclose(fp2);

}
//解密
int main0504(void)
{
	FILE * fp1 = fopen("D:/加密文件.txt", "r");
	FILE * fp2 = fopen("D:/解密文件.txt", "w");
	if (!fp1 || !fp2)
		return -1;
	short val;
	while (!feof(fp1))
	{
		fscanf(fp1, "%hd", &val);
		//printf("%hd\n", val);
		val = val >> 4;
		val = val << 4;
		val = val & 0x7fff;
		val = val >> 4;

		char ch = (char)val;

		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}



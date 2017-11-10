#include "º”√‹Ω‚√‹.h"

//º”√‹
__declspec(dllexport) int Encrypt(char * FileName, char * NewFileName)
{
	srand((unsigned int)time(NULL));
	FILE * fp1 = fopen(FileName, "r");
	FILE *fp2 = fopen(NewFileName, "w");
	if (!fp1 || !fp2)
		return -1;
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		short ch1 = (short)ch;
		ch1 = ch1 << 4;
		ch1 = ch1 | 0x8000;
		ch1 += rand() % 16;
		fprintf(fp2, "%hd", ch1);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}
__declspec(dllexport) int Decode(char * FileName, char * NewFileName)
{
	srand((unsigned int)time(NULL));
	FILE * fp1 = fopen(FileName, "r");
	FILE *fp2 = fopen(NewFileName, "w");
	if (!fp1 || !fp2)
		return -1;
	short val;
	while (!feof(fp1))
	{
		fscanf(fp1, "%hd", &val);

		val = val << 1;
		val = val >> 5;
		char ch = (char)val;
		fputc(ch, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}
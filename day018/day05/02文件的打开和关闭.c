#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100;

int main0201()
{
	FILE * fp = fopen("D:/a.txt", "r");
	//1���ļ�Ȩ�޲���
	//2��������ļ����� 
	//3�����ļ�·��ʧ��
	if (!fp)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}

	//����->1���ַ���д 2���ж�д 3����ʽ����д 4�������ƶ�д
	//     fgetc fputc  fgets fputs fprintf fscanf  fread fwrite
	//�ļ�������־->  1��EOF��-1��  �ı��ļ� 2��feof���ļ�ָ�룩
	//1���ַ���д
	char ch;
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);


	return EXIT_SUCCESS;
}

int main0202(void)
{
	//w д�ļ�  ����ļ������� �ᴴ�����ļ� �ļ����� �Ḳ���ļ�����
	FILE * fp = fopen("D:/b.txt", "w");
	if (!fp)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	//char ch = 'a';
	//fputc(ch, fp);
	//ch = 'b';
	//fputc(ch, fp);

	char ch;

	while (1)
	{
		scanf("%c", &ch);
		if (ch == ':')
			break;
		fputc(ch, fp);
	}

	fclose(fp);


	return 0;
}
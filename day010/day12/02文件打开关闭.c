#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0101()
{
	FILE * fp = fopen("D:/����.txt", "r");
	if (fp == NULL)
	{
		printf("���ļ�ʧ��!\n");
		return -1;
	}

	printf("�ļ��򿪳ɹ���\n");

	//�����ļ�
	char ch = fgetc(fp);
	//����Ҫ�ı��ļ���ָ�룬�Ϳ��Զ�ȡ�ļ�������
	//fp++;//err
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);

	//�ر��ļ�
	fclose(fp);


	return EXIT_SUCCESS;
}

int main0102(void)
{
	FILE * fp = fopen("D:/����.txt", "r");
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}

	char ch;
	//EOF��ʾ�ı��ļ��Ľ�����־
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);


	return 0;
}

int main0103(void)
{
	FILE * fp = fopen("D:/a.txt", "a");
	if (fp == NULL)
		return -1;

	char ch = 'b';
	fputc(ch, fp);

	fclose(fp);
}

int main0104(void)
{
	FILE * fp = fopen("D:/b.txt", "w");
	if (fp == NULL)
		return -1;
	char ch;
	while (1)
	{
		//ch = getchar();
		scanf("%c", &ch);

		if (ch == ':')
		{
			break;
		}
		fputc(ch, fp);

	}


	fclose(fp);
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	
	char ch;

	FILE * fp = fopen("../../f.txt", "w");
	if (!fp)
		return -1;

	while (1)
	{
		scanf("%c", &ch);
		if (ch == ':')
		{
			break;
		}

		fputc(ch, fp);
		//���»�����
		//�ŵ㣺����ʵʱ���� ��ֹ�ϵ������˳����µ��ļ����ݶ�ʧ
		//ȱ�㣺�ڴ��Ӳ��Ƶ���������ʱ���˷ѣ�����Ӳ��
		fflush(fp);

	}
	fclose(fp);

	return EXIT_SUCCESS;
}
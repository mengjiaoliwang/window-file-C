#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*
1��������ȡ���ݽṹ��
	key value
	lines
2�����ļ���ȡ����
	#ע���ļ�����Ҫ�洢
	��Ч����ip:192.168.78.90
	key->ip
	value->192.168.78.90
	������Ч���ݼ�������
3����ӡ����ѯ����ȡ���� ip->192.168.78.90
4���ر��ļ����ͷŶѿռ�

*/

struct content
{
	char * key;
	char * value;
};

typedef struct Data
{
	//�ṹ������
	struct content *list;
	//����
	int lines;
}data;


int GetFile(char * filename, char * mode, data * d)
{
	FILE * fp = fopen(filename, mode);
	if (!fp)
	{
		printf("�������ļ�ʧ��\n");
		return -1;
	}
	//��ʼ�������ļ�����
	d->lines = 0;
	d->list = malloc(sizeof(struct content));


	char * buf = (char*)malloc(sizeof(char) * 1024);

	while (!feof(fp))
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);
		//�ж��Ƿ���ע��
		if (buf[0] == '#')
		{
			continue;
		}
		//�жϼ�ֵ�Ը�ʽ

		char * p=strchr(buf, ':');
		if (p == NULL)
		{
			continue;
		}
		d->list = realloc(d->list, (d->lines + 1)*sizeof(struct content));

		d->list[d->lines].key = (char *)malloc((p - buf) + 1);
		memset(d->list[d->lines].key, 0, (p - buf) +1);
		memcpy(d->list[d->lines].key, buf, p - buf);

		d->list[d->lines].value = (char *)malloc(&buf[strlen(buf)] - p + 1);
		memset(d->list[d->lines].value, 0, &buf[strlen(buf)] - p + 1);
		memcpy(d->list[d->lines].value, p+1, &buf[strlen(buf)] - p);

		d->lines++;

	}
	//for (int i = 0; i < d->lines; i++)
	//{
	//	printf("key:%s\n", d->list[i].key);
	//	printf("value:%s\n", d->list[i].value);
	//}

	free(buf);
	fclose(fp);

}

int SearchData(data d, char * key, char *value)
{
	for (int i = 0; i < d.lines; i++)
	{
		if (!strcmp(key, d.list[i].key))
		{
			strcpy(value, d.list[i].value);
			return 0;
		}
	}
	return -1;
}

void PrintData(data d)
{
	for (int i = 0; i < d.lines; i++)
	{
		printf("key:%s\n", d.list[i].key);
		printf("value:%s", d.list[i].value);
	}
}

void CloseSpace(data d)
{
	for (int i = 0; i < d.lines; i++)
	{
		free(d.list[i].key);
		d.list[i].key = NULL;
		free(d.list[i].value);
		d.list[i].value = NULL;
	}

	free(d.list);
}

int main()
{
	char * filename = "D:/config.ini";
	char * mode = "r";

	data d;
	//��ȡ�����ļ�����
	GetFile(filename, mode, &d);
	//��ӡ�����ļ���Ϣ
	char value[1024];
	SearchData(d, "port", value);
	printf("%s", value);

	//PrintData(d);
	//�ͷŶѿռ�
	CloseSpace(d);
	return EXIT_SUCCESS;
}
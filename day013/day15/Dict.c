#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAXWORD 111104
/*
1�������ṹ��
2�����ļ�
3�����ļ�
4�����ٿռ�洢����
5�����ҵ���
6���ͷŶѿռ��ļ��ر�

��չ���ݣ�
1������ʹ��
2����Сдת��
*/

struct Index
{
	int start;
	int end;
}indexs[26];
typedef struct Dict
{
	char * word;
	char * trans;
}dict;

dict * p = NULL;

char ch = 'a';

int OpenFile(char * filename,char * mode)
{
	//���ļ�
	FILE * fp = fopen(filename, mode);
	if (!fp)
		return -1;
	//��ȡ�ļ�����
	char buf[1024];
	int index = 0;
	int num = 0;
	while (!feof(fp))
	{
		//��ȡ����
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);

		//���ٶѿռ�������
		p[index].word = (char*)malloc(sizeof(char)* strlen(buf));
		memset(p[index].word, 0, strlen(buf));
		//p[index].word = buf;//err
		strcpy(p[index].word, &buf[1]);


		//���õ�������
		if (ch == buf[1])
		{
			indexs[num].end++;
		}
		else
		{
			num++;
			ch = buf[1];
			indexs[num].start = indexs[num - 1].end + 1;
			indexs[num].end = indexs[num - 1].end + 1;
		}
		//printf("%d\n", num);
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);

		p[index].trans = (char*)malloc(sizeof(char)*(strlen(buf) - 5));
		memset(p[index].trans, 0, strlen(buf) - 5);
		strcpy(p[index].trans, &buf[6]);
		//fgets(buf, 1024, fp);//222208/2

		index++;
	}
	//printf("%d\n", index);

	for (int i = 0; i < 26; i++)
	{
		printf("%c����ʼλ�ã�%d\n", 'a' + i, indexs[i].start);
		printf("%c�Ľ���λ�ã�%d\n", 'a' + i, indexs[i].end);
	}

	//�ر��ļ�
	fclose(fp);
	return index;
}

int SearchWord(char * key,char * value,int index)
{
	for (int i = indexs[index].start; i < indexs[index].end; i++)
	{
		//�Ƚϵ���
		if (!strcmp(p[i].word, key))
		{
			strcpy(value, p[i].trans);
			return 0;
		}
	}
	return -1;
}
void CloseSpace()
{
	for (int i = 0; i < MAXWORD; i++)
	{
		free(p[i].word);
		p[i].word = NULL;
		free(p[i].trans);
		p[i].trans = NULL;
	}

	free(p);
	p = NULL;
}
int main()
{
	//����������ʼλ��
	indexs[0].start = 0;
	//�����ṹ������ָ��
	p = (dict *)malloc(sizeof(dict) * MAXWORD);
	char * filename = "D:/dict.txt";
	char * mode = "r";
	OpenFile(filename, mode);

	//��ӡ���ʺͷ���
	//for (int i = 0; i < MAXWORD; i++)
	//{
	//	printf("���ʣ�%s", p[i].word);
	//	printf("���룺%s", p[i].trans);
	//}

	char key[1024];
	char value[1024];
	while (1)
	{
		memset(key, 0, 1024);
		memset(value, 0, 1024);
		//fgets(key, 1024, stdin);
		printf("��������Ҫ��ѯ�ĵ��ʣ�\n");
		scanf("%[^\n]", key);
		//hello->Hello
		//�ж����������ĸ��0-25��
		int index=0;
		getchar();
		//comm=exit ��Ϊ�˳�
		if (!strcmp(key, "comm=exit"))
		{
			break;
		}
		key[strlen(key)] = '\n';

		int ret = SearchWord(key, value,index);
		if (!ret)
			printf("%s", value);
		else
			printf("δ�ҵ��õ���\n");
	}


	CloseSpace();

	return EXIT_SUCCESS;
}
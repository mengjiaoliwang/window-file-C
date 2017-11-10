#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAXWORD 111104
/*
1、创建结构体
2、打开文件
3、读文件
4、开辟空间存储内容
5、查找单词
6、释放堆空间文件关闭

扩展内容：
1、索引使用
2、大小写转换
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
	//打开文件
	FILE * fp = fopen(filename, mode);
	if (!fp)
		return -1;
	//读取文件内容
	char buf[1024];
	int index = 0;
	int num = 0;
	while (!feof(fp))
	{
		//读取内容
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);

		//开辟堆空间存放数据
		p[index].word = (char*)malloc(sizeof(char)* strlen(buf));
		memset(p[index].word, 0, strlen(buf));
		//p[index].word = buf;//err
		strcpy(p[index].word, &buf[1]);


		//设置单词索引
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
		printf("%c的起始位置：%d\n", 'a' + i, indexs[i].start);
		printf("%c的结束位置：%d\n", 'a' + i, indexs[i].end);
	}

	//关闭文件
	fclose(fp);
	return index;
}

int SearchWord(char * key,char * value,int index)
{
	for (int i = indexs[index].start; i < indexs[index].end; i++)
	{
		//比较单词
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
	//设置索引起始位置
	indexs[0].start = 0;
	//创建结构体数组指针
	p = (dict *)malloc(sizeof(dict) * MAXWORD);
	char * filename = "D:/dict.txt";
	char * mode = "r";
	OpenFile(filename, mode);

	//打印单词和翻译
	//for (int i = 0; i < MAXWORD; i++)
	//{
	//	printf("单词：%s", p[i].word);
	//	printf("翻译：%s", p[i].trans);
	//}

	char key[1024];
	char value[1024];
	while (1)
	{
		memset(key, 0, 1024);
		memset(value, 0, 1024);
		//fgets(key, 1024, stdin);
		printf("请输入您要查询的单词：\n");
		scanf("%[^\n]", key);
		//hello->Hello
		//判断输入的首字母【0-25】
		int index=0;
		getchar();
		//comm=exit 最为退出
		if (!strcmp(key, "comm=exit"))
		{
			break;
		}
		key[strlen(key)] = '\n';

		int ret = SearchWord(key, value,index);
		if (!ret)
			printf("%s", value);
		else
			printf("未找到该单词\n");
	}


	CloseSpace();

	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*
1、创建读取数据结构体
	key value
	lines
2、打开文件读取内容
	#注释文件不需要存储
	有效内容ip:192.168.78.90
	key->ip
	value->192.168.78.90
	根据有效内容计算行数
3、打印（查询）读取数据 ip->192.168.78.90
4、关闭文件，释放堆空间

*/

struct content
{
	char * key;
	char * value;
};

typedef struct Data
{
	//结构体数组
	struct content *list;
	//行数
	int lines;
}data;


int GetFile(char * filename, char * mode, data * d)
{
	FILE * fp = fopen(filename, mode);
	if (!fp)
	{
		printf("打开配置文件失败\n");
		return -1;
	}
	//初始化配置文件行数
	d->lines = 0;
	d->list = malloc(sizeof(struct content));


	char * buf = (char*)malloc(sizeof(char) * 1024);

	while (!feof(fp))
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, fp);
		//判断是否是注释
		if (buf[0] == '#')
		{
			continue;
		}
		//判断键值对格式

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
	//获取配置文件内容
	GetFile(filename, mode, &d);
	//打印配置文件信息
	char value[1024];
	SearchData(d, "port", value);
	printf("%s", value);

	//PrintData(d);
	//释放堆空间
	CloseSpace(d);
	return EXIT_SUCCESS;
}
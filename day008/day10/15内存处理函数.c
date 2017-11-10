#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1501()
{
	//int *p = (int *)malloc(sizeof(int) * 10);
	char *p = (char*)malloc(sizeof(char) * 40);
	//重置内存空间的值  0  单位为字节
	memset(p, 'A', 40);
	for (int i = 0; i < 40; i++)
		printf("%c\n", p[i]);

	free(p);
	p = NULL;

	system("pause");
	return EXIT_SUCCESS;
}

int main1502(void)
{
	//char *p = malloc(sizeof(char) * 40);
	//1、遇到\0终止
	//2、处理内容是字符串
	//3、深拷贝和浅拷贝
	//strcpy(p, "hello\0world");
	//1、拷贝内容和个数相关
	//2、可以处理任何数据内容
	//memcpy(p, "hello\0world", 12);

	//for (int i = 0; i < 12; i++)
	//	printf("%c", p[i]);

	//int *p = (int *)malloc(sizeof(int) * 10);
	//memset(p, 0, 40);
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//memcpy(p, arr, 40);

	//for (int i = 0; i < 10; i++)
	//	printf("%d\n", p[i]);
	//printf("%s\n", p);
	return 0;
}

int main1503(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//拷贝的内容和源冲突可能会报错
	//memcpy(&arr[3], arr, 20);//err

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

}

int main1504(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//如果目标和源额米有冲突  memmove和memcpy操作相同
	memmove(&arr[3], arr, 20);//ok

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
}
int main()
{
	//char * buf = "hello world";//数据区字符串常量区
	//char arr[] = "hello world";//栈区
	//int buf[] = { 1,2,3,4,5 };
	int arr[] = { 1,2,3,4,5,6,7,9 };
	char buf[] = { 1,0,0,0,5 };
	//printf("%d\n", strcmp(buf, arr));
	int val = memcmp(buf, arr, 4);
	printf("%d\n", val);
	return 0;
}

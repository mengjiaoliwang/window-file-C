#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void Sort(char ** buf, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (buf[j][0]>buf[j + 1][0])
			{
				char * temp = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = temp;
			}
		}
	}
}

int main13()
{
	/*
	
	//字符串数组 ->指针数组
	char * buf[5] = { "hello","world","nichousha","dabaobei","guawazi" };
	//1、buf[i][0]
	//2、*buf[i]
	//3、*(*(buf+i))
	*/				//0xff00	0xff01
	char * buf[5] = { "hello","world","nichousha","dabaobei","guawazi" };
	//buf[0]=0xff01
	//buf[1]=0xff00
	//printf("%c\n", buf[0][0]);
	//printf("%c\n", *buf[0]);
	//printf("%c\n", *(*(buf + 0)));

	Sort(buf, 5);
	for (int i = 0; i < 5; i++)

		printf("%s\n", buf[i]);

	system("pause");
	return EXIT_SUCCESS;
}
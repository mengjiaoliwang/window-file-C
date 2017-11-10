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
		//更新缓冲区
		//优点：数据实时保存 防止断点或错误退出导致的文件数据丢失
		//缺点：内存和硬盘频繁交互造成时间浪费，消耗硬盘
		fflush(fp);

	}
	fclose(fp);

	return EXIT_SUCCESS;
}
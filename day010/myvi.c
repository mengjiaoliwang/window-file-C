#include <stdio.h>


int main(int argc,char * argv[])
{
	if(argc < 2)
	{
		printf("缺少参数\n");
		return -1;
	}
	FILE * fp = fopen(argv[1],"w");
	if(fp==NULL)
	{
		//打开文件失败
		//1、没有找到该文件
		//2、文件权限
		//3、打开文件超出上限
		printf("打开文件失败\n");
		return -2;
	}

	char ch;

	while(1)
	{
		scanf("%c",&ch);
		if(ch == ':')
		{
			break;
		}
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}

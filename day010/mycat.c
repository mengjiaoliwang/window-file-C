#include <stdio.h>


int main(int argc,char * argv[])
{
	if(argc < 2)
	{
		printf("缺少参数\n");
		return -1;
	}

	FILE * fp = fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("打开文件失败\n");
		return -2;
	}


	char ch;
	//循环读文件
	while((ch = fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}

	fclose(fp);
	return 0;
}

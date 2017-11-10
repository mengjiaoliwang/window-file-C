#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAXSIZE 1024*1024*8

//argc  标识参数的个数
//argv  标识参数的内容
int main(int argc,char * argv[])
{
	if(argc < 3)
	{
		printf("缺少参数\n");
		return -1;
	}

	FILE * fp1 = fopen(argv[1],"r");
	FILE * fp2 = fopen(argv[2],"w");
	if(!fp1 || !fp2)
	{
		printf("打开文件失败\n");
		return -2;
	}	
	
	//二进制读写
	//char ch[1000];
	char * ch = NULL;
	int spacesize = 0;
	//获取文件状态
	struct stat s={0};
	stat(argv[1],&s);
	if(s.st_size < MAXSIZE)
	{
		ch = (char *)malloc(s.st_size);
		spacesize = s.st_size;
	}
	else
	{
		ch = (char *)malloc(MAXSIZE);
		spacesize = MAXSIZE;
	}
	//读取成功个数
	int count = 0;
	while(!feof(fp1))
	{
		memset(ch,0,spacesize);
		count = fread(ch,sizeof(char),spacesize,fp1);
		fwrite(ch,sizeof(char),count,fp2);

	}

	free(ch);
	fclose(fp1);
	fclose(fp2);
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc,char * argv[])
{
	if(argc<2)
	{
		printf("缺少参数\n");
		return -1;
	}

	//定义字符串 存储"gcc -o "
	char buf[1024]="gcc -o ";
	char temp[256];
	strcpy(temp,argv[1]);
	char *p=strtok(temp,".");
	strcat(buf,p);
	//"gcc -o a1"
	strcat(buf," ");
	//"gcc -o a1 "
	strcat(buf,argv[1]);
	//printf("===%s===\n",buf);
	system(buf);
	return 0;
}


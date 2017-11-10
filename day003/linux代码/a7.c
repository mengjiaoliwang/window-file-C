#include <stdio.h>


int main(void)
{
	int score;
	scanf("%d",&score);
	if(score >= 670)
	{
		printf("我要上清华\n");
		if(score>=690)
		{
			printf("我要选择计算机\n");
		}
		else if(score >= 680)
		{
			printf("我要选择考古学\n");
		}
		else 
		{
			printf("我要选择挖掘机\n");
		}
	}
	else if(score >= 620)
	{
		printf("我要上人大\n");
	}
	else if(score >=320)
	{
		printf("我要上传智\n");
	}	
	else
	{
		printf("我要上蓝翔\n");
	}

	return 0;
}

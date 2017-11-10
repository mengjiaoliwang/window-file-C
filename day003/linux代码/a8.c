#include <stdio.h>


int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a最重\n");
		}
		else
		{
			printf("c最重\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b最重\n");
		}
		else
		{
			printf("c最重\n");
		}
	}

}

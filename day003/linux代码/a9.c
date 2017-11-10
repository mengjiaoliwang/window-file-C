#include <stdio.h>

int main(void)
{
	/*
	int a=10;
	int b=20;
	int c;
	a>b ? (c = a):(c =  b);
	
	if(a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	
	printf("%d\n",c);
	*/

	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a>b?
	(a>c?(printf("a最重");)
	:
	(printf("c最重");)
	:
	(b>c?(printf("b最重");)
	:
	(printf("c最重");));
	return 0;
}

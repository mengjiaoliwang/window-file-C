#include <stdio.h>


int main(void)
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("值为1\n");
		break;
		case 2:
			printf("值为2\n");
		break;
		default:
			printf("该值未知\n");
		break;
	
	}
	return 0;
}

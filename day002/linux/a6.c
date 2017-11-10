#include <stdio.h>


int main(void)
{
	short a = 10;
	int b = a;
	long c = b;
	long long d = c;
	
	printf("a=%hd\n",a);
	printf("b=%d\n",b);
	printf("c=%ld\n",c);
	printf("d=%lld\n",d);
	return 0;
}

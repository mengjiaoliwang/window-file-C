#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*


*/
int main1101()
{
	char a = 10;

	//a = a << 1;
	//a = a << 1;
	a = a << 5;

	/*
	0000 1010
	0001 0100	1
	0010 1000	2
	0101 0000	3
	1010 0000	4
	0100 0000	
	*/
	printf("%d\n", a);


	return EXIT_SUCCESS;
}

int main(void)
{
	char a = 100;
	/*
	0110 0100
	0011 0010
	*/
	a = a >> 1;
	printf("%d\n",a);
}
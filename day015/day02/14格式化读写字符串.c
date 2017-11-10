#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1401()
{
	char buf[1024] = "Äã³òÉ¶";
	//sprintf(buf, "%X", 101);
	//int a;
	char ch[100];
	sscanf(buf, "%2s", ch);
	//printf("%d\n", a);
	printf("%s", ch);
	return EXIT_SUCCESS;
}

int main14(void)
{
	char buf[1024] = "´ó±¦±´123456abc";
	char ch[100] = { 0 };

	sscanf(buf, "%[^0-9]", ch);

	printf("%s\n", ch);
}
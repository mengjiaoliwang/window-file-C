#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void RemoveSpace1(char * buf)
{
	char * p = (char *)calloc(strlen(buf), 1);
	//char * temp = buf;
	int i = 0;
	int j = 0;
	while (buf[j])
	{
		if (buf[j] != ' ')
		{
			p[i] = buf[j];
			i++;
		}
		j++;
	}
	strcpy(buf, p);
}

void RemoveSpace2(char * buf)
{
	char * p = (char*)malloc(strlen(buf));
	memset(p, 0, strlen(buf));
	char * temp = buf;
	int i = 0;
	while (*temp)
	{
		if (*temp != ' ')
		{
			p[i] = *temp;
			i++;
		}
		temp++;
	}
	strcpy(buf, p);
}
void RemoveSpace(char * buf)
{
	char * temp = buf;
	char * val = buf;
	while (*temp)
	{
		if (*temp != ' ')
		{
			*val = *temp;
			val++;
		}
		temp++;
	}
	*val = 0;
}
int main11()
{
	char buf[] = "   he   llo Äã ³ò É¶   wo  rld   ";
	RemoveSpace(buf);

	printf("===%s===\n", buf);
	return EXIT_SUCCESS;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

char * RemoveSpace(char * buf)
{
	char * end = buf + (strlen(buf) - 1);
	char *start = buf;
	while (end >= start)
	{
		if (*end == ' ')
		{
			end--;
		}
		else
		{
			end++;
			break;
		}
	}
	*end = '\0';

	while (start < end)
	{
		if (*start == ' ')
		{
			start++;
		}
		else
		{
			return start;
		}
	}

}

int main()
{
	char buf[] = "    hello   world";

	char * p= RemoveSpace(buf);
	printf("===%s===\n", p);

	return EXIT_SUCCESS;
}
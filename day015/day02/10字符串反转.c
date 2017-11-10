#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void fun08(char * buf)
{
	//int i = 0;
	//int j = strlen(buf) - 1;
	//while (i < j)
	//{
	//	char temp = buf[i];
	//	buf[i] = buf[j];
	//	buf[j] = temp;
	//	i++;
	//	j--;
	//}
	char * start = buf;
	char * end = buf + strlen(buf) - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}
int main10()
{
	char buf[] = "hello world";

	fun08(buf);
	printf("%s\n", buf);
	char buf1[] = "   he   llo   wo  rld   ";//hello


	return EXIT_SUCCESS;
}
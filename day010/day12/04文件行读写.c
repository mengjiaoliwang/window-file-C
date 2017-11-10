#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main401()
{
	char buf[] = "hello world\n";
	char buf1[] = "你瞅啥";

	FILE * fp = fopen("D:/d.txt", "w");
	if (!fp)
		return -1;


	fputs(buf, fp);
	fputs(buf1, fp);


	fclose(fp);

	return EXIT_SUCCESS;
}

int main402(void)
{
	FILE * fp = fopen("D:/d.txt", "r");
	if (!fp)
		return -1;

	char buf[10];
	//while (!feof(fp))
	//{
		//重置buf字符串的内存值为0
		memset(buf, 0, 10);
		fgets(buf, 10, fp);

		printf("===%s===", buf);

		memset(buf, 0, 10);
		fgets(buf, 10, fp);

		printf("%s===", buf);

		memset(buf, 0, 10);
		fgets(buf, 10, fp);

		printf("%s", buf);
	//}
	fclose(fp);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0801()
{
	if (!remove("../../bz.txt"))
	{
		printf("文件删除成功\n");
	}
	else
	{
		printf("文件删除失败\n");
	}


	return EXIT_SUCCESS;
}

int main0802(void)
{
	if (!rename("../../bz.txt", "../../班长.txt"))
	{

		printf("文件重命名成功\n");
	}
	else
	{
		printf("文件重命名失败\n");
	}
	return  0;
}
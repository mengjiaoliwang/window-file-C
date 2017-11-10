#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main801()
{
	//定义数据长度超出了栈区大小1M
	//int scores[260000];


	//在堆区开辟数据空间  单位为字节
	int *p = malloc(sizeof(int));

	*p = 100;

	printf("%d\n", *p);

	//释放堆空间
	free(p);
	p = NULL;
	//现在p为野指针
	//释放野指针会报错
	//释放空指针不会报错
	free(p);
	//free(p);
	//free(p);
	//free(p);
	//free(p);
	//free(p);
	



	return EXIT_SUCCESS;
}

int main08 (void)
{
	//int *p = (int *)malloc(sizeof(int) * 8100000*10*3);

	//for (int i = 0; i < 10; i++)
	//{
	//	//*(p + i) = i;
	//	p[i] = i;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", p[i]);
	//}

	//free(p);
	//p = NULL;
	getchar();
	return 0;
}
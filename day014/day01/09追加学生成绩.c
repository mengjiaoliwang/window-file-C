#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{
	int * p = (int *)calloc(3, sizeof(int));

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &p[i]);
	}
	char ch;
	int len = 3;
	while (1)
	{
		getchar();
		printf("是否继续添加学员成绩：\n");
		scanf("%c", &ch);
		if (ch == 'n')
		{
			break;
		}
		len++;
		p = (int*)realloc(p, len*sizeof(int));
		scanf("%d", &p[len - 1]);
	}

	for (int i = 0; i < len; i++)
		printf("%d\n", p[i]);


	free(p);


	return EXIT_SUCCESS;
}
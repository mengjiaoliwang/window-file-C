#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	FILE * fp = fopen("D:/test.txt", "r");
	if (!fp)
		return -1;

	char buf[100];
	while (!feof(fp))
	{
		int i = 0;
		int sum = 0;
		memset(buf, 0, 100);
		fgets(buf, 100, fp);//45 42 22
		char * p = strtok(buf, " ");
		sum += atoi(p);
		i++;
		while (p != NULL)
		{
			p = strtok(NULL, " ");
			if (p == NULL)
				break;
			i++;
			sum += atoi(p);
		}
		printf("%5.2f\n", sum/(float)i);
	}

	fclose(fp);

	return EXIT_SUCCESS;
}
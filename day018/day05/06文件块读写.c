#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0601()
{
	FILE * fp = fopen("D:/f.txt", "wb");
	if (!fp)
		return -1;
	int a = 123456;
	fwrite(&a, sizeof(int), 1, fp);


	fclose(fp);



	return EXIT_SUCCESS;
}

int main0602(void)
{
	FILE *fp = fopen("D:/f.txt", "rb");
	if (!fp)
		return -1;
	int a;
	fread(&a, sizeof(int), 1, fp);

	printf("%d\n", a);


	fclose(fp);

	return 0;
}

int main0603(void)
{
	FILE * fp = fopen("D:/g.txt", "wb");
	if (!fp)
		return -1;
	int arr[10] = { 1,2,3,4,5,6,7 };
	fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fp);

	fclose(fp);
	return 0;


}

int main0604(void)
{
	FILE * fp = fopen("D:/g.txt", "rb");
	if (!fp)
		return -1;
	int a;
	while (!feof(fp))
	{
		fread(&a, sizeof(int), 1, fp);
		printf("%d\n", a);

	}

	fclose(fp);

}

struct stu
{
	char name[21];
	int age;
	int scores[3];
};

int main0605(void)
{
	struct stu ss[3] =
	{
		{"张三",18,100,99,88},
		{"李四",19,66,55,69},
		{"王二",20,89,98,89}
	};


	FILE * fp = fopen("D:/h.txt", "wb");
	if (!fp)
		return -1;

	for (int i = 0; i < 3; i++)
	{
		fwrite(&ss[i], sizeof(ss[i]), 1, fp);
	}

	fclose(fp);
	return 0;
}

int main0606(void)
{
	struct stu ss;

	FILE * fp = fopen("D:/h.txt", "rb");
	if (!fp)
		return -1;

	for (int i = 0; i < 3;i++)
	{
		fread(&ss, sizeof(ss), 1, fp);

		printf("姓名：%s\n", ss.name);
		printf("年龄：%d\n", ss.age);
		printf("成绩：%d\n", ss.scores[0]);
		printf("成绩：%d\n", ss.scores[1]);
		printf("成绩：%d\n", ss.scores[2]);
	}


	fclose(fp);
	return 0;

}
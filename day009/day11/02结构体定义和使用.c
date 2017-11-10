#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//结构体定义
struct stu
{
	//结构体成员列表   
	//结构体成员列表可以不同

	char name[21];
	int age;
	char sex;//M F
	int socre;
	char tel[15];

}s = { "漩涡·王老七",20,'F',88,"13001991300" };

int main204(void)
{
	printf("姓名：%s\n", s.name);
	printf("年龄：%d\n", s.age);
	printf("性别：%s\n", s.sex == 'M' ? "男" : "女");
	printf("成绩：%d\n", s.socre);
	printf("电话：%s\n", s.tel);
	return 0;
}


int main203(void)
{
	struct stu s = { .age = 18,.socre = 99,.tel = "13001991200",.name = "黑崎 ·刘能",.sex = 'M' };

	printf("姓名：%s\n", s.name);
	printf("年龄：%d\n", s.age);
	printf("性别：%s\n", s.sex == 'M' ? "男" : "女");
	printf("成绩：%d\n", s.socre);
	printf("电话：%s\n", s.tel);
	return 0;
}
int main202(void)
{
	struct stu s;
	//s.name = "蒙奇·D·赵四";
	strcpy(s.name, "蒙奇·D·赵四");
	s.age = 18;
	s.sex = 'F';
	s.socre = 100;
	strcpy(s.tel, "13001991100");


	printf("姓名：%s\n", s.name);
	printf("年龄：%d\n", s.age);
	printf("性别：%s\n", s.sex == 'M' ? "男" : "女");
	printf("成绩：%d\n", s.socre);
	printf("电话：%s\n", s.tel);
	return 0;
}



int main201()
{
	//创建结构体变量  初始化值
	//struct stu结构体名称
	//s 结构体变量
	struct stu s = { "葛二蛋",500,'M',9,"13001991000" };
	//通过结构体变量【.】可以找到结构体成员
	printf("姓名：%s\n", s.name);
	printf("年龄：%d\n", s.age);
	printf("性别：%s\n", s.sex == 'M' ? "男" : "女");
	printf("成绩：%d\n", s.socre); 
	printf("电话：%s\n", s.tel);

	system("pause");
	return EXIT_SUCCESS;
}

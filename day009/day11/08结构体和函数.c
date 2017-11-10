#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct stu
{
	char name[21];
	int age;
	char sex;
	int score;
}ss;
//结构体变量作为函数参数
//void fun01(ss s)
//{
//	strcpy(s.name, "曹操");
//	s.age = 50;
//	s.sex = 'M';
//	s.score = 100;
//}
//结构体指针作为函数参数
//void fun02(ss* s)
//{
//	strcpy(s->name, "曹丕");
//	s->age = 40;
//	s->sex = 'M';
//	s->score = 100;
//}
//结构体二级指针作为函数参数
void fun03(ss** s)
{
	*s = malloc(sizeof(ss));
	strcpy((*s)->name, "孙尚香");
	(*s)->age = 40;
	(*s)->sex = 'F';
	(*s)->score = 100;
}
//结构体作为函数的返回值
ss * fun04()
{
	ss *s = (ss*)malloc(sizeof(ss));
	//printf("%p\n", s);
	return s;
}
//const修饰的结构体类型  
//可以修改结构体指针变量的值
//不可以修改结构体指针变量指向的值
void fun05(const ss * s)
{
	s = (ss*)malloc(sizeof(ss));//ok
	//s->age = 20;/err
	//strcpy(s->name, "司马昭");

	//printf("%s\n", s->name);
}
//const 修饰结构体变量
//能改变指针变量指向的值
//不能修改指针变量的值
void fun06(ss * const s)
{
	//s = (ss*)malloc(sizeof(ss));/err
	s->age = 20;//ok
	printf("%d\n", s->age);
}
//const修饰结构体类型const修饰结构体变量
void fun07(const ss * const s)
{
	//s = (ss*)malloc(sizeof(ss));//err
	//s->age = 18;//err

}
int main0803()
{
	ss s = { "曹爽",18,'F',88 };
	fun06(&s);

}
int main0802()
{
	ss * s = NULL;
	s = fun04();

	strcpy(s->name, "曹植");
	s->age = 40;
	s->sex = 'M';
	s->score = 101;

	//printf("%p\n", s);

	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s->sex == 'M' ? "男" : "女");
	printf("%d\n", s->score);
}
int main0801()
{
	//ss s = { NULL };
	ss* s = NULL;
	fun03(&s);
	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s->sex == 'M' ? "男" : "女");
	printf("%d\n", s->score);


	free(s);
	return EXIT_SUCCESS;
}
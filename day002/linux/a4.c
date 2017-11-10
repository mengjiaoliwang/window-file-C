#include <stdio.h>

int main(void)
{
	//整型
	int a=100;
	//短整型
	short a1 = 100;
	//长整型
	long a2 = 100;
	//长长整型
	long long a3 = 100;
	//单精度浮点型
	float b=3.14;
	//双精度浮点型
	double b1 = 6.789;
	//字符型
	char c='a';
	//size_t -> unsigend int
	//int len = sizeof(a);//int 在内存中占的字节（B）大小  4B = 32bit
	//int  len = sizeof(b);//float 在内存中占4个字节
	printf("整型：%d\n",sizeof(a));
	printf("短整型：%d\n",sizeof(a1));
	printf("长整型：%d\n",sizeof(a2));
	printf("长长整型：%d\n",sizeof(a3));
	printf("单精度浮点型：%d\n",sizeof(b));
	printf("双精度浮点型：%d\n",sizeof(b1));
	printf("字符型：%d\n",sizeof(c));
	printf("整型：%d\n",sizeof(a));

}

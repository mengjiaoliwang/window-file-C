#include <stdio.h>


int main(void)
{

	//printf("%f\n",3/5.0);
	//printf("%d\n",7%4);
	int a=10;
	//a=a+1;
	//a++;后自曾
	//int b=2*a++;
	//++a;前自曾
	//int b=2*++a;
	//a++;//++a;
	//a--;//a=a-1;
	//printf("%d\n",a);
	//printf("%d\n",b);
	//注意：如果一个表达式中出现了一个变量的前自曾 和后自曾 会出现程序的二异性
	int b=++a * ++a;
	printf("%d\n",b);
	return 0;


}

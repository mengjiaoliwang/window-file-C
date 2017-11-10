#include <stdio.h>
#define PRC 2.4
int main(void)
{
	//买3斤茄子 每斤价格为2.4元 
	int weight = 3;//变量
	//const float prc = 2.4;//常量
	//jin = 4;
	//jiage = 3.5; err 不能向一个只读变量（常量）赋值 
	float sum = weight * PRC;
	printf("总价：%.1f\n",sum);
	return 0;

}

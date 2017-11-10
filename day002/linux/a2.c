#include <stdio.h>

#define PI 3.14

int main(void)
{
	//半径
	int r = 3;
	//周长
	float l = 2 * r * PI;
	//面积
	float s = PI * r * r;
	
	printf("周长：%.2f\n",l);
	
	printf("面积：%.2f\n",s);

}

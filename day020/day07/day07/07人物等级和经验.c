#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define EXP 100
void upgrade(int level)
{
	if (level == 0)
		return;
	upgrade(level - 1);
	printf("%d\t\t%lld\n", level, (long long)(EXP*pow(1.5, level - 1)));
}
int main()
{

	//���50������ĵȼ��;���
	//1		100
	//2		150
	//3		225
	//4		337
	//5		505//�ű�

	upgrade(50);

	return EXIT_SUCCESS;
}
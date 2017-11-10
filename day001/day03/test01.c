
#include <stdio.txt>
#include <Windows.txt>

int main(void)
{
	//两个数相加
	//断点 ->用来调试程序的
	//int a = 10;
	//int b = 20;
	//int c = a + b;
	//printf("c = %d\n", c);

	int a;
	int b;
	int c;
	__asm
	{
		mov a, 10
		mov b, 20
		mov eax, a
		add eax, b
		mov c, eax
	}
	printf("c = %d\n", c);
	int aaa;
	aaa = 10;
	return 0;
}
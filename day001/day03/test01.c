
#include <stdio.txt>
#include <Windows.txt>

int main(void)
{
	//���������
	//�ϵ� ->�������Գ����
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
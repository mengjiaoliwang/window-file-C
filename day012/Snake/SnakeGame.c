#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
#include <Windows.h>

#include <conio.h>

#define MAX_WIDTH 50
#define MAX_HEIGHT 20
/*
1���ߵĳ�ʼ��
	���峤��
	��������  x , y
	��ʼ����һ������
2����ʼ��ʳ��
	���������
	�����λ����������Ļ��
3����Ϸ�������
	��ͼ����
	������
	ʳ��
4����Ϸ�������̿���
	�߽��ж�
	�ϰ����ж�
	ʳ���ж�
		ʳ����ʧ���������λ��
		�����峤������
		��������������
		��������
5����Ϸ����
	��ӡ����
*/
//����
int score;
//�ؿ�
int level;
//ʳ������ [0]����X���� [1]����Y����
int randFood[2];
//����ƫ����
int dx = 0;
int dy = 0;
//�����ʼ��
int map[21][51] = { 0 };
COORD coord;
typedef struct Position
{
	int x;
	int y;
}pos;

struct Snake
{
	//����
	int len;
	//�洢�����������
	pos body[MAX_WIDTH * MAX_HEIGHT];
}snake;

void InitBody()
{

	//��ʼ���ߵ�����
	snake.len = 1;
	snake.body[0].x = MAX_WIDTH / 2;
	snake.body[0].y = MAX_HEIGHT / 2;

	//��ʼ�������͵ȼ�

	score = 0;
	level = 1;
}
void InitFood()
{
	randFood[0] = rand() % MAX_WIDTH;
	randFood[1] = rand() % MAX_HEIGHT;
}


void InitMap()
{
	for (int i = 0; i < MAX_HEIGHT+1; i++)
		for (int j = 0; j <MAX_WIDTH+1; j++)
		{
			if (i == MAX_HEIGHT)
				map[i][j] = 1;
			if (j == MAX_WIDTH)
				map[i][j] = 1;
		}
}
//������Ϸ����
void DrawUI()
{

	for (int i = 0; i < MAX_HEIGHT + 1; i++)
	{
		for (int j = 0; j < MAX_WIDTH + 1; j++)
		{
			if (map[i][j])
			{
				coord.X = j;
				coord.Y = i;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				putchar('#');
			}
		}
	}

	for (int i = 0; i < snake.len; i++)
	{
		coord.X = snake.body[i].x;
		coord.Y = snake.body[i].y;
		//���ÿ���̨�������λ��
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}

	coord.X = randFood[0];
	coord.Y = randFood[1];
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('*');


}
void StartGame()
{
	char key = 'D';
	//��ͷ�Ƿ񳬳��߽�
	while (snake.body[0].x >= 0 && snake.body[0].x <= MAX_WIDTH && 
		snake.body[0].y >= 0 && snake.body[0].y <= MAX_HEIGHT)
	{
		//���ƽ���
		DrawUI();
		//�����ߵ��ƶ�����
		//getchar() scanf() _getch()
		while (_kbhit())
		{
			key = _getch();
		}
		switch (key)
		{
		case 'a':
		case 'A':
			dx = -1; dy = 0; break;

		case 'd':
		case 'D':
			dx = 1; dy = 0; break;

		case 'w':
		case 'W':
			dx = 0; dy = -1; break;

		case 's':
		case 'S':
			dx = 0; dy = 1; break;
		}

		for (int i = 1; i < snake.len; i++)
		{
			//�ж���ͷ�������Ƿ�����ײ
			if (snake.body[0].x == snake.body[i].x  && snake.body[0].y == snake.body[i].y)
			{
				return;
			}
		}

		//ʳ�����ͷ����ײ
		if (randFood[0] == snake.body[0].x && randFood[1] == snake.body[0].y)
		{
			/*
			ʳ����ʧ���������λ��
			�����峤������
			��������������
			��������
			*/
			InitFood();
			//randFood[0] = rand() % MAX_WIDTH;
			//randFood[1] = rand() % MAX_HEIGHT;

			snake.len++;

			score += 10;
			//�жϷ����Ƿ����
		}
		
		//��������������
		for (int i = snake.len - 1; i > 0; i--)
		{
			snake.body[i].x = snake.body[i - 1].x;
			snake.body[i].y = snake.body[i - 1].y;
		}
		//������ͷ����
		snake.body[0].x += dx;
		snake.body[0].y += dy;

		//���̿���

		Sleep(500);
		system("cls");

	}
}
int main()
{
	////������ƴ�С
	//for (int i = 0; i < 20; i++)
	//{
	//	for (int j = 0; j < 50; j++)
	//		printf("*");
	//	printf("\n");
	//}
	srand((unsigned int)time(NULL));
	InitBody();
	InitFood();
	InitMap();
	////DrawUI();
	StartGame();
	system("cls");
	printf("��Ϸ����!\n������%d\n", score);
	
	//for (int i = 0; i < 21; i++)
	//{
	//	for (int j = 0; j < 51; j++)
	//		printf("%d", map[i][j]);
	//	printf("\n");
	//}

	return EXIT_SUCCESS;
}
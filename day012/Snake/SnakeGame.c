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
1、蛇的初始化
	身体长度
	身体坐标  x , y
	初始化第一节身体
2、初始化食物
	创建随机数
	将随机位置设置在屏幕中
3、游戏界面绘制
	地图绘制
	蛇身体
	食物
4、游戏程序流程控制
	边界判断
	障碍物判断
	食物判断
		食物消失，重新随机位置
		蛇身体长度增长
		更新蛇身体坐标
		分数增长
5、游戏结束
	打印分数
*/
//分数
int score;
//关卡
int level;
//食物坐标 [0]代表X坐标 [1]代表Y坐标
int randFood[2];
//坐标偏移量
int dx = 0;
int dy = 0;
//界面初始化
int map[21][51] = { 0 };
COORD coord;
typedef struct Position
{
	int x;
	int y;
}pos;

struct Snake
{
	//长度
	int len;
	//存储蛇身体的坐标
	pos body[MAX_WIDTH * MAX_HEIGHT];
}snake;

void InitBody()
{

	//初始化蛇的身体
	snake.len = 1;
	snake.body[0].x = MAX_WIDTH / 2;
	snake.body[0].y = MAX_HEIGHT / 2;

	//初始化分数和等级

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
//绘制游戏界面
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
		//设置控制台光标坐标位置
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
	//蛇头是否超出边界
	while (snake.body[0].x >= 0 && snake.body[0].x <= MAX_WIDTH && 
		snake.body[0].y >= 0 && snake.body[0].y <= MAX_HEIGHT)
	{
		//绘制界面
		DrawUI();
		//设置蛇的移动方向
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
			//判断蛇头和身体是否发生碰撞
			if (snake.body[0].x == snake.body[i].x  && snake.body[0].y == snake.body[i].y)
			{
				return;
			}
		}

		//食物和蛇头的碰撞
		if (randFood[0] == snake.body[0].x && randFood[1] == snake.body[0].y)
		{
			/*
			食物消失，重新随机位置
			蛇身体长度增长
			更新蛇身体坐标
			分数增长
			*/
			InitFood();
			//randFood[0] = rand() % MAX_WIDTH;
			//randFood[1] = rand() % MAX_HEIGHT;

			snake.len++;

			score += 10;
			//判断分数是否过关
		}
		
		//更新蛇身体坐标
		for (int i = snake.len - 1; i > 0; i--)
		{
			snake.body[i].x = snake.body[i - 1].x;
			snake.body[i].y = snake.body[i - 1].y;
		}
		//更新蛇头坐标
		snake.body[0].x += dx;
		snake.body[0].y += dy;

		//流程控制

		Sleep(500);
		system("cls");

	}
}
int main()
{
	////界面绘制大小
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
	printf("游戏结束!\n分数：%d\n", score);
	
	//for (int i = 0; i < 21; i++)
	//{
	//	for (int j = 0; j < 51; j++)
	//		printf("%d", map[i][j]);
	//	printf("\n");
	//}

	return EXIT_SUCCESS;
}
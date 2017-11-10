#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <Windows.h>

typedef struct Time
{
	int hour;
	int minute;
	int second;
}st;

int main()
{
	st s;
	s.hour = 0;
	s.minute = 59;
	s.second = 0;
	time(NULL);
	while (1)
	{
		//fflush(stdout);
		system("cls");
		printf("ʱ�䣺%02d:%02d:%02d\n", s.hour, s.minute, s.second);
		Sleep(975);
		s.second++;
		if (s.second == 60)
		{
			s.second = 0;
			s.minute++;
		}
		if (s.minute == 60)
		{
			s.minute = 0;
			s.hour++;
		}
		if (s.hour == 12)
		{
			s.hour = 0;
		}

	}
	
	return EXIT_SUCCESS;
}
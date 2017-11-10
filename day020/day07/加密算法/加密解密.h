#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
__declspec(dllexport) int Encrypt(char * FileName,char * NewFileName);
__declspec(dllexport) int Decode(char * FileName, char * NewFileName);

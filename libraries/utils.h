#pragma once

#include <stdbool.h>

#define STR_MAX_SIZE 1024
#define STR_MIN_SIZE 128

void hello(char name[STR_MIN_SIZE]);
void fgetsNoNewline(char input[STR_MAX_SIZE], char output[STR_MAX_SIZE]);
int strSplit(char input[STR_MAX_SIZE], char output[STR_MAX_SIZE][STR_MAX_SIZE], char delimiter[STR_MIN_SIZE]);
bool isPasswordTypedCorrectly(char password[STR_MIN_SIZE], char retypedPassword[STR_MIN_SIZE]);
void inputStrValueInit(char strField[STR_MAX_SIZE], char validatedStrField[STR_MAX_SIZE]);
bool dateChecker(int MM, int DD, int YYYY);
void currentDateGetterStr(char dateInStr[STR_MIN_SIZE]);
void currentDateGetterInt(char dateInStr[STR_MIN_SIZE], int *date);
int strMonthToInt(char month[STR_MAX_SIZE]);
void csvFormatter(char listOfString[STR_MIN_SIZE][STR_MIN_SIZE], char csvFormattedStr[STR_MAX_SIZE], int arrSize);

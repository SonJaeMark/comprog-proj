#pragma once

#include "libraries/utils.h"

typedef struct UserDetails{

    int id;
    char password[STR_MIN_SIZE];
    char firstName[STR_MIN_SIZE];
    char middleName[STR_MIN_SIZE];
    char lastName[STR_MIN_SIZE];
    int dateOfBirth[3]; // {month, date, year}
    char email[STR_MIN_SIZE];
    char homeAdd[STR_MIN_SIZE];
} UserDetails;

typedef struct Student{
    struct UserDetails userDetails;
    char gradeLevel[STR_MAX_SIZE];
    char section[STR_MAX_SIZE];
    // grades[0] = math, grades[1] = eng, grades[2] = sci, 
    // grades[3] = fil, grades[4] = history, grades[5] = p.e.
    float grades[6]; 
}Student;

typedef struct Teacher{
    struct UserDetails userDetails;
    char sections[STR_MAX_SIZE][5];
}Teacher;

int registerUser();
int login();
int logout();
#include <stdio.h>
#include <stdlib.h>
#include "libraries/utils.h" 
int registerUser(){
     
    char firstName[STR_MIN_SIZE];
    char middleName[STR_MIN_SIZE];
    char lastName[STR_MIN_SIZE];
    int dateOfBirth[3]; // {month, date, year}
    char email[STR_MIN_SIZE];
    char homeAdd[STR_MIN_SIZE];


    printf("Enter First Name:");
    scanf("%s", firstName);
    printf("Enter Middle Name:");
    scanf("%s", middleName);
    printf("Enter Last Name:");
    scanf("%s", lastName);
    printf("Enter Birthday:");
    scanf("%d %d %d", dateOfBirth[0], dateOfBirth[1], dateOfBirth[2]); 
    printf("Enter Email:");
    scanf("%s", email);
    printf("Enter Home Address:");
    scanf("%s", homeAdd);

    printf("%s %s %s\n", firstName, middleName, lastName);
    printf("%d/%d/%d\n", dateOfBirth[0], dateOfBirth[1], dateOfBirth[2]);
    printf("%s\n", email);
    printf("%s\n", homeAdd);
   
}




int login(){}
int logout(){}
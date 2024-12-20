#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#include "libraries/userlib/userlib.h"
#include "libraries/utils.h"

void saveToDb(char strData[STR_MAX_SIZE], bool isTeacher){

    FILE *file;
    char studentFilename[] = "db/student_csv_file.txt";
    char teacherFilename[] = "db/teacher_csv_file.txt";

    if(access(studentFilename, F_OK)!=0){
        file = fopen(studentFilename, "w");
        fprintf(file, "id,password,first_name,middle_name,last_name,date_of_birth,email,home_address,grade_level,section,grades");
        fclose(file);
    }
    goto skip; // not yet implemented
    if(access(teacherFilename, F_OK)!=0){
        file = fopen(teacherFilename, "w");
        fprintf(file, "id,password,first_name,middle_name,last_name,date_of_birth,email,home_address,sections");
        fclose(file);
    }
    skip:

    if(isTeacher){

    } else {
        file = fopen(studentFilename, "a");
        fprintf(file, strData);
        fclose(file);
    }

}

int saveStudentDetails(Student student){

    char studentDetails[STR_MIN_SIZE][STR_MIN_SIZE];
    char csvFormattedStr[STR_MAX_SIZE];

    sprintf(studentDetails[0], "S-%d", student.userDetails.id);
    strcpy(studentDetails[1], student.userDetails.password);
    strcpy(studentDetails[2], student.userDetails.firstName);
    strcpy(studentDetails[3], student.userDetails.middleName);
    strcpy(studentDetails[4], student.userDetails.lastName);

    // Converting integer to string using sprintf
    sprintf(studentDetails[5], "%d-%d-%d", student.userDetails.dateOfBirth[0], 
            student.userDetails.dateOfBirth[1],
            student.userDetails.dateOfBirth[2]);
    strcpy(studentDetails[6], student.userDetails.email);
    strcpy(studentDetails[7], student.userDetails.homeAdd);
    strcpy(studentDetails[8], student.gradeLevel);
    strcpy(studentDetails[9], student.section);
    sprintf(studentDetails[10], "{%.2f", student.grades[0]);
    sprintf(studentDetails[11], "%.2f", student.grades[1]);
    sprintf(studentDetails[12], "%.2f", student.grades[2]);
    sprintf(studentDetails[13], "%.2f", student.grades[3]);
    sprintf(studentDetails[14], "%.2f", student.grades[4]);
    sprintf(studentDetails[15], "%.2f}", student.grades[5]);

    csvFormatter(studentDetails, csvFormattedStr, 16);
    saveToDb(csvFormattedStr,false);
    
}
#pragma once

#include <stdlib.h>
#include <stdbool.h>

#include "libraries/userlib/userlib.h"
#include "libraries/utils.h"

int saveToDb(char *strData, bool isTeacher);
int saveStudentDetails(Student student);
void getUserPasswordById(char *id, char *passwordFromDb, bool isTeacher);


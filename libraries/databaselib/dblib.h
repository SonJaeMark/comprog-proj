#pragma once

#include <stdlib.h>
#include <stdbool.h>

#include "libraries/userlib/userlib.h"
#include "libraries/utils.h"

void saveToDb(char strData[STR_MAX_SIZE], bool isTeacher);
int saveStudentDetails(Student student);


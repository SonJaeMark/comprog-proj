#include <stdio.h>
#include "libraries/utils.h"

int main()
{
    char name[STR_MAX_SIZE];
    printf("Hello World\n");
    printf("Enter name: ");
    scanf("%s", name);
    hello(name);

    return 0;
}
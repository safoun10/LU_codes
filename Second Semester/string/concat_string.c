#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name_1[100] = "MD Sultan Mahmud ";
    char name_2[100] = "Safoun";
    strcat(name_1, name_2);
    printf("%s", name_1);
    return 0;
}
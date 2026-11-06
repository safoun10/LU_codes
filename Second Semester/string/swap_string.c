#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name_1[100], name_2[100], temp[100];
    scanf("%s %s", name_1, name_2);
    strcpy(temp, name_1);
    strcpy(name_1, name_2);
    strcpy(name_2, temp);
    printf("%s %s", name_1, name_2);
    return 0;
}
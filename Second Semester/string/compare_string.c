#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name_1[100] = "safoun";
    char name_2[100] = "showrov";
    strcmp(name_1, name_2) ? printf("not same") : printf("same");
    return 0;
}
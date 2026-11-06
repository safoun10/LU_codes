#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name[100], name2[100];
    scanf("%s", name);
    strcpy(name2, name);
    printf("%s", name2);
    return 0;
}
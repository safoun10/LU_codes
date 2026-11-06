#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name[100] = "safoun";
    int count = 0;
    while (name[count] != '\0')
        count++;
    printf("%d", count);

    return 0;
}
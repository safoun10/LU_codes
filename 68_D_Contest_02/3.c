#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    if (limit >= 90 && limit <= 100)
    {
        printf("A\n");
    }
    else if (limit >= 80 && limit <= 89)
    {
        printf("B\n");
    }
    else if (limit >= 70 && limit <= 79)
    {
        printf("C\n");
    }
    else if (limit >= 60 && limit <= 69)
    {
        printf("D\n");
    }
    else if (limit >= 0 && limit <= 59)
    {
        printf("D\n");
    }

    return 0;
}
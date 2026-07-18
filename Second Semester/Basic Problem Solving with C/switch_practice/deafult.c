#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    switch (limit)
    {
    default:
        printf("default\n");

    case 5:
        printf("5\n");
    case 6:
        printf("6\n");
    case 7:
        printf("7\n");
    case 8:
        printf("8\n");
    case 9:
        printf("9\n");
    case 10:
        printf("1\n");
    }
}
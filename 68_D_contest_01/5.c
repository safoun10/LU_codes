#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = limit - i; t >= 1; t--)
        {
            printf(" ");
        }
        for (int t = 1; t <= i; t++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
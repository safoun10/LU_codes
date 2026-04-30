#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i += 2)
    {
        for (int j = 0; j < (limit - i) / 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = limit - 2; i >= 1; i -= 2)
    {
        for (int j = 0; j < (limit - i) / 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, i, j;
    scanf("%d", &limit);

    for (i = 0; i < limit; i++)
    {
        for (j = 0; j < limit; j++)
        {
            int mid = limit / 2;
            int row = i - mid;
            int column = j - mid;

            row = abs(row);
            column = abs(column);

            row + column == mid ? printf("*") : printf(" ");
        }
        printf("\n");
    }

    return 0;
}

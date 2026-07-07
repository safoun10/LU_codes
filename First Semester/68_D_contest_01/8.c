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

            if (row < 0)
            {
                row = -row;
            }

            int column = j - mid;

            if (column < 0)
            {
                column = -column;
            }
            
            if (row + column == mid)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

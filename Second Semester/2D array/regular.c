#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int array_2d[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array_2d[i][j]);
            printf("%d ", array_2d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
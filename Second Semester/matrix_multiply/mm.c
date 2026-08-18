#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row = 2, column = 2;
    int array_2d1[row][column];
    int array_2d2[row][column];
    int result[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array_2d1[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array_2d2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < row; k++)
            {
                result[i][j] += array_2d1[i][k] * array_2d2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/**
 *
 *
 *
 * (00*00)+(01*10)     (00*01)+(01*11)
 * (10*00)+(11*10)     (10*01)+(11*11)
 *
 *
 *
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row, column, even = 0;
    scanf("%d %d", &row, &column);
    int array_2d[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array_2d[i][j]);
            if (array_2d[i][j] % 2 == 0)
            {
                even++;
            }
        }
    }
    printf("%d", even);
    return 0;
}
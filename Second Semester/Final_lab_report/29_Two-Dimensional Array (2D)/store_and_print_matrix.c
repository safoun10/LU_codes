#include <stdio.h>

int main()
{
    int matrix[2][3];
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            scanf("%d", &matrix[row][column]);
        }
    }
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }
    return 0;
}

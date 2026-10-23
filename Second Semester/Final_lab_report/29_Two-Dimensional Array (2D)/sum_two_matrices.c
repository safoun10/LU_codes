#include <stdio.h>

int main()
{
    int first_matrix[2][2];
    int second_matrix[2][2];
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            scanf("%d", &first_matrix[row][column]);
        }
    }
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            scanf("%d", &second_matrix[row][column]);
        }
    }
    printf("\n");
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("%d ", first_matrix[row][column] + second_matrix[row][column]);
        }
        printf("\n");
    }
    return 0;
}

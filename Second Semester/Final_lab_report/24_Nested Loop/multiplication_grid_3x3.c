#include <stdio.h>

int main()
{
    for (int row = 1; row <= 3; row++)
    {
        for (int column = 1; column <= 3; column++)
        {
            printf("%d ", row * column);
        }
        printf("\n");
    }
    return 0;
}

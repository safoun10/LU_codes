#include <stdio.h>

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

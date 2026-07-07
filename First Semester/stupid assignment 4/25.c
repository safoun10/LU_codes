#include <stdio.h>
int main()
{
    int i, j, x = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            x++;
            if (x % 2 == 0)
                printf("%d ", x);
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// Must show : Value of i, j, x Condition result Output step by step
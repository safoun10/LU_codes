#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = limit - i; t >= 1; t--)
        {
            printf(" ");
        }
        for (int t = 1; t <= (2 * i) - 1; t++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
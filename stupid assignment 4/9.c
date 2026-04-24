#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = limit; i >= 1; i--)
    {
        for (int t = 1; t <= limit - i; t++)
        {
            printf(" ");
        }
        for (int t = (2 * i) - 1; t >= 1; t--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
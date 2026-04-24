#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= limit - 2; i++)
    {
        for (int t = 1; t <= limit; t++)
        {
            (t == 1 || t == limit) ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= limit; i++)
    {
        printf("*");
    }

    return 0;
}
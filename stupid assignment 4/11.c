#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit - 1; i++)
    {
        for (int t = 1; t <= i; t++)
        {
            (t == 1 || t == i) ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= limit; i++)
    {
        printf("*");
    }

    return 0;
}
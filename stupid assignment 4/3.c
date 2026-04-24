#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = limit; i >= 1; i--)
    {
        for (int t = 1; t <= i; t++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
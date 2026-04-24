#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 1; t <= i; t++)
        {
            (t % 2 == 0) ? printf("E") : printf("O");
        }
        printf("\n");
    }

    return 0;
}
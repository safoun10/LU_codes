#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 1; t <= i; t++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
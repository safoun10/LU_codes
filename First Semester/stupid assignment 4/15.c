#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 1; t <= i; t++)
        {
            (i % 2 == 0)
                ? ((t % 2 == 0) ? printf("1") : printf("0"))
                : ((t % 2 == 0) ? printf("0") : printf("1"));
        }
        printf("\n");
    }

    return 0;
}
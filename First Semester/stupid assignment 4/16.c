#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 1; t <= i; t++)
        {
            (t % 3 == 0) ? printf("*") : printf("%d", t);
        }
        printf("\n");
    }

    return 0;
}
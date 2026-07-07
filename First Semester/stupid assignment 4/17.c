#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 0; t < i; t++)
        {
            printf("%c", ('A' + t));
        }
        printf("\n");
    }

    return 0;
}
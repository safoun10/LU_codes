#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            printf(" %d", i * j);
        }
        if (i != limit)
        {
            printf("\n");
        }
    }
    return 0;
}
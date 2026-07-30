#include <stdio.h>

int main()
{
    int i = 1, limit;
    scanf("%d", &limit);
    while (i <= limit)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
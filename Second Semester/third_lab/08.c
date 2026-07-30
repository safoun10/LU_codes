#include <stdio.h>

int main()
{
    int i = 1, limit, sum = 0;
    scanf("%d", &limit);
    while (i <= limit)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("%d", sum);

    return 0;
}
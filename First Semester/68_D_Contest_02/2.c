#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, sum = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}
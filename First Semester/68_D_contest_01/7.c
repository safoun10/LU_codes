#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, positive = 0, negative = 0, zero = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
        {
            zero++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else if (num > 0)
        {
            positive++;
        }
    }
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);

    return 0;
}
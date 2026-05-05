#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int left, right;
    scanf("%d %d", &left, &right);

    for (int i = left; i <= right; i++)
    {
        if (i < 2)
        {
            continue;
        }
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
            }
        }
        if (is_prime == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

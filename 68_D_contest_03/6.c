#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int left, right;
    scanf("%d %d", &left, &right);
    int prime_count = 0;

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
                break;
            }
        }

        if (is_prime == 1)
        {
            printf("%d\n", i);
            prime_count++;
        }
    }

    if (prime_count == 0)
    {
        printf("None\n");
    }

    return 0;
}

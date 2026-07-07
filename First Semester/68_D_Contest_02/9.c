#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int l, r, found = 0;

    if (scanf("%d %d", &l, &r) != 2)
    {
        return 0;
    }

    for (int n = l; n <= r; n++)
    {
        if (n < 2) // skipping 1!!!!!!
        {
            continue;
        }
        int sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            printf("%d\n", n);
            found++;
        }
    }

    if (found == 0)
    {
        printf("None\n");
    }

    return 0;
}

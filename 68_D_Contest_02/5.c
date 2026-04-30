#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, m;
    scanf("%d %d %d", &a, &b, &m);

    for (int k = a; k <= b; k++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("%d x %d = %d\n", k, i, (k * i));
        }

        if (k < b)
        {
            printf("\n");
        }
    }

    return 0;
}
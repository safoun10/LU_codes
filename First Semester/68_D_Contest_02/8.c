#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int j = 1; j <= m; j++)
    {
        printf("(1,%d) ", j);
    }

    for (int i = 2; i <= n; i++)
    {
        printf("(%d,%d) ", i, m);
    }

    if (n > 1)
    {
        for (int j = m - 1; j >= 1; j--)
        {
            printf("(%d,%d) ", n, j);
        }
    }

    if (m > 1)
    {
        for (int i = n - 1; i >= 2; i--)
        {
            printf("(%d,%d) ", i, 1);
        }
    }
    printf("\n");
    
    return 0;
}

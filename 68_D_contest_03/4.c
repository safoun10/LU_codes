#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, a, b, count = 0;
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

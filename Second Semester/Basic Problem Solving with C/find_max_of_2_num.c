#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        printf("%d is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }

    return 0;
}
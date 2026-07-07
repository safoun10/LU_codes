#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is positive", a);
    }
    else if (a < 0)
    {
        printf("%d is negative", a);
    }
    else
    {
        printf("%d is zero", a);
    }

    return 0;
}
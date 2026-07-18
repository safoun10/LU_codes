#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int a, b, c, max = 0;
    scanf("%d %d %d", &a, &b, &c);

    switch (a >= b)
    {
    case 1:
        max = a;
        break;

    default:
        max = b;
        break;
    }

    switch (c >= max)
    {
    case 1:
        max = c;
        break;
    }

    printf("%d is max", max);

    return 0;
}
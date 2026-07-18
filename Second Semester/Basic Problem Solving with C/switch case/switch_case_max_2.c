#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    switch (a >= b)
    {
    case 1:
        printf("%d is max", a);
        break;

    default:
        printf("%d is max", b);
        break;
    }

    return 0;
}
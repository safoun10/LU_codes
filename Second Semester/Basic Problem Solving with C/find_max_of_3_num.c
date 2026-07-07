#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    (a >= b) ? (max = a) : (max = b);
    (c >= max) ? printf("max = %d", c) : printf("max = %d", max);

    return 0;
}
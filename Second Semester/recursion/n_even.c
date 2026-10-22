#include <stdio.h>

int natural(int n, int a)
{
    if (n < a)
        return 0;
    if (a % 2 == 0)
        printf("%d ", a);
    return natural(n, a + 1);
}

int main()
{
    natural(10, 1);
    return 0;
}
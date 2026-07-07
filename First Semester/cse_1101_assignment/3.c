#include <stdio.h>

int main()
{
    int n;
    unsigned long long f = 1;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("error");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("%llu", f);
    return 0;
}
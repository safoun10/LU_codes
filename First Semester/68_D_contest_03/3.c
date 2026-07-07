#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    long long num;
    long long sum = 0;

    scanf("%lld", &num);
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%lld\n", sum);

    return 0;
}

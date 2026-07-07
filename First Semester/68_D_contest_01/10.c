#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    bool found = false;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            found = true;
        }
    }

    if (!found)
    {
        printf("No primes found\n");
    }

    return 0;
}
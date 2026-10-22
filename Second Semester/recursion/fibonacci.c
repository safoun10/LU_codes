#include <stdio.h>

int fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }

    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    printf("%d ", fibonacci(5));
    return 0;
}
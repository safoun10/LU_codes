#include <stdio.h>

int odd(int);
int even(int);

int main()
{
    int a;
    scanf("%d", &a);
    (a % 2 == 0) ? even(a) : odd(a);
    return 0;
}

int odd(int n)
{
    if (n == 1)
    {
        printf("2");
        return 0;
    }
    printf("%d ", n + 1);
    return even(n - 1);
}

int even(int n)
{
    if (n == 1)
        return 0;

    printf("%d ", n - 1);
    return odd(n - 1);
}
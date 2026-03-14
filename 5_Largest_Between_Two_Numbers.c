#include <stdio.h>

int main()
{
    int a, b, larger;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        larger = a;
    }
    else
    {
        larger = b;
    }
    printf("The larger number is: %d", larger);

    return 0;
}
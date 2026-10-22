#include <stdio.h>

int factorial(int number)
{
    return number <= 1 ? 1 : number * factorial(number - 1);
}

int main()
{
    int number;
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("%d\n", factorial(number));
    }
    return 0;
}

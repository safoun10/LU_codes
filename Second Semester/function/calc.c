#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int calc()
{
    printf("choose 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("choose your option: ");
    int c;
    scanf("%d", &c);

    if (c == 5)
    {
        return 0;
    }
    else if (c == 1)
    {
        printf("result = %d\n\n", a + b);
    }
    else if (c == 2)
    {
        printf("result = %d\n\n", a - b);
    }
    else if (c == 3)
    {
        printf("result = %d\n\n", a * b);
    }
    else if (c == 4)
    {
        printf("result = %d\n\n", a / b);
    }
    else
    {
        return 0;
    }
    return 1;
}

int main()
{
    while (calc())
    {
        calc();
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int numerator, denominator;
    scanf("%d %d", &numerator, &denominator);
    // Dividing by zero causes a runtime error, so check the denominator first.
    if (denominator != 0)
    {
        printf("%d\n", numerator / denominator);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }
    return 0;
}

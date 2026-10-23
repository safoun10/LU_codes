#include <stdio.h>

int main()
{
    int numerator, denominator;
    scanf("%d %d", &numerator, &denominator);
    // Dividing by zero causes a runtime error, so check the denominator first.
    (denominator != 0)
        ? printf("%d\n", numerator / denominator)
        : printf("Cannot divide by zero.\n");
    return 0;
}

#include <stdio.h>

int addition();

int main()
{
    int result = addition();
    printf("%d", result);
    return 0;
}

int addition()
{
    int a = 5, b = 3;
    return a + b;
} 
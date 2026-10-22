#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main()
{
    int number;
    scanf("%d", &number);
    printf("%d\n", square(number));
    return 0;
}

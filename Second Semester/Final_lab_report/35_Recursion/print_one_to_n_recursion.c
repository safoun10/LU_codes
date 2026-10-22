#include <stdio.h>

void print_numbers(int number)
{
    if (number > 0)
    {
        print_numbers(number - 1);
        printf("%d\n", number);
    }
}

int main()
{
    int limit;
    scanf("%d", &limit);
    print_numbers(limit);
    return 0;
}

#include <stdio.h>

int main()
{
    int number = 10;
    int *number_pointer = &number;
    *number_pointer = 25;
    printf("%d\n", number);
    return 0;
}

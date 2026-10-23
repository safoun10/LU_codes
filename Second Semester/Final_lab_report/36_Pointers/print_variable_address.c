#include <stdio.h>

int main()
{
    int number = 10;
    int *number_pointer = &number;
    printf("%p\n", number_pointer);
    return 0;
}

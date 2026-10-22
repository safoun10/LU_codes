#include <stdio.h>

void swap_numbers(int *first_number, int *second_number)
{
    int temporary_number = *first_number;
    *first_number = *second_number;
    *second_number = temporary_number;
}

int main()
{
    int first_number = 5;
    int second_number = 10;
    swap_numbers(&first_number, &second_number);
    printf("%d %d\n", first_number, second_number);
    return 0;
}

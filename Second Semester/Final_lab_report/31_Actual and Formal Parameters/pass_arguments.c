#include <stdio.h>

void display_numbers(int first_number, int second_number)
{
    printf("%d %d\n", first_number, second_number);
}

int main()
{
    int first_number, second_number;
    scanf("%d %d", &first_number, &second_number);
    display_numbers(first_number, second_number);
    return 0;
}

#include <stdio.h>

void change_number(int number)
{
    number = 100;
    printf("Inside function: %d\n", number);
}

int main()
{
    int actual_number = 10;
    change_number(actual_number);
    printf("In main: %d\n", actual_number);
    return 0;
}

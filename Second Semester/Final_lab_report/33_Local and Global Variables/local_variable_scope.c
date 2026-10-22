#include <stdio.h>

void display_local_number()
{
    int number = 5;
    printf("Function local number: %d\n", number);
}

int main()
{
    int number = 10;
    display_local_number();
    printf("Main local number: %d\n", number);
    return 0;
}

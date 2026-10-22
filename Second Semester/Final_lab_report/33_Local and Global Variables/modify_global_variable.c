#include <stdio.h>

int number = 10;

void change_number()
{
    number = 20;
}

int main()
{
    printf("%d\n", number);
    change_number();
    printf("%d\n", number);
    return 0;
}

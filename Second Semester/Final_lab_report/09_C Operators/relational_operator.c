#include <stdio.h>

int main()
{
    int first_number, second_number;
    scanf("%d %d", &first_number, &second_number);

    (first_number >= second_number)
        ? printf("The first number is greater or equal than the second number.\n")
        : printf("The second number is greater than the first number.\n");
    return 0;
}

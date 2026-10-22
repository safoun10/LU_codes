#include <stdio.h>

int main()
{
    int first_number, second_number;
    scanf("%d %d", &first_number, &second_number);
    if (first_number > second_number)
    {
        printf("The first number is greater than the second number.\n");
    }
    else
    {
        printf("The first number is not greater than the second number.\n");
    }
    return 0;
}

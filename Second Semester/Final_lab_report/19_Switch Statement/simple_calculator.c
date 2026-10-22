#include <stdio.h>

int main()
{
    double first_number, second_number;
    char operation;
    scanf("%lf %c %lf", &first_number, &operation, &second_number);
    switch (operation)
    {
        case '+':
            printf("%g\n", first_number + second_number);
            break;
        case '-':
            printf("%g\n", first_number - second_number);
            break;
        case '*':
            printf("%g\n", first_number * second_number);
            break;
        case '/':
            if (second_number != 0)
            {
                printf("%g\n", first_number / second_number);
            }
            else
            {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}

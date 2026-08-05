#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
here:
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");

    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Result : %d\n", a + b);
        break;

    case 2:
        printf("Result : %d\n", a - b);
        break;

    case 3:
        printf("Result : %d\n", a * b);
        break;

    case 4:
        printf("Result : %d\n", a / b);
        break;

    case 5:
        return 0;

    default:
        printf("wrong choice\n");
        return 0;
    }

    getchar();
    printf("Do you want to continue? (y/n): ");
    char again;
    scanf("%c", &again);

    if (again == 'y' || again == 'Y')
    {
        goto here;
    }
    else if (again == 'n' || again == 'N')
    {
        return 0;
    }
    else
    {
        printf("wrong choice\n");
        return 0;
    }

    return 0;
}
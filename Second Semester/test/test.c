#include <stdio.h>

int main()
{

again:

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Result: %d\n", a + b);
        break;

    case 2:
        printf("Result: %d\n", a - b);
        break;

    case 3:
        printf("Result: %d\n", a * b);
        break;

    case 4:
        printf("Result: %d\n", a / b);
        break;

    case 5:
        return 0;

    default:
        printf("choose the right one \n");
        return 0;
    }

    getchar();
    char c;
    printf("Do you want to continue? (Y/N):");
    scanf("%c", &c);

    if (c == 'y')
    {
        goto again;
    }
    else if (c == 'n')
    {
        return 0;
    }
    else
    {
        return 0;
    }

    return 0;
}
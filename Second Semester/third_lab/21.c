#include <stdio.h>

int main()
{

again:

    printf("\n\n");
    printf("1. Addition\n");
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
        printf("\nThank you for using my calculator!\n\n");
        return 0;

    default:
        printf("wrong operator choice\n");
        return 0;
    }

    getchar();
    char c;
    printf("Do you want to continue? (y/n): ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        goto again;
    }
    else if (c == 'n' || c == 'N')
    {
        printf("\nThank you for using my calculator!\n\n");
        return 0;
    }
    else
    {
        printf("wrong choice, try y or n\n");
        return 0;
    }

    return 0;
}
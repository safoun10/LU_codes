/*
1. addition
2. subtraction
3. multiply
4. divide
5. do exit

Enter your choice:

Enter two numbers: _ _
Result: _
Do you want to continue? y/n
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
again:

    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiply\n");
    printf("4. divide\n\n");

    int choice;
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    int a, b;
    printf("Enter two numbers: \n");
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
        printf("wrong choice\n");
        return 0;
    }

    char c;
    printf("Do you want to continue? (y/n): ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        goto again;
    }
    else if (c == 'n' || c == 'N')
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
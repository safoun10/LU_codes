#include <stdio.h>

int main()
{
    int number;
    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
    } while (number != 0);
    return 0;
}

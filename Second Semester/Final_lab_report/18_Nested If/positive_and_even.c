#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number > 0)
    {
        if (number % 2 == 0)
        {
            printf("Positive and even\n");
        }
        else
        {
            printf("Positive but odd\n");
        }
    }
    else
    {
        printf("Not positive\n");
    }
    return 0;
}

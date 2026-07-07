#include <stdio.h>

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is Even\n", i);
        }
        else
        {
            printf("%d is Odd\n", i);
        }
    }

    return 0;
}
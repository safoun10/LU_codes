#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int mid = N / 2 + 1;

    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--)
    {
        for (int j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
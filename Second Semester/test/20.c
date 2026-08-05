#include <stdio.h>

int main()
{
    // int n;
    // scanf("%d", &n);

    for (int i = 5; i >= 1; i--) // iteration = 5 , 4, 3 , 2, 1
    {
        for (int j = 1; j <= i; j++) //  4, 3, 2, 1
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        int n = 1;
        
        for (int j = 0; j < limit - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", n);
            n = n * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}

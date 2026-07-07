#include <stdio.h>

int main()
{
    int limit, num = 1;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 1; t <= i; t++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
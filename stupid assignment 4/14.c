#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        int num = limit;
        for (int t = 1; t <= i; t++)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
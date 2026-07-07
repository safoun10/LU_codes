#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    char letter = 'A' + limit - 1;
    for (int i = 1; i <= limit; i++)
    {
        for (int t = 0; t < i; t++)
        {
            printf("%c", (letter - t));
        }
        printf("\n");
    }

    return 0;
}
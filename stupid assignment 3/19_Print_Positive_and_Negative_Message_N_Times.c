#include <stdio.h>

int main()
{
    int limit, largest = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        int num;
        scanf("%d", &num);
        if (num >= 0)
        {
            printf("Positive\n");
        }
        else
        {
            printf("Negative\n");
        }
    }

    return 0;
}
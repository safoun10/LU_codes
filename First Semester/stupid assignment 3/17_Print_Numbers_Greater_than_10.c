#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > 10)
        {
            printf("Greater than 10\n");
        }
        else
        {
            printf("10 or less\n");
        }
    }

    return 0;
}
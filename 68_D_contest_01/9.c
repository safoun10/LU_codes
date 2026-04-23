#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("BuzzWhiz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Buzz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Whiz\n");
        }
        else if (i % 7 == 0)
        {
            printf("Pop\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
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
        for (int j = 1; j <= limit; j++)
        {
            int a = i;
            int b = j;
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}

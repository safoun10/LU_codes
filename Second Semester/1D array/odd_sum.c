#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, sum = 0;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 != 0)
        {
            sum += array[i];
        }
    }
    printf("%d", sum);
    return 0;
}
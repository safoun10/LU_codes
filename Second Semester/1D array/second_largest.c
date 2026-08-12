#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, max = 0, second_max = 0;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (max < array[i])
        {
            second_max = max;
            max = array[i];
        }
        else if (second_max < array[i] && array[i] != max)
        {
            second_max = array[i];
        }
    }
    printf("%d", second_max);
    return 0;
}

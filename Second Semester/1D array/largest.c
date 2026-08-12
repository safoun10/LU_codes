#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, max = 0;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (max <= array[i])
        {
            max = array[i];
        }
    }
    printf("%d", max);
    return 0;
}
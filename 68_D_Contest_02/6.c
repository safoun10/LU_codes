#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int limit;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < limit / 2; i++)
    {
        int t = array[i];
        array[i] = array[limit - 1 - i];
        array[limit - 1 - i] = t;
    }

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

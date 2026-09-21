#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    int array[limit];
    int max = -1, smax = -1;

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            smax = max;
            max = array[i];
        }
        else if (array[i] > smax && array[i] != max)
        {
            smax = array[i];
        }
    }

    printf("%d", smax);
    return 0;
}
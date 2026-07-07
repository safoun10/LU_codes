#include <stdio.h>

int main()
{
    int array[10];
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i < 10; i++)
    {
        array[i] = array[i - 2] + array[i - 1];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
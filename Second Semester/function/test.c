#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int func_arr(int arr[])
{
    arr[0] = 9;
    arr[5] = 9;
}

int main()
{
    int limit;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    func_arr(array);
    for (int i = 0; i <= limit; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
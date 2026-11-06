#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name[] = "safoun";
    char arr[] = {'s', 'a', 'f', 'o', 'u', 'n'};
    char arr2[] = {"safoun"};

    printf("%d\n", strlen(name));
    printf("%d\n", sizeof(arr));
    printf("%d", sizeof(arr2));
    return 0;
}
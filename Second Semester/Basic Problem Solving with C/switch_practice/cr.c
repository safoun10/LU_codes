#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a = 1;
    switch (a)
    {
    case 1:
        printf("enters case 1");
        break;

    case 0:
        printf("enters case ");
        break;

    default:
        printf("it shouldn't come here");
        break;
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 1:
        printf("even");
        break;

    case 0:
        printf("odd");
        break;
    }
    return 0;
}
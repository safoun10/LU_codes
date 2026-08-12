#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a = 4;
    {
        int a = 5;
        printf("%p ", &a);
    }
    printf("%p", &a);
    return 0;
}
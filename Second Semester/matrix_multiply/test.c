#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char p[2][2][2];
    printf("%p\n", &p[2]);
    printf("%p\n", &p[2][2]);
    printf("%p", &p[2][2][2]);
    return 0;
}
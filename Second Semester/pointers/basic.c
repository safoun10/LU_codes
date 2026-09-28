#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char a = 'a';
    char *p = &a;
    printf("%d", p);
    return 0;
}
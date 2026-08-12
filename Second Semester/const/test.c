#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

static int mark = 10;
// int mark = 10;

int add(int a)
{
    static int c = 5;
    c++;
    return c;
}
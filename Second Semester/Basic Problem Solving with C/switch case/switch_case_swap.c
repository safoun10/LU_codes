#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char c;
    scanf("%c", &c);

    switch (c >= 'a' && c <= 'z')
    {
    case 1:
        printf("%c", c - 32);
        break;

    case 0:
        printf("%c", c + 32);
        break;
    }
    return 0;
}
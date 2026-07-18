#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char c;
    scanf("%c", &c);
    switch ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
    case 1:
    {
        switch (c >= 'a' && c <= 'z')
        {
        case 1:
            printf("is lowercase alpha");
            break;

        case 0:
            printf("is uppercase alpha");
            break;
        }
        break;
    }

    case 0:
        printf("not an alpha");
        break;
    }
    return 0;
}
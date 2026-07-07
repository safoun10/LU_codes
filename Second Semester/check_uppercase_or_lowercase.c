#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);

    int ascii = alpha;
    if (ascii >= 65 && ascii <= 90)
    {
        printf("%c is uppercase", alpha);
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("%c is lowercase", alpha);
    }
    else
    {
        printf("not alphabet");
    }

    return 0;
}
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

    if ((alpha == 'a') || (alpha == 'e') || (alpha == 'i') || (alpha == 'o') || (alpha == 'u') || (alpha == 'A') || (alpha == 'E') || (alpha == 'I') || (alpha == 'O') || (alpha == 'U'))
    {

        printf("%c is Vowel", alpha);
    }
    else
    {
        printf("either consonant or not a part of alphabet");
    }

    return 0;
}
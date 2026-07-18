#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);

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
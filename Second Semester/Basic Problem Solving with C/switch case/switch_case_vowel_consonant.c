#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char c;
    scanf("%c", &c);

    // switch (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    // {
    // case 1:
    //     printf("IS VAWOOL");
    //     break;

    // case 0:
    //     printf("is consonenting");
    //     break;
    // }

    switch (c)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel");
        break;

    default:
        printf("consonant");
        break;
    }

    return 0;
}
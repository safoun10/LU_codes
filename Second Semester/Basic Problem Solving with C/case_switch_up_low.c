#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);

    int ascii = alpha;
    if (ascii >= 65 && ascii <= 90)
    {
        printf("is uppercase\n");
        printf("lowercase would be = %c\n", ascii + 32);
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("is lowercase\n");
        printf("lowercase would be = %c\n", ascii - 32);
    }
    else
    {
        printf("not alphabet");
    }

    return 0;
}
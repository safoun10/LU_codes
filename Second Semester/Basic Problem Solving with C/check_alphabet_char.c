#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);

    int ascii = alpha;
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
    {
        printf("%c is alphabet", alpha);
    }
    else
    {
        printf("not alphabet");
    }

    return 0;
}
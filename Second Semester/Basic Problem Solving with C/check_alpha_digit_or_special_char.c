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
    else if ((ascii >= 33 && ascii <= 47))
    {
        printf("%c is special character", alpha);
    }
    else if ((ascii >= 48 && ascii <= 57))
    {
        printf("%c is digit", alpha);
    }
    else
    {
        printf("not eligible");
    }

    return 0;
}
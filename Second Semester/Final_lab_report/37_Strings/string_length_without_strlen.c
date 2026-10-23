#include <stdio.h>

int main()
{
    char text[100];
    int length = 0;
    scanf("%s", &text);
    while (text[length] != '\0')
    {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}

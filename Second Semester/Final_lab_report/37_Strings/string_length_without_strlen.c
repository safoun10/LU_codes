#include <stdio.h>

int main()
{
    char text[100];
    int size, length = 0;
    printf("Enter the number of characters (1-99): ");
    scanf("%d", &size);
    if (size < 1 || size > 99)
    {
        printf("Invalid size.\n");
        return 0;
    }
    printf("Enter the text one character at a time:\n");
    for (int index = 0; index < size; index++)
    {
        scanf(" %c", &text[index]);
        length++;
    }
    text[size] = '\0';
    printf("%d\n", length);
    return 0;
}

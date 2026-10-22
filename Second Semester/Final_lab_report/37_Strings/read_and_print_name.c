#include <stdio.h>

int main()
{
    char name[100];
    int size;
    printf("Enter the number of characters in your name (1-99): ");
    scanf("%d", &size);
    if (size < 1 || size > 99)
    {
        printf("Invalid size.\n");
        return 0;
    }
    printf("Enter your name one character at a time:\n");
    for (int index = 0; index < size; index++)
    {
        scanf(" %c", &name[index]);
    }
    name[size] = '\0';
    printf("%s\n", name);
    return 0;
}

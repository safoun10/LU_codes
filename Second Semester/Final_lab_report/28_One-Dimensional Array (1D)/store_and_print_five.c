#include <stdio.h>

int main()
{
    int numbers[5];
    for (int index = 0; index < 5; index++)
    {
        scanf("%d", &numbers[index]);
    }
    for (int index = 0; index < 5; index++)
    {
        printf("%d ", numbers[index]);
    }
    printf("\n");
    return 0;
}

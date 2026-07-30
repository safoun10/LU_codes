#include <stdio.h>

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        if (i == 4) break;
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i <= 4; i++)
    {
        if (i == 3) continue;
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i <= 4; i++)
    {
        if (i == 4) break;
        printf("%d ", i);
    }
    printf("\n");

    goto here;
here:
    printf("\nJumped to exit!");

    return 0;
}
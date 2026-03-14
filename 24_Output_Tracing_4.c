#include <stdio.h>
int main()
{
    int i;
    for (i = 5; i >= 1; i--)
    {
        if (i > 3)
            printf("%d ", i);
        else
            printf("A ");
    }
    return 0;
}
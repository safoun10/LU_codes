#include <stdio.h>
int main()
{
    int i, x = 2;
    for (i = 1; i <= 4; i++)
    {
        x = x + i;
        if (x % 2 == 0)
            printf("%d ", x);
        else
            printf("# ");
    }
    return 0;
}
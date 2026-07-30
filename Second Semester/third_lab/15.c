#include <stdio.h>

int main()
{
    int i = 1;
here:
    printf("%d\n", i);
    i++;
    if (i <= 5)
    {
        goto here;
    }

    return 0;
}
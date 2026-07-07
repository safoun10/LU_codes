#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, val, even = 0, odd = 0;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &val);
        (val % 2 == 0) ? even++ : odd++;
    }

    printf("%d\n%d\n", even, odd);
    return 0;
}

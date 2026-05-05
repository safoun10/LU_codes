#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, target, val, count = 0;
    scanf("%d %d", &limit, &target);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &val);
        if (val == target)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

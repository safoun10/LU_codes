#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, val;
    int max_1 = 0, max_2 = 0;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &val);
        if (val > max_1)
        {
            max_2 = max_1;
            max_1 = val;
        }
        else if (val > max_2 && val != max_1)
        {
            max_2 = val;
        }
    }

    printf("%d\n", max_2);
    return 0;
}

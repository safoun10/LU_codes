#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    int limit;
    scanf("%d", &limit);

    int largest = -10001;
    int second_largest = -10001;

    for (int i = 0; i < limit; i++)
    {
        int num;
        scanf("%d", &num);

        if (num > largest)
        {
            second_largest = largest;
            largest = num;
        }
        else if (num > second_largest && num < largest)
        {
            second_largest = num;
        }
    }

    if (second_largest == -10001)
    {
        printf("No second largest\n");
    }
    else
    {
        printf("%d\n", second_largest);
    }

    return 0;
}

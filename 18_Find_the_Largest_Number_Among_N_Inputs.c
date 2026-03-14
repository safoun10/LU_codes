#include <stdio.h>

int main()
{
    int limit, largest = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > largest)
        {
            largest = num;
        }
    }
    printf("%d", largest);

    return 0;
}
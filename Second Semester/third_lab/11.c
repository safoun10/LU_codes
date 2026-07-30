#include <stdio.h>

int main()
{
    int i = 1, limit, sum = 0;
    scanf("%d", &limit);
    do
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    } while (i <= limit);
    printf("%d", sum);

    return 0;
}
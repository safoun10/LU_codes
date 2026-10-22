#include <stdio.h>

int main()
{
    for (int number = 1; number <= 10; number++)
    {
        if (number % 2 != 0)
        {
            continue;
        }
        printf("%d\n", number);
    }
    return 0;
}

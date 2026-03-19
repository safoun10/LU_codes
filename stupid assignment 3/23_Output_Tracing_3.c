#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 4; i++)
    {
        sum = sum + i;
        printf("%d ", sum);
    }

    return 0;
}

/*

Simulation:

- initializing int i and sum = 0

i = 1 | i <= 4 (true) | i = 2 | sum = 0
sum = 0 + 1 -> printf -> 1
i = 2 | i <= 4 (true) | i = 3 | sum = 1
sum = 1 + 2 -> printf -> 3
i = 3 | i <= 4 (true) | i = 4 | sum = 3
sum = 3 + 3 -> printf -> 6
i = 4 | i <= 4 (true) | i = 5 | sum = 6
sum = 6 + 4 -> printf -> 10
i = 5 | i <= 4 (false)

- for loop stops

*/
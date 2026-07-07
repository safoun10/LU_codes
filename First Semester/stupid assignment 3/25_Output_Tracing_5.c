#include <stdio.h>
int main()
{
    int i, x = 2;
    for (i = 1; i <= 4; i++)
    {
        x = x + i;
        if (x % 2 == 0)
        {
            printf("%d ", x);
        }
        else
        {
            printf("# ");
        }
    }
    return 0;
}

/*

Simulation:

- initializing int i and x = 2

i = 1 | i <= 4 (true) | i = 2 | x = 2
x = 2 + 1 -> 3 % 2 == 0 (false)
printf -> #

i = 2 | i <= 4 (true) | i = 3 | x = 3
x = 3 + 2 -> 5 % 2 == 0 (false)
printf -> #

i = 3 | i <= 4 (true) | i = 4 | x = 5
x = 5 + 3 -> 8 % 2 == 0 (true)
printf -> 8

i = 4 | i <= 4 (true) | i = 5 | x = 8
x = 8 + 4 -> 12 % 2 == 0 (true)
printf -> 12

i = 5 | i <= 4 (false)

- for loop stops

*/
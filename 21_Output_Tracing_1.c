#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

/*

Simulation:

- initializing int i

i = 1 | i <= 5 (true) | i = 2
printf -> 1
i = 2 | i <= 5 (true) | i = 3
printf -> 2
i = 3 | i <= 5 (true) | i = 4
printf -> 3
i = 4 | i <= 5 (true) | i = 5
printf -> 4
i = 5 | i <= 5 (true) | i = 6
printf -> 5
i = 6 | i <= 5 (false) |

- for loop stop

*/
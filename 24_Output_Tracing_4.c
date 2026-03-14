#include <stdio.h>
int main()
{
    int i;
    for (i = 5; i >= 1; i--)
    {
        if (i > 3)
        {
            printf("%d ", i);
        }
        else
        {
            printf("A ");
        }
    }

    return 0;
}

/*

Simulation:

- initializing int i

i = 5 | i >= 1 (true) | i = 4
5 > 3 (true) -> printf -> 5
i = 4 | i >= 1 (true) | i = 3
4 > 3 (true) -> printf -> 4
i = 3 | i >= 1 (true) | i = 2
3 > 3 (false) -> printf -> A
i = 2 | i >= 1 (true) | i = 1
2 > 3 (false) -> printf -> A
i = 1 | i >= 1 (true) | i = 0
1 > 3 (false) -> printf -> A
i = 0 | i >= 1 (false) |

- for loop stops

*/
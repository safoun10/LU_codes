#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        else
        {
            printf("* ");
        }
    }
    
    return 0;
}

/*

Simulation:

- initializing int i

i = 1 | i <= 5 (true) | i = 2
1 % 2 == 0 (false) -> printf -> *
i = 2 | i <= 5 (true) | i = 3
2 % 2 == 0 (true) -> printf -> 2
i = 3 | i <= 5 (true) | i = 4
3 % 2 == 0 (false) -> printf -> *
i = 4 | i <= 5 (true) | i = 5
4 % 2 == 0 (true) -> printf -> 4
i = 5 | i <= 5 (true) | i = 6
5 % 2 == 0 (false) -> printf -> *
i = 6 | i <= 5 (false) |

- for loop stops

*/
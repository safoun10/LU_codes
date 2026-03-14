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



- for loop stop

*/
#include <stdio.h>

int main()
{
    int turn = 0;
again:
    int i = 0;
    turn++;

    for (i = 0; i <= 4; i++)
    {
        if (turn != 2 && i == 4)
        {
            break;
        }

        if (turn == 2 && i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");

    if (turn < 3)
    {
        goto again;
    }
    else
    {
        printf("\nJumped to exit!");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int count = 0;
    for (;;)
    {
        printf("Running\n");
        count++;
        if (count == 5)
        {
            break;
        }
    }
    return 0;
}

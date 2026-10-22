#include <stdio.h>

int main()
{
    int number = 1;
    while (1)
    {
        printf("%d\n", number);
        if (number == 5)
        {
            break;
        }
        number++;
    }
    return 0;
}

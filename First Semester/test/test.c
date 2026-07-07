#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int count = 0;
    for (int temp = number; temp > 0; temp /= 10)
    {
        int digit = temp % 10;
        if (digit != 0 && digit % 3 == 0)
        {
            count++;
        }
    }
    printf("Count: %d\n", count);
    return 0;
}

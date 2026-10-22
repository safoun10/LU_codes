#include <stdio.h>

int main()
{
    int numbers[5];
    int sum = 0;
    for (int index = 0; index < 5; index++)
    {
        scanf("%d", &numbers[index]);
        sum += numbers[index];
    }
    printf("%d\n", sum);
    return 0;
}

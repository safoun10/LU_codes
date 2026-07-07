#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter the num: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }
    printf("There are %d even numbers", count);

    return 0;
}
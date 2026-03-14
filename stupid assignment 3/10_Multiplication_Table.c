#include <stdio.h>

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        int calc = num * i;
        printf("%d * %d = %d\n", num, i, calc);
    }

    return 0;
}
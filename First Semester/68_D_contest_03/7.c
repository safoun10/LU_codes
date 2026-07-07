#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d", &num);
    int a[20] = {1};

    for (int i = 0; i <= num; i++)
    {
        for (int j = i; j > 0; j--)
        {
            a[j] += a[j - 1];
        }
    }

    for (int j = 0; j <= num; j++)
    {
        printf("%d%s", a[j], j == num ? "" : " ");
    }
    printf("\n");

    return 0;
}

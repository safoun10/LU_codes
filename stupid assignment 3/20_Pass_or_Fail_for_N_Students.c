#include <stdio.h>

int main()
{
    int limit, largest = 0, pass = 0, fail = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        int num;
        scanf("%d", &num);
        if (num >= 40)
        {
            printf("Pass\n");
            pass++;
        }
        else
        {
            printf("Fail\n");
            fail++;
        }
    }
    printf("Total pass : %d, Total fail: %d", pass, fail);

    return 0;
}
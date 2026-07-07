#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    (num % 2 == 0) ? printf("even\n") : printf("odd\n");
    return 0;
}
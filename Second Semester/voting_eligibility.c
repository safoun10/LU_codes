#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    (age >= 18) ? printf("Eligible\n") : printf("NOT Eligible\n");
    return 0;
}
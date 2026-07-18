#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int age;
    scanf("%d", &age);

    switch (age >= 18)
    {
    case 1:
        printf("eligible to vote");
        break;

    case 0:
        printf("not eligible");
        break;
    }
    return 0;
}
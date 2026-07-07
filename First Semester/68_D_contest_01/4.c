#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 80)
    {
        printf("A\n");
    }
    else if (num >= 70 && num <= 79)
    {
        printf("B\n");
    }
    else if (num >= 60 && num <= 69)
    {
        printf("C\n");
    }
    else if (num >= 50 && num <= 59)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    
    

    return 0;
}
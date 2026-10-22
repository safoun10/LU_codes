#include <stdio.h>

int main()
{
    int age;
    char citizen;
    scanf("%d %c", &age, &citizen);
    if (age >= 18)
    {
        if (citizen == 'Y' || citizen == 'y')
        {
            printf("Eligible to vote\n");
        }
        else
        {
            printf("Not eligible to vote\n");
        }
    }
    else
    {
        printf("Not eligible to vote\n");
    }
    return 0;
}

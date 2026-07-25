// 0182610012101136

#include <stdio.h>

int main()
{
    int income;
    double gpa;
    printf("Enter CGPA: ");
    scanf("%lf", &gpa);

    printf("Enter Family Income(BDT): ");
    scanf("%d", &income);

    if ((income <= 250000) && (gpa >= 3.95))
    {
        printf("Congratulations!\n");
        printf("You are eligible for a 100%% Scholarship.\n");
    }
    else if ((income <= 250000) && (gpa >= 3.85))
    {
        printf("Congratulations!\n");
        printf("You are eligible for a 50%% Scholarship.\n");
    }
    else
    {
        printf("You are not eligible for a Scholarship.\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 40)
    {
        printf("You Passed the Exam");
    }
    else
    {
        printf("You Failed the Exam");
    }

    return 0;
}
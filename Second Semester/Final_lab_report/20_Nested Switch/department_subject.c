#include <stdio.h>

int main()
{
    int department, subject;
    scanf("%d %d", &department, &subject);
    switch (department)
    {
    case 1:
        switch (subject)
        {
        case 1:
            printf("Computer Science\n");
            break;
        case 2:
            printf("Mathematics\n");
            break;
        default:
            printf("Invalid subject\n");
        }
        break;
    case 2:
        switch (subject)
        {
        case 1:
            printf("Physics\n");
            break;
        case 2:
            printf("Chemistry\n");
            break;
        default:
            printf("Invalid subject\n");
        }
        break;
    default:
        printf("Invalid department\n");
    }
    return 0;
}

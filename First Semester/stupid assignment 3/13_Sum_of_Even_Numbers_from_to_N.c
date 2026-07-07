// #include <stdio.h>

// int main()
// {
//     int num, sum = 0;
//     printf("Enter the num: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("Sum of even numbers = %d", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the num: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of even numbers = %d", sum);

    return 0;
}
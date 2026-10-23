#include <stdio.h>

int main()
{
    int category, item;
    scanf("%d %d", &category, &item);
    switch (category)
    {
    case 1:
        switch (item)
        {
        case 1:
            printf("Burger\n");
            break;
        case 2:
            printf("Pizza\n");
            break;
        default:
            printf("Invalid food item\n");
        }
        break;
    case 2:
        switch (item)
        {
        case 1:
            printf("Tea\n");
            break;
        case 2:
            printf("Coffee\n");
            break;
        default:
            printf("Invalid food item\n");
        }
        break;
    default:
        printf("Invalid category\n");
    }
    return 0;
}

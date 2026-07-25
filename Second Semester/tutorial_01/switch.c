// 0182610012101136

#include <stdio.h>

int main()
{
    printf("\n=========Restaurant Menu=========\n");
    printf("1. Fast Food\n");
    printf("2. Drinks\n");
    printf("3. dessert\n");
    printf("Enter Food Category: ");
    int category;
    scanf("%d", &category);
    printf("\n");

    switch (category)
    {

    case 1:
        printf("---Fast Food---\n");
        printf("1. Burger (250 tk)\n");
        printf("2. Pizza (600 tk)\n");
        printf("3. Sandwich (180 tk)\n");
        printf("Choose an item: ");
        int item_1;
        scanf("%d", &item_1);
        printf("\n");

        switch (item_1)
        {
        case 1:
            printf("Selected Item: Burger\n");
            printf("Price: 250 tk\n");
            break;
        case 2:
            printf("Selected Item: Pizza\n");
            printf("Price: 600 tk\n");
            break;
        case 3:
            printf("Selected Item: Sandwich\n");
            printf("Price: 180 tk\n");
            break;

        default:
            printf("invalid! Start Again!\n");
            break;
        }
        break;

    case 2:
        printf("---Drinks---\n");
        printf("1. Coffee (120 tk)\n");
        printf("2. Juice (150 tk)\n");
        printf("3. Tea (50 tk)\n");
        printf("Choose an item: ");
        int item_2;
        scanf("%d", &item_2);
        printf("\n");

        switch (item_2)
        {
        case 1:
            printf("Selected Item: Coffee\n");
            printf("Price: 120 tk\n");
            break;
        case 2:
            printf("Selected Item: Juice\n");
            printf("Price: 150 tk\n");
            break;
        case 3:
            printf("Selected Item: Tea\n");
            printf("Price: 50 tk\n");
            break;

        default:
            printf("invalid! Start Again!\n");
            break;
        }
        break;

    case 3:
        printf("---Dessert---\n");
        printf("1. Chocolate Cake (220 tk)\n");
        printf("2. Vanilla Cake (320 tk)\n");
        printf("3. Ice Cream (200 tk)\n");
        printf("Choose an item: ");
        int item_3;
        scanf("%d", &item_3);
        printf("\n");

        switch (item_3)
        {
        case 1:
            printf("Selected Item: Chocolate Cake\n");
            printf("Price: 220 tk\n");
            break;
        case 2:
            printf("Selected Item: Vanilla Cake\n");
            printf("Price: 320 tk\n");
            break;
        case 3:
            printf("Selected Item: Ice Cream\n");
            printf("Price: 200 tk\n");
            break;

        default:
            printf("invalid! Start Again!\n");
            break;
        }
        break;

    default:
        printf("invalid! Start Again!\n");
        break;
    }
    return 0;
}
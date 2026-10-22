#include <stdio.h>

struct book_details
{
    char title[100];
    float price;
};

int main()
{
    struct book_details book;
    int title_size;
    printf("Enter the number of characters in the book title (1-99): ");
    scanf("%d", &title_size);
    if (title_size < 1 || title_size > 99)
    {
        printf("Invalid size.\n");
        return 0;
    }
    printf("Enter the title one character at a time:\n");
    for (int index = 0; index < title_size; index++)
    {
        scanf(" %c", &book.title[index]);
    }
    book.title[title_size] = '\0';
    printf("Enter the book price: ");
    scanf("%f", &book.price);
    printf("%s %.2f\n", book.title, book.price);
    return 0;
}

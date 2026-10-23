#include <stdio.h>

struct book_details
{
    char title[100];
    float price;
};

int main()
{
    struct book_details book;
    printf("Enter book name and price (separated by a space): ");
    scanf("%s %f", book.title, &book.price);
    printf("Book: %s | Price: %.2f\n", book.title, book.price);

    return 0;
}

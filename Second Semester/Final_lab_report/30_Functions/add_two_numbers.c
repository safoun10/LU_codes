#include <stdio.h>

int add(int first_number, int second_number)
{
    return first_number + second_number;
}

int main()
{
    int first_number, second_number;
    scanf("%d %d", &first_number, &second_number);
    printf("%d\n", add(first_number, second_number));
    return 0;
}

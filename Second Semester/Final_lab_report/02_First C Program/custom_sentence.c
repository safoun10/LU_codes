#include <stdio.h>

int main()
{
    char name[50];
    int age;
    scanf("%49s %d", name, &age);
    printf("My name is %s and I am %d years old.\n", name, age);
    return 0;
}

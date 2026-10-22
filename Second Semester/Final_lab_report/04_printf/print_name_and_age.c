#include <stdio.h>

int main()
{
    char name[50];
    int age;
    scanf("%49s %d", name, &age);
    printf("%s\n%d\n", name, age);
    return 0;
}

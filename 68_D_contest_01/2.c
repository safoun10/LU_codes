#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name[51];
    int id;

    scanf("%s %d", &name, &id);
    printf("--- Student ID Card ---\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    return 0;
}
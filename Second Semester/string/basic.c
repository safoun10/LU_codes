#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    getchar();
    char array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%c", &array[i]);
    }
    printf("%d", strlen(array));
    return 0;
}
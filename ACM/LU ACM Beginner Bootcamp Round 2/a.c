#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int count;
    scanf("%d", &count);
    int size = (2 * count) - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int dist = min(min(i, j), min(size - 1 - i, size - 1 - j));
            printf("%d ", count - dist);
        }
        printf("\n");
    }

    return 0;
}
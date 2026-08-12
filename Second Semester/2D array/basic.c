#include <stdio.h>
#define endl "\n"

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr2d[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2d[i][j]);
            printf("%d ", arr2d[i][j]);
        }
        printf(endl);
    }
    return 0;
}
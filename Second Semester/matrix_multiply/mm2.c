#include <stdio.h>

int main()
{
    int rA, cA, rB, cB;
    scanf("%d %d %d %d", &rA, &cA, &rB, &cB);

    int arr_a[rA][cA];
    int arr_b[rB][cB];
    int arr_ans[rA][cB];

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            scanf("%d", &arr_a[i][j]);
        }
    }

    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            scanf("%d", &arr_b[i][j]);
        }
    }

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            arr_ans[i][j] = 0;
            for (int k = 0; k < rB; k++)
            {
                arr_ans[i][j] += arr_a[i][k] * arr_b[k][j];
            }
            printf("%d ", arr_ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;

    for (int t = 0; t < limit; t++)
    {
        int count;
        cin >> count;

        int grid[count][count];
        int num = 1;

        for (int d = 0; d <= 2 * count - 2; d++)
        {
            for (int i = 0; i < count; i++)
            {
                int j = d - i;
                if (j >= 0 && j < count)
                {
                    grid[i][j] = num++;
                }
            }
        }

        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
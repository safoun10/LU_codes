#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int row = 0;
    int col = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int val;
            cin >> val;

            if (val == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    int moves = abs(row - 3) + abs(col - 3);

    cout << moves << endl;

    return 0;
}
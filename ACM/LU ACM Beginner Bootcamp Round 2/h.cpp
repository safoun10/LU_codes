#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;

    for (int t = 1; t <= limit; t++)
    {
        int count;
        cin >> count;

        for (int i = 1; i <= count; i++)
        {
            for (int j = count - i; j > 0; j--)
            {
                cout << " ";
            }
            if (i == 1 || i == count)
            {
                for (int j = 1; j <= (2 * i) - 1; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int j = 1; j <= (2 * i) - 1; j++)
                {
                    cout << ((j == 1 || j == (2 * i) - 1) ? "*" : " ");
                }
            }
            cout << endl;
        }
    }
    return 0;
}
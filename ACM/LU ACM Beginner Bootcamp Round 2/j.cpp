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

        for (int i = 1; i <= count; i++)
        {
            for (int j = 1; j <= count; j++)
            {
                cout << ((j % 2 == 0) ? "x" : ".");
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
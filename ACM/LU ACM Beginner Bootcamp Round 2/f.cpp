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
        for (int i = limit - 1; i >= t; i--)
        {
            cout << " ";
        }
        for (int i = t; i <= (2 * t) - 1; i++)
        {
            cout << i;
        }
        for (int i = (t - 1) * 2; i >= t; i--)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;
    int last = limit;
    for (int t = 1; t <= limit; t++)
    {
        for (int i = limit - t; i > 0; i--)
        {
            cout << " ";
        }
        for (int i = 1; i <= (2 * t) - 1; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int t = 1; t <= limit; t++)
    {
        for (int i = 0; i < t - 1; i++)
        {
            cout << " ";
        }

        for (int i = (2 * last) - 1; i >= 1; i--)
        {
            cout << "*";
        }
        last--;
        cout << endl;
    }

    return 0;
}
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
        int count, alpha = 0;
        cin >> count;

        for (int i = 1; i <= count; i++)
        {
            for (int j = count - 1; j >= i; j--)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << (char)('A' + alpha);
                alpha = (alpha + 1) % 26;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
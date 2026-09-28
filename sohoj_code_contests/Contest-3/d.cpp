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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool possible = false;

        for (int i = 0; i < 4; i++)
        {
            if (a < b && c < d && a < c && b < d)
            {
                possible = true;
                break;
            }

            int temp = a;
            a = c;
            c = d;
            d = b;
            b = temp;
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
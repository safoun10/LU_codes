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
        double h, c, s;
        cin >> h >> c >> s;

        bool c1 = h > 50;
        bool c2 = c < 0.7;
        bool c3 = s > 5600;

        if (c1 && c2 && c3)
            cout << 10 << endl;
        else if (c1 && c2)
            cout << 9 << endl;
        else if (c2 && c3)
            cout << 8 << endl;
        else if (c1 && c3)
            cout << 7 << endl;
        else if (c1 || c2 || c3)
            cout << 6 << endl;
        else
            cout << 5 << endl;
    }
}
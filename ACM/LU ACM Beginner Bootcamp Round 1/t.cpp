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
        int a, total = 0;
        cin >> a;
        if (a >= 2048)
        {
            total += a / 2048;
            a %= 2048;
        }

        while (a > 0)
        {
            total += a & 1;
            a >>= 1;
        }

        cout << total << endl;
    }
    return 0;
}
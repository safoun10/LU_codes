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
        int a, b;
        cin >> a >> b;

        double total = a * b;
        cout << fixed << setprecision(6);
        if (a >= 1000)
        {
            total -= (total * .1);
        }
        cout << total << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int currency[6] = {100, 50, 10, 5, 2, 1};

    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, notes = 0;
        cin >> a;
        for (int i = 0; i < 6; i++)
        {
            notes += a / currency[i];
            a %= currency[i];
        }
        cout << notes << endl;
    }
    return 0;
}
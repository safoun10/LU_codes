#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;
    limit = (limit * 2) - 1;
    for (int t = 1; t <= limit; t++)
    {
        for (int i = 1; i <= limit; i++)
        {
            cout << ((t == i) || (t + i == limit + 1) ? " " : "*");
        }
        cout << endl;
    }
    return 0;
}
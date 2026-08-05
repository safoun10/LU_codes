#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit, even = 0, odd = 0;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a;
        cin >> a;
        (a % 2 == 0) ? even++ : odd++;
    }
    cout << ((even > odd) ? "READY FOR BATTLE" : "NOT READY") << endl;

    return 0;
}
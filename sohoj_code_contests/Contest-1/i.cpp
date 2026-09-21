#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, f;
    cin >> x >> y >> f;

    int cost1 = 12 * x;
    int cost2 = (12 * y) + f;

    cout << min(cost1, cost2) << endl;

    return 0;
}

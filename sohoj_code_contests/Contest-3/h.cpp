#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long k, n, w;
    cin >> k >> n >> w;

    long long total_cost = k * w * (w + 1) / 2;
    long long borrow = total_cost - n;

    if (borrow < 0)
    {
        borrow = 0;
    }

    cout << borrow << endl;

    return 0;
}
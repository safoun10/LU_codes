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
        int n;
        cin >> n;

        long long total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            total_sum += a;
        }
        long long root = round(sqrt(total_sum));

        cout << ((root * root == total_sum) ? "YES" : "NO") << endl;
    }
    return 0;
}

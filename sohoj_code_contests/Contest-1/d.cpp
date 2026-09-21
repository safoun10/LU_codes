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
        long long n, k, s;
        cin >> n >> k >> s;

        long long base_sum = n * n;
        long long total_extra_value = s - base_sum;
        long long extra_appear = k - 1;

        long long ans = total_extra_value / extra_appear;
        cout << ans << endl;
    }
    return 0;
}

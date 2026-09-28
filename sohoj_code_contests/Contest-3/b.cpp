#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long current_sum = 0;
    // long long max_sum = 0;
    long long max_sum = -1000000000000000000;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        current_sum += x;
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }

        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }

    cout << max_sum << endl;

    return 0;
}
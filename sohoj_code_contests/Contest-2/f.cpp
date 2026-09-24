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
        int counts[n + 1] = {0}, result = -1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            counts[val]++;
            if (counts[val] == 3)
            {
                result = val;
            }
        }
        cout << result << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, max_lead = 0, winner = 0;

    for (int i = 0; i < n; i++)
    {
        int s, t;
        cin >> s >> t;

        sum1 += s;
        sum2 += t;

        int lead = abs(sum1 - sum2);
        if (lead > max_lead)
        {
            max_lead = lead;
            winner = (sum1 > sum2) ? 1 : 2;
        }
    }
    cout << winner << " " << max_lead << endl;

    return 0;
}

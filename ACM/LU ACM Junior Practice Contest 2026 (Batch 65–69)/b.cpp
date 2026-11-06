#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit, count = 0;
    cin >> limit;

    for (int t = 0; t < limit; t++)
    {
        int a;
        cin >> a;
        if (a >= 80)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
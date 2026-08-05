#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long limit, target, times = 0;
    cin >> limit >> target;
    for (long long t = 0; t < limit; t++)
    {
        long long a;
        cin >> a;
        if (a % target == 0)
        {
            times++;
        }
    }

    cout << times << endl;
    return 0;
}
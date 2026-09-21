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
        int a, sum = 0;
        cin >> a;
        while (a != 0)
        {
            sum += a % 10;
            a /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}
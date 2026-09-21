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
        int a;
        cin >> a;

        int rev = 0;
        while (a != 0)
        {
            rev = rev * 10 + (a % 10);
            a /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}
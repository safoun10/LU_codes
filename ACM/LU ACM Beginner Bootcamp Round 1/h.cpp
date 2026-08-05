#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            cout << 1 << endl;
            continue;
            ;
        }

        long long fact = 1;
        while (a > 0)
        {
            fact *= a;
            a--;
        }
        cout << fact << endl;
    }
    return 0;
}
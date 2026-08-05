#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, sum = 0;
        cin >> a;
        while (a > 0)
        {
            sum += a % 10;
            a /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // cout << ((a > b) != (a > c) ? a : ((b > a) != (b > c) ? b : c)) << endl;

        if ((a >= b) && (a >= c))
        {
            if (b >= c)
            {
                cout << b << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else if ((b >= a) && (b >= c))
        {
            if (a >= c)
            {
                cout << a << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else
        {
            if (a >= b)
            {
                cout << a << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
    }
    return 0;
}
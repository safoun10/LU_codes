#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, num = 0;
        cin >> a;
        while (a > 0)
        {
            num = (num * 10) + (a % 10);
            a /= 10;
        }
        cout << num << endl;
    }
    return 0;
}
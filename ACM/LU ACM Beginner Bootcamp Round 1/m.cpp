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
        cout << (((a + b + c) == 180) ? "YES" : "NO") << endl;
    }
    return 0;
}
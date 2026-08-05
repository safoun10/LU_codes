#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        long long a, b;
        cin >> a >> b;
        cout << max(a, b) << " " << a + b << endl;
    }
    return 0;
}
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
        cout << floor(sqrt(a)) << endl;
    }
    return 0;
}
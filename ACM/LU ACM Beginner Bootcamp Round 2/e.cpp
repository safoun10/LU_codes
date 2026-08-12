#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;
    int bar = 1;

    for (int t = limit; t >= 1; t--)
    {
        for (int i = bar; i <= limit; i++)
        {
            cout << (char)('A' + i - 1);
        }
        bar++;
        cout << endl;
    }
    return 0;
}
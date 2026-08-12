#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit, count = 1;
    cin >> limit;
    for (int t = limit; t > 0; t--)
    {
        for (int i = t - 1; i > 0; i--)
        {
            cout << " ";
        }

        for (int i = 1; i <= count; i++)
        {
            cout << "#";
        }
        count++;
        cout << endl;
    }

    return 0;
}
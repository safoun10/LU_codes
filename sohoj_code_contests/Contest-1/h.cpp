#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if ((a + b) % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (a - b) / 2 << endl;
    }
    return 0;
}

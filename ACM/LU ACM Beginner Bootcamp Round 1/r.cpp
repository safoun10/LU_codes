#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double target, balance;
    cin >> target >> balance;

    cout << fixed << setprecision(2);
    if (((target + 0.50) > balance) || (fmod(target, 5.0) != 0))
    {
        cout << balance << endl;
    }
    else
    {
        cout << balance - target - 0.50 << endl;
    }

    return 0;
}
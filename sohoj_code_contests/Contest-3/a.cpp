#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;

    long long moves = 0;
    long long prev;
    cin >> prev;

    for (int i = 1; i < limit; i++)
    {
        long long current;
        cin >> current;

        if (current < prev)
        {
            moves += (prev - current);
        }
        else
        {
            prev = current;
        }
    }

    cout << moves << endl;

    return 0;
}
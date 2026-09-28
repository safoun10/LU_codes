#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool is_hard = false;
    for (int i = 0; i < n; i++)
    {
        int opinion;
        cin >> opinion;
        if (opinion == 1)
        {
            is_hard = true;
        }
    }

    if (is_hard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}
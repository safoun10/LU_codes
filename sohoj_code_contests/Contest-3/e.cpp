#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;

    for (int t = 0; t < limit; t++)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // while (true)
        // {
        //     if (a.empty() || a.front() != 0)
        //     {
        //         break;
        //     }
        //     a.erase(a.begin());

        //     if (a.empty() || a.back() != 0)
        //     {
        //         break;
        //     }
        //     a.pop_back();
        // }

        while (true)
        {
            if (a.empty() || a.front() != 0)
            {
                break;
            }
            a.erase(a.begin());
        }

        while (true)
        {
            if (a.empty() || a.back() != 0)
            {
                break;
            }
            a.pop_back();
        }

        if (a.empty())
        {
            cout << 0 << endl;
        }
        else if (count(a.begin(), a.end(), 0) == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
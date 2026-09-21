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

        int m, n;
        cin >> m >> n;

        for (int i = m; i <= n; i++)
        {

            if (i < 2)
                continue;

            bool is_prime = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime == true)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}

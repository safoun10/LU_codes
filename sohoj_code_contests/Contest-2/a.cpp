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
        int a, odd = 0;
        cin >> a;
        int array[a];
        for (int i = 0; i < a; i++)
        {
            cin >> array[i];
            if (array[i] % 2 != 0)
            {
                odd++;
            }
        }
        cout << odd << endl;
    }
    return 0;
}
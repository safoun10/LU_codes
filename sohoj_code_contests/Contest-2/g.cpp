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

        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        sort(array, array + n);
        array[0]++;

        long long max_product = 1;
        for (int i = 0; i < n; i++)
        {
            max_product *= array[i];
        }

        cout << max_product << endl;
    }
    return 0;
}

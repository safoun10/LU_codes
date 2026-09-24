#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;

    int array[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    /**
     * offset by 1
     * q-p
     * swap -> p+1 r+1
     * 3-1
     */

    for (int i = 0; i <= q - p; i++)
    {
        swap(array[p + i], array[r + i]);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

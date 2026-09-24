#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = n - k; i < n; i++)
    {
        cout << array[i] << " ";
    }

    for (int i = 0; i < n - k; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}

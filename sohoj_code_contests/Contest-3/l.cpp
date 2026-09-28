#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << array[i];
        if (i > 0)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
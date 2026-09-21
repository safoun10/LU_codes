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

        int arr[100];
        arr[0] = n;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int total = n + 1;
        sort(arr, arr + total);

        if (arr[total - 1] == n && arr[total - 2] != n)
        {
            cout << arr[total - 2] << endl;
        }
        else
        {
            cout << arr[total - 1] << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;
    int arr[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + limit);

    for (int i = 0; i < limit; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
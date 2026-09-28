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

    sort(array, array + n);

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[i - 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
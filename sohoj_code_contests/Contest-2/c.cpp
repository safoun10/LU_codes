#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long d;
    cin >> n >> d;

    long long array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    long long result = -1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] - array[i - 1] <= d)
        {
            result = array[i];
            break;
        }
    }
    cout << result << endl;

    return 0;
}

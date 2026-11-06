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
        int count;
        cin >> count;

        int array[count];
        for (int i = 0; i < count; i++)
        {
            cin >> array[i];
        }
        sort(array, array + count);
        cout << array[count - 1] - array[0] << endl;
    }
    return 0;
}
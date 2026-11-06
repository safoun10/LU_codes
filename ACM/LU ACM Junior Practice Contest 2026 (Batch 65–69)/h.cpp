#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;

    int array[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }
    sort(array, array + 3);
    if (limit - array[0] >= 10)
    {
        cout << "Yes :-D" << endl;
    }
    else
    {
        cout << "No :-(" << endl;
    }

    return 0;
}
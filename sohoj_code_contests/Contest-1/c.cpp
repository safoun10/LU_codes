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
        int a;
        cin >> a;

        int res[1000] = {1};
        int size = 1;

        for (int i = 2; i <= a; i++)
        {
            int carry = 0;
            for (int k = 0; k < size; k++)
            {
                int product = res[k] * i + carry;
                res[k] = product % 10;
                carry = product / 10;
            }
            while (carry != 0)
            {
                res[size] = carry % 10;
                carry /= 10;
                size++;
            }
        }

        for (int i = size - 1; i >= 0; i--)
        {
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}

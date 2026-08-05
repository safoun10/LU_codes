#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int reversed_num(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int last = num % 10;
        rev = (rev * 10) + last;
        num /= 10;
    }
    return rev;
}

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
        int rev = reversed_num(a);
        cout << ((a == rev) ? "wins" : "loses") << endl;
    }
    return 0;
}
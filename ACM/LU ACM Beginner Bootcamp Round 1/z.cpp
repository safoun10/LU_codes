#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    string result = to_string(a - b);
    (result[0] == '1') ? result[0] = '2' : result[0] = '1';
    cout << result << endl;
    return 0;
}
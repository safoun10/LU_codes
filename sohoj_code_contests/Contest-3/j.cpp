#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        int a, b;
        char op;
        cin >> a >> op >> b;

        if (op == '?')
        {
            break;
        }

        if (op == '+')
        {
            cout << a + b << endl;
        }
        else if (op == '-')
        {
            cout << a - b << endl;
        }
        else if (op == '*')
        {
            cout << a * b << endl;
        }
        else if (op == '/')
        {
            cout << a / b << endl;
        }
    }

    return 0;
}
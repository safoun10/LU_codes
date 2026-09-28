#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        int h, w;
        cin >> h >> w;

        if (h == 0 && w == 0)
        {
            break;
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << (((i + j) % 2 == 0) ? '#' : '.');
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
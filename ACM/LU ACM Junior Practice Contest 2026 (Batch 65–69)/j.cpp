#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int notes[6] = {1, 5, 10, 50, 100, 500};
    int count[6] = {0};
    int money;
    cin >> money;
    while (money > 0)
    {
        for (int i = 5; i >= 0; i--)
        {
            if (money >= notes[i])
            {
                count[i]++;
                money -= notes[i];
                break;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (count[i] != 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                cout << notes[i] << " ";
            }
        }
    }

    return 0;
}
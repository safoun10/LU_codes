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
        char a;
        cin >> a;

        if ((a == 'B') || (a == 'b'))
        {
            cout << "BattleShip" << endl;
        }
        else if ((a == 'C') || (a == 'c'))
        {
            cout << "Cruiser" << endl;
        }
        else if ((a == 'D') || (a == 'd'))
        {
            cout << "Destroyer" << endl;
        }
        else if ((a == 'F') || (a == 'f'))
        {
            cout << "Frigate" << endl;
        }
    }
    return 0;
}
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
        double sum = 0;
        cin >> count;

        for (int i = 0; i < count; i++)
        {
            double num;
            cin >> num;
            sum += num;
        }
        cout << "Case " << t + 1 << ": " << fixed << setprecision(3) << sum / (double)count << endl;
    }
    return 0;
}
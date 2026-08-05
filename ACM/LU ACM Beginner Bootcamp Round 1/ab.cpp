#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

bool judge(double first, double second, double third, int range)
{
    int count = 0;
    if (first <= range)
        count++;
    if (second <= range)
        count++;
    if (third <= range)
        count++;

    return (count >= 2) ? true : false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int range;
        cin >> range;

        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double first = distance(x1, y1, x2, y2);
        double second = distance(x2, y2, x3, y3);
        double third = distance(x1, y1, x3, y3);

        cout << (judge(first, second, third, range) ? "yes" : "no") << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (y < x)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}

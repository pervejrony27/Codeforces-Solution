#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
         int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        bool f = false;
        for (int i = 1; i <= n; i++)
        {
            if (arr[arr[i]] == i)
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            cout << 2 << endl;
        } else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k = 1, q = 0;
    string s;
    cin >> k;
    cin >> q;
    vector<int> v(k);
    for(int i=0; i<k; i++){
    cin >> v[i];
    }
    while (q--)
    {
        int n;
        cin >> n;
        cout << min(n, v[0] - 1) << " ";
    }
    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

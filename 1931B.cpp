//// Md.Pervej Ahmed Rony
/// Department of CSE.
// BAIUST

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define cin1(x) cin >> x
#define cin2(x,y) cin >> x >> y
#define cin3(x, y, z) cin >> x >> y >> z
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(d,min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(d,max(a,max(b,c))
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void solve() {
    int n;
    cin >> n;
    lli sum = 0;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    lli cur = 0;
    sum =sum/ n;

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= sum)
        {
            cur += arr[i] - sum;
        } else if (arr[i] + cur >= sum)
        {
            cur -= (sum - arr[i]);
        } else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

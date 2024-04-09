#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
    int t;
    cin >> t;
    while (t--) {
        lli n, k, i;
        cin >> n >> k;
        vector<int> arr(n);
        for ( i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if(k%2 == 0)
        {
        lli minu = k / 2;
        for (i = 0; i < n; i++) {
            if (minu >= arr[i]) {
                minu -= arr[i];
                arr[i] = 0;
            } else {
                arr[i] -= minu;
                minu = 0;
            }
        }

        reverse(arr.begin(), arr.end());

        minu = k / 2;
        for ( i = 0; i < n; i++) {
            if (minu >= arr[i]) {
                minu -= arr[i];
                arr[i] = 0;
            } else {
                arr[i] -= minu;
                minu = 0;
            }
        }

        lli count = 0;
        for ( i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                count++;
            }
        }

        lli ans = min(count, n);
        cout << ans << endl;
        }
        else
        {
            lli minu = k / 2+1;
        for (i = 0; i < n; i++) {
            if (minu >= arr[i]) {
                minu -= arr[i];
                arr[i] = 0;
            } else {
                arr[i] -= minu;
                minu = 0;
            }
        }

        reverse(arr.begin(), arr.end());

        minu = k / 2;
        for ( i = 0; i < n; i++) {
            if (minu >= arr[i]) {
                minu -= arr[i];
                arr[i] = 0;
            } else {
                arr[i] -= minu;
                minu = 0;
            }
        }

        lli count = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                count++;
            }
        }

        lli ans = min(count, n);
        cout << ans << endl;
        }
    }

    return 0;
}

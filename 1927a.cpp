#include <bits/stdc++.h>

typedef long long int lli;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int left_black = -1;
        int right_black = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                left_black = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'B') {
                right_black = i;
                break;
            }
        }

        int min_length = right_black - left_black + 1;

        cout << min_length << endl;
    }

    return 0;
}

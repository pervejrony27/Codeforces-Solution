#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
    int t;
    cin >> t;
    while (t--) {
        lli n, m,k ;
        cin >> n >> m >> k;
        if(m==1)
        {
            cout << "NO" << endl;
        }
        else
        {
          lli dc = (n+(m-1))/(m);
          dc = n-dc;
            if(k>=dc)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}

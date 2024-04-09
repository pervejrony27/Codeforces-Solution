#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;
        int one = 0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1')one++;
        }
        if(one%2 != 0)
        {
            cout << "NO" << endl;
        }
        else if(one == 2 && (str.find("11") != string::npos))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}



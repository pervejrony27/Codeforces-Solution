#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        lli ans = 0;
        lli x = 0;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '0' && x>0)
            {
                ans += x+1;
            }
             else if(str[i] == '0')
            {
                continue;
            }
            else
            {
                x++;
            }
        }
        cout << ans << endl;


    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve()
{
       int n;
       cin >> n;
       string s;
       vector<int>ans;
        for(int i=0; i<n ; i++)
        {
           cin >> s;
           int c = 0;
           for(int j=0; j<n; j++)
           {
               if(s[j] == '1')
               {
                   c++;
               }
           }
           if(c!=0)
           {
               ans.push_back(c);
           }
        }
        if(ans[0] != ans[1])
        {
            cout << "TRIANGLE" << endl;
        }
        else
        {
            cout << "SQUARE" << endl;
        }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       solve();
   }
    return 0;
}


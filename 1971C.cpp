#include <bits/stdc++.h>

typedef long long int lli;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool yes11 = true;
        bool yes22 = true;

        for (int i = min(c,d); i <= max(c,d); i++)
        {
           if (i == a){
              yes11 = false;
            }
           else if(i==b){
               yes22 = false;
           }
       }
       if(yes11 == false && yes22 == true)
       {
           cout << "YES" << endl;
       }
       else if(yes11 == true && yes22 == false)
       {
           cout << "YES" << endl;
       }
       else
       {
           cout << "NO" << endl;
       }
    }
    return 0;
}

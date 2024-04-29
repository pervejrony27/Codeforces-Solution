#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

const int N = 2e5+1;

int rem(int x)
{
    int res = 0;
    while(x>0)
    {
        res = res+x%10;
        x/=10;
    }
    return res;
}

void solve()
{

}

int main()
{
   int t;
   cin >> t;

   vector<lli>f(N);
   for(int i=1; i<N; i++)
   {
       f[i] = f[i-1]+rem(i);
   }
   while(t--)
   {
       int n;
       cin >> n;
       cout << f[n] << endl;
   }
    return 0;
}











 

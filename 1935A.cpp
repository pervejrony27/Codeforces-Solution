#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    int n;
    
    string s;
    cin >> n >> s;
    
    string ans = s, rev = s;
    reverse(rev.begin(), rev.end());
    
    ans = min(ans, rev + s);
    
    cout << ans << '\n';
  }  
  
  return 0;
  
}

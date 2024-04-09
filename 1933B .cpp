#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
    int t;
    cin >> t;

    while (t--)
    {
      int n;
      cin >> n;
      vector<lli>arr(n);
      lli sum = 0;
      for(lli i=0; i<n; i++)
      {
          cin >> arr[i];
          sum += arr[i];
      }

      if(sum%3 == 0)
      {
          cout << 0 << endl;
      }
      else
      {
          lli c = sum+1;
          if(c%3 == 0)
          {
              cout << 1 << endl;
          }
          else
          {
              bool rem = true;
              for(int i=0; i<n; i++)
              {
                  if(arr[i]%3 == 1)
                  {
                      rem = false;
                      break;
                  }
              }
              if(rem == false)
              {
                  cout << 1 << endl;
              }
              else
              {
                  cout << 2 << endl;
              }
          }
      }
    }

    return 0;
}

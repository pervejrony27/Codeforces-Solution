#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       int arr[n];
       int one = 0;
       for(int i=0; i<n; i++)
       {
           cin >> arr[i];
           if(arr[i] == 1)
           {
               one++;
           }
       }
       int l;
       for(int i=0; i<n; i++)
       {
           if(arr[i] == 1)
           {
               l=i;
               break;
           }
       }
       int r;
       for(int i=n-1; i>=0; i--)
       {
           if(arr[i] == 1)
           {
               r=i;
               break;
           }
       }
       cout << r-l- one+1 << endl;;
    }
    return 0;
}

#include <bits/stdc++.h>
#include<iostream>
typedef long long int lli;
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], brr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> brr[i];
        }
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            if(brr[i] < arr[i])
            {
                 lli ci = arr[i];
                 arr[i] = brr[i];

                ans++;

                for (int j=i+1; j<n; j++)
                {
                    lli di = arr[j];
                    arr[j] = ci;
                    ci = di;

                }
            }
        }
       cout << ans << endl;

    }

    return 0;
}

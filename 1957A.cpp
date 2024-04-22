#include <bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main()
{
    lli f;
    cin >> f;
    while(f--)
    {
        lli n, i;
        cin >> n;

        vector<lli>arr(n);

        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        lli poli = 0;

        for(i=0; i<n; i++){
            if(i+2 < n)
            {
                if(arr[i]==arr[i+1] && arr[i+1] == arr[i+2])
                {
                    poli++;
                    i = i+2;
                }
            }
            else
            {
                break;
            }
        }
        cout << poli <<endl;

    }

    return 0;
}

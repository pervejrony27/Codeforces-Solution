#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        bool found = false; 
        for(int i = 0; i < str.size() - 1; i++)
        {
            if(str[i] == 'i' && str[i+1] == 't')
            {
                found = true;
                break; 
            }
        }

        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

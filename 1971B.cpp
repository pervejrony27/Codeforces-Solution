#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;
        string str = s;

        int len = s.size();
        if(len == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool equalc = true;

        for (int i = 0; i < s.size()-1; i++)
        {
            if (s[i] == s[i +1])
            {
                continue;
            }
            else
            {
                equalc = false;
                break;
            }
        }

        if (equalc == false)
        {
            cout << "YES" << endl;

            sort(s.begin(), s.end());
            if(s != str)
            {
                cout << s << endl;

            }
            else
            {
                swap(s[0], s[s.size()-1]);
                
                cout << s << endl;
            }

        }
        else{
            cout << "NO" << endl;
         }
        }
    }

    return 0;
}

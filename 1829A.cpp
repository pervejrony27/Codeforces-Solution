#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#define Arjent Rony

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

    string s;
    cin >> s;
    string s1 ="codeforces";
    int i, j, count = 0;

    for(i=0; i<s1.size(); i++)
    {
        for(j=i; j<s.size(); j++)
        {
            if(s1[i]!=s[j])
            {
                count++;
                break;
            }
            else
            {
                break;
            }
        }
    }
    cout << count << endl;
    }

    return 0;
}

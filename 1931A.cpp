//// Md.Pervej Ahmed Rony
/// Department of CSE.
// BAIUST

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define cin1(x) cin >> x
#define cin2(x,y) cin >> x >> y
#define cin3(x, y, z) cin >> x >> y >> z
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(d,min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(d,max(a,max(b,c))
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

void solve()
{
    lli t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;


        int max_a = min(26, n - 2);
        int max_b = min(26, n - max_a - 1);
        int max_c = n - max_a - max_b;


        char a = 'a' + (max_a - 1);
        char b = 'a' + (max_b - 1);
        char c = 'a' + (max_c - 1);


        cout << c << b << a << endl;
    }
}

int main()
{
    solve();

    return 0;
}

 

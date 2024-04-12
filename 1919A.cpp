#include <iostream>
#include <vector>
typedef long long int lli;
using namespace std;

int main()
{
    lli t;
    cin >> t;
    while(t--)
    {
        lli a, b;
        cin >> a >> b;

        lli total = a+b;
        if(total%2 == 0)
        {
            cout << "Bob";
        }
        else
        {
            cout << "Alice";
        }

       cout << endl;
    }

    return 0;
}
 

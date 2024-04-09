#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (b < 2 * a) {
            cout << (n / 2) * b + (n % 2) * a << endl;
        } else {
            cout << n * a << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int n;
        cin >> n;
        if (n != 0 && n != 1) {
            if (n % 2 == 0) {
                n += 1;
            } else {
                n -= 1;
            }
            cout << 8589934592 << " " << 4294967296 << " " << 1 << " " << n << endl;
        } else if (n == 0) {
            cout << 10 << " " << 8 << " " << 7 << " " << 15 << endl;
        } else {
            cout << 12 << " " << 3 << " " << 10 << " " << 11 << endl;
        }
    }
    return 0;
}

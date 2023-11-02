#include <bits/stdc++.h>

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long l, r, x;
        cin >> l >> r >> x;
        long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0" << endl;
        } else if (a >= b + x || b >= a + x) {
            cout << "1" << endl;
        } else if (a >= l + x && b >= l + x) {
            cout << "2" << endl;
        } else if (r >= a + x && r >= b + x) {
            cout << "2" << endl;
        } else if (a >= l + x && r >= b + x) {
            cout << "3" << endl;
        } else if (r >= a + x && b >= l + x) {
            cout << "3" << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

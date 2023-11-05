#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long x, y;
        cin >> x >> y;
        if (y % x) {
            cout << "0 0" << endl;
        } else {
            cout << "1 " << y / x << endl;
        }
    }

    return 0;
}

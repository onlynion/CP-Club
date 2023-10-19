#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long x = 1;
        while (2 * x <= n) {
            x *= 2;
        }
        x--;
        cout << x << endl;
    }
    return 0;
}

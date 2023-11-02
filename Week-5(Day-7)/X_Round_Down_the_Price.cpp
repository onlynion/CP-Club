#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    long t;
    cin >> t;

    while (t--) {
        ll m;
        cin >> m;
        ll d = 1;

        while (10 * d <= m) {
            d *= 10;
        }

        cout << m - d << endl;
    }

    return 0;
}

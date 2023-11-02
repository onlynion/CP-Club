#include <iostream>
using namespace std;

int solve() {
    int n, h, m;
    cin >> n >> h >> m;

    int hi, mi, res = 10000;
    int t = 60 * h + m;

    for (int i = 0; i < n; i++) {
        cin >> hi >> mi;
        int ti = 60 * hi + mi;
        if (ti < t) {
            ti += 24 * 60;
        }
        if (ti - t < res) {
            res = ti - t;
        }
    }

    int rh = res / 60;
    int rm = res % 60;

    cout << rh << " " << rm << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<long> v(n, 0);

        for (long p = 0; p < n; p++) {
            v[p] = (s[p] == 'W') + (p > 0 ? v[p - 1] : 0);
        }

        long res = v[k - 1];

        for (long p = k; p < n; p++) {
            long cur = v[p] - v[p - k];
            res = (res < cur) ? res : cur;
        }

        cout << res << endl;
    }

    return 0;
}

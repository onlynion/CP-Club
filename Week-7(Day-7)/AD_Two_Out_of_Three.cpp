#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int B = 107;

    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;

        vector<vector<int>> m(B, vector<int>());
        vector<long> a(n), b(n, 1);

        long dupes = 0;

        for (long p = 0; p < n; p++) {
            cin >> a[p];
            m[a[p]].push_back(p);
            if (m[a[p]].size() == 2) {
                ++dupes;
            }
        }

        if (dupes < 2) {
            cout << "-1" << '\n';
            continue;
        }

        int cur = 0;
        for (long p = 0; p < B; p++) {
            if (m[p].size() < 2) {
                continue;
            }
            b[m[p][0]] = 2 + cur;
            cur = 1 - cur;
        }

        for (long p = 0; p < n; p++) {
            cout << b[p] << " ";
        }
        cout << '\n';
    }

    return 0;
}

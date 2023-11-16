#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;
        long m = n * (n - 1) / 2;
        vector<long> v(m);

        for (long p = 0; p < m; p++) {
            cin >> v[p];
        }

        sort(v.begin(), v.end());

        long idx = 0, step = n - 1;
        vector<long> g;

        while (idx < m) {
            g.push_back(v[idx]);
            idx += step;
            --step;
        }

        g.push_back(g.back());

        for (long p = 0; p < n; p++) {
            cout << g[p] << ' ';
        }

        cout << '\n';
    }

    return 0;
}

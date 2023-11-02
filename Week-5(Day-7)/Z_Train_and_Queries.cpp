#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    
    while (t--) {
        long n, k;
        cin >> n >> k;
        vector<long> s(n);

        for (long p = 0; p < n; p++) {
            cin >> s[p];
        }

        map<long, long> first, last;

        for (long p = 0; p < n; p++) {
            last[s[p]] = p;
            if (first.count(s[p]) == 0) {
                first[s[p]] = p;
            }
        }

        while (k--) {
            long x, y;
            cin >> x >> y;
            bool res = (first.count(x)) && (last.count(y)) && (first[x] <= last[y]);
            cout << (res ? "YES" : "NO") << endl;
        }
    }

    return 0;
}

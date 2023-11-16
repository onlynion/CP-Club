#include <iostream>
#include <set>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n, m;
        cin >> n >> m;

        multiset<long> s;
        long long total = 0;

        for (long p = 0; p < n; p++) {
            long x;
            cin >> x;
            s.insert(x);
            total += x;
        }

        while (m--) {
            long b;
            cin >> b;

            multiset<long>::iterator it = s.begin();
            total += (b - (*it));
            s.erase(it);
            s.insert(b);
        }

        cout << total << '\n';
    }

    return 0;
}

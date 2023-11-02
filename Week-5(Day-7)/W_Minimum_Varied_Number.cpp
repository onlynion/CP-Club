#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long s;
        cin >> s;
        long long res = 0;
        long long pow = 1;

        for (long p = 9; p > 0; p--) {
            if (p > s) {
                continue;
            }
            res += pow * p;
            pow *= 10;
            s -= p;
        }

        cout << res << endl;
    }

    return 0;
}

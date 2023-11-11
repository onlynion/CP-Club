#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int64_t n, k;
    cin >> n >> k;
    vector<int64_t> v;

    for (int64_t p = 1; p * p <= n; p++) {
        if (n % p != 0) {
            continue;
        }
        v.push_back(p);
        if (p * p != n) {
            v.push_back(n / p);
        }
    }

    if (k > v.size()) {
        cout << "-1" << endl;
    } else {
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }

    return 0;
}

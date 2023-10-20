#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    const ll MOD = 1e9 + 7;
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll res = 1;
        for (ll p = 0; p < k; p++) {
            res = (res * n) % MOD;
        }
        cout << res << endl;
    }

    return 0;
}

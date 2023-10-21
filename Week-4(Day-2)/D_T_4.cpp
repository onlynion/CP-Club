#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1000000007;

ll binexp(ll a, ll n) {
    if (n < 0)
        return 0;
    a %= MOD;
    ll res = 1;
    while (n) {
        if (n & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        n >>= 1;
    }
    return res;
}

int main() {
    

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = 1;
        sort(a.rbegin(), a.rend());
        ll xoro = a[0];
        ll i = 0;
        ll j = n - 1;
        while (i < j) {
            if (xoro >= a[j]) {
                xoro = (xoro ^ a[j]);
                j--;
            } else {
                ans++;
                xoro = a[i];
                i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

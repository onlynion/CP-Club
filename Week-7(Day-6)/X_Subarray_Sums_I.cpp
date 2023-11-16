#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<long long , long long> mp;
    int s = 0;
    mp[0] = 1;
    int ans = 0;

    for (long long i = 0; i < n; ++i) {
        s += a[i];
        if (mp.find(s - x) != mp.end()) {
            ans += mp[s - x];
        }
        mp[s]++;
    }

    cout << ans << '\n';
}

int main() {
   

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}

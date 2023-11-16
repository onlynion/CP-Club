#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define int long long
#define pii pair<int, int>

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<int, int> mp;
    int s = 0, ans = 0;
    mp[0] = 1;

    for (int i = 0; i < n; ++i) {
        s += a[i];
        if (mp.find(s - x) != mp.end())
            ans += mp[s - x];
        mp[s]++;
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

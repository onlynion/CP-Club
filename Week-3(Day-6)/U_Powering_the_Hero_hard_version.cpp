#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    priority_queue<int> pq;
    ll ans = 0;

    for (ll c : arr) {
        if (c == 0) {
            if (!pq.empty()) {
                ans += pq.top();
                pq.pop();
            }
        } else {
            pq.push(c);
        }
    }

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++) {
        solve();
    }

    return 0;
}

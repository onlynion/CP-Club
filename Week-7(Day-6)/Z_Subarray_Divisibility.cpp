#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;



void solve() {
    
    int n;
    cin >> n;

    int a[n + 1] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    int s = 0;
    mp[0] = 1;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        s += a[i];
        s %= n;

        while (s < 0) s += n;

        if (mp.find(s) != mp.end()) ans += mp[s];
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

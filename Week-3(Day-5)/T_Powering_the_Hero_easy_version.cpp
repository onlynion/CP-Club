#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int ans = 0;
    vector<int> buffs;
    buffs.reserve(n);

    for (int e : s) {
        if (e > 0) {
            buffs.push_back(e);
            int j = buffs.size() - 1;
            while (j > 0 && buffs[j] < buffs[j - 1]) {
                swap(buffs[j], buffs[j - 1]);
                j--;
            }
        } else if (!buffs.empty()) {
            ans += buffs.back();
            buffs.pop_back();
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}

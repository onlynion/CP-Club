#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int cnt = 0;
    unordered_set<int> set;
    for (int i = n - 1; i >= 0; i--) {
        if (set.count(nums[i]) > 0) {
            break;
        }
        set.insert(nums[i]);
        cnt++;
    }

    cout << n - cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

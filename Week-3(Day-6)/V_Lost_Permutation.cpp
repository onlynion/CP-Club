#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }

        int sm = 0;
        int cnt = 0;
        for (int i = 1; i <= s; i++) {
            if (sm >= s) {
                break;
            }
            sm += i;
            cnt = i;
        }

        if (sm != s || *max_element(a.begin(), a.end()) > cnt || cnt <= n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

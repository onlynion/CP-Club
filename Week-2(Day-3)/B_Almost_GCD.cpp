#include <bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int hi = 0;
    int ans = 0;

    for (int i = 2; i <= *max_element(a.begin(), a.end()); i++) {
        int cnt = 0;
        for (int j : a) {
            if (j % i == 0) {
                cnt++;
            }
        }
        if (cnt > hi) {
            hi = cnt;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n) {
    sort(a, a + n);

    int result = 0;
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        result += a[j] - a[i];
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(a, n) << endl;
    }
    return 0;
}

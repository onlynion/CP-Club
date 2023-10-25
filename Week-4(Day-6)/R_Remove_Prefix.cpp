#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n) {
    unordered_set<int> seen;
    int index = n;
    while (index != 0 && seen.find(a[index - 1]) == seen.end()) {
        --index;
        seen.insert(a[index]);
    }

    return index;
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

        int result = solve(a, n);
        cout << result << endl;
    }

    return 0;
}

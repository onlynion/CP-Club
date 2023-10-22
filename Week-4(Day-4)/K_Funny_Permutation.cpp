#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
    if (n == 3) {
        return "-1";
    }

    vector<int> result(n);
    result[0] = n;
    result[1] = n - 1;
    for (int i = 2; i < n; ++i) {
        result[i] = i - 1;
    }

    ostringstream oss;
    for (int i = 0; i < n; ++i) {
        oss << result[i];
        if (i < n - 1) {
            oss << ' ';
        }
    }

    return oss.str();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
